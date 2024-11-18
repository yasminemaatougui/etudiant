#include "gestionemployes.h"
#include "ui_gestionemployes.h"
#include "employer.h"
#include <QSqlQuery>
#include <QSqlError>  // For error handling
#include <QComboBox>

#include <QDialog>

GestionEmployes::GestionEmployes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GestionEmployes)
{
    ui->setupUi(this);

        loadMessages();
       comboBox = ui->comboBox;
        connect(ui->pushButton_10, &QPushButton::clicked, this, [this]() {
            ui->stackedWidget->setCurrentIndex(0);
        });
        connect(ui->pushButton_2, &QPushButton::clicked, this, [this]() {
            ui->stackedWidget->setCurrentIndex(1);
        });
        connect(ui->pushButton_11, &QPushButton::clicked, this, [this]() {
            ui->stackedWidget->setCurrentIndex(2);});

        connect(ui->pushButton_12, &QPushButton::clicked, this, [this]() {
            ui->stackedWidget->setCurrentIndex(3);
            // Add ComboBox data loading functionality (e.g., load on initialization)

        });

        connect(ui->sendButton, &QPushButton::clicked, this, &GestionEmployes::sendMessage);
        connect(ui->inputField, &QLineEdit::returnPressed, this, &GestionEmployes::sendMessage);

        loadComboBoxData();
        ui->tableView->setModel(emp.afficher());
        connect(ui->tri, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &GestionEmployes::trierTableView);
        connect(ui->pdf, &QPushButton::clicked, this, &GestionEmployes::exporterEnPDF);
        connect(ui->excel,&QPushButton::clicked, this, &GestionEmployes::exporterEnExcel);
}

GestionEmployes::~GestionEmployes()
{
    delete ui;
}

void GestionEmployes::on_Add_button_2_clicked()
{
   QString name = ui->name->text();
   QString firstname = ui->firstname->text();
   QString adresse = ui->adresse->text();
   QString email = ui->email->text();
   QString role = ui->role->text();
   QString username = ui->username->text();
   QString password = ui->password->text();
   //int id = ui->idemp->text().toInt();
   int tel = ui->tel->text().toInt();
   float salaire = ui->salaire->text().toFloat();
   QDate date = ui->dateEdit->date();
   employer emp(firstname, name, username, password, adresse, email, role, date, tel, salaire);
   bool test = emp.add();

       if (test) // If query executed successfully
       {
           ui->tableView->setModel(emp.afficher());
           QMessageBox::information(nullptr, QObject::tr("OK"),
                                    QObject::tr("Ajout effectué\n"
                                                "Click Cancel to exit."), QMessageBox::Cancel);
       }
       else // If query execution failed
       {
           QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                                 QObject::tr("Ajout non effectué.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
       }

}


void GestionEmployes::on_delete_button_2_clicked()
{
    int id = ui->deleteline->text().toInt();
           bool test = emp.supprimer(id);

           if (test) {
               ui->tableView->setModel(emp.afficher());
               QMessageBox::information(nullptr, QObject::tr("Ok"),
                                        QObject::tr("Suppression effectuée\n"
                                                    "Click Cancel to exit."),
                                        QMessageBox::Cancel);
           } else {
               QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
                                     QObject::tr("Suppression non effectuée.\n"
                                                 "Click Cancel to exit."),
                                     QMessageBox::Cancel);
           }
}
void GestionEmployes::on_lineEdit_13_textChanged(const QString &arg1)
{
    // Cast the model to QSqlTableModel
    QSqlTableModel *model = qobject_cast<QSqlTableModel*>(ui->tableView->model());
    if (!model) {
        qWarning("Failed to cast model to QSqlTableModel.");
        return;
    }

    // If search field is empty, remove any filter to display all records
    if (arg1.isEmpty()) {
        model->setFilter(""); // Remove the filter to show all entries
    } else {
        // Apply a case-insensitive filter
        model->setFilter(QString("LOWER(NOM) LIKE '%%1%'").arg(arg1.toLower()));  // Convert search to lowercase
    }

    // Refresh the model to apply the filter
    model->select();
}
void GestionEmployes::exporterEnPDF() {
    QString filename = QFileDialog::getSaveFileName(this, "Exporter en PDF", "", "PDF Files (*.pdf)");

    if (filename.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Nom de fichier non spécifié.");
        return;
    }

    QPdfWriter writer(filename);
    writer.setPageSize(QPageSize(QPageSize::A4));
    writer.setResolution(300);

    QPainter painter(&writer);
    int margin = 30;
    painter.translate(margin, margin);

    QFont headerFont("Arial", 12, QFont::Bold);
    QFont dataFont("Arial", 10);
    painter.setFont(headerFont);

    QSqlTableModel *model = qobject_cast<QSqlTableModel*>(ui->tableView->model());

    if (model) {
        int yOffset = 50;
        int rowHeight = 200;
        int columnWidth = 500; // Augmenté pour un meilleur espacement des colonnes

        // Dessiner les en-têtes des colonnes
        for (int col = 0; col < model->columnCount(); ++col) {
            painter.drawText(col * columnWidth, yOffset, model->headerData(col, Qt::Horizontal).toString());
        }
        yOffset += rowHeight;

        // Dessiner les lignes de données
        painter.setFont(dataFont);
        for (int row = 0; row < model->rowCount(); ++row) {
            for (int col = 0; col < model->columnCount(); ++col) {
                QString cellText = model->data(model->index(row, col)).toString();
                painter.drawText(col * columnWidth, yOffset, cellText);
            }
            yOffset += rowHeight;
        }
    }

    painter.end();

    QMessageBox::information(this, "Succès", "Données exportées avec succès en PDF.");
}
void GestionEmployes::exporterEnExcel() {
    // Sélectionner un emplacement pour sauvegarder le fichier Excel
    QString filename = QFileDialog::getSaveFileName(this, "Exporter en Excel", "", "Excel Files (*.xlsx)");

    if (filename.isEmpty()) {
        return; // Si aucun fichier n'est sélectionné, on quitte la fonction
    }

    // Obtenir le modèle de données du QTableView
    QSqlTableModel *model = qobject_cast<QSqlTableModel*>(ui->tableView->model());
    if (!model) {
        return; // Si le modèle n'est pas valide, on quitte la fonction
    }

    // Initialiser Excel via QAxObject
    QAxObject *excel = new QAxObject("Excel.Application", this);
    excel->setProperty("Visible", false); // Rendre Excel invisible pendant l'exportation

    // Créer un nouveau classeur
    QAxObject *workbooks = excel->querySubObject("Workbooks");
    QAxObject *workbook = workbooks->querySubObject("Add");
    QAxObject *sheet = workbook->querySubObject("Worksheets(int)", 1); // Sélectionner la première feuille

    // Exporter les en-têtes du modèle
    for (int col = 0; col < model->columnCount(); ++col) {
        QString headerText = model->headerData(col, Qt::Horizontal).toString();
        QString cell = QString("%1%2").arg(QChar('A' + col)).arg(1); // Ex: "A1", "B1", ...
        QAxObject *cellObject = sheet->querySubObject("Range(const QString&)", cell);
        cellObject->setProperty("Value", headerText);
        delete cellObject;
    }

    // Exporter les données du tableau
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int col = 0; col < model->columnCount(); ++col) {
            QString cellText = model->data(model->index(row, col)).toString();
            QString cell = QString("%1%2").arg(QChar('A' + col)).arg(row + 2); // Ligne 2 pour les données
            QAxObject *cellObject = sheet->querySubObject("Range(const QString&)", cell);
            cellObject->setProperty("Value", cellText);
            delete cellObject;
        }
    }

    // Sauvegarder le fichier Excel
    workbook->dynamicCall("SaveAs(const QString&)", QDir::toNativeSeparators(filename));

    // Fermer Excel
    workbook->dynamicCall("Close()");
    excel->dynamicCall("Quit()");

    // Libérer la mémoire
    delete sheet;
    delete workbook;
    delete workbooks;
    delete excel;
}

void GestionEmployes::trierTableView(int index) {
    QSqlTableModel *model = qobject_cast<QSqlTableModel*>(ui->tableView->model());

    if (model) {
        if (index == 0) {  // Si l'index est 0, réinitialiser le tri
            model->setSort(-1, Qt::AscendingOrder);
        } else {
            switch (index) {
            case 1:
                model->setSort(model->fieldIndex("NOM"), Qt::AscendingOrder);
                break;
            case 2:
                model->setSort(model->fieldIndex("PRENOMEMPLOYE"), Qt::DescendingOrder);
                break;
            default:
                return;
            }
        }
        model->select();  // Rafraîchir la vue avec les données triées
    }
}
void GestionEmployes::loadComboBoxData() {
    // Ensure the database connection is open
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Error", "Database connection is not open.");
        return;
    }

    // Query to get the 'NOM' column from the 'EMPLOYES' table
    QSqlQuery query;
    query.prepare("SELECT NOM FROM EMPLOYES");
    if (!query.exec()) {
        QMessageBox::critical(this, "Query Error", "Failed to execute query: " + query.lastError().text());
        return;
    }

    // Clear previous items from the ComboBox
    comboBox->clear();

    // Add all employee names to the ComboBox
    while (query.next()) {
        QString name = query.value(0).toString();  // Get the value from the first column (NOM)
        comboBox->addItem(name);  // Add the name to ComboBox
    }

    // When a user selects an item from the ComboBox, the following operation will happen
    connect(comboBox, &QComboBox::currentIndexChanged, this, &GestionEmployes::onComboBoxIndexChanged);
}

void GestionEmployes::onComboBoxIndexChanged(int /*index*/) {
    // Get the selected employee's name from the ComboBox
    QString selectedEmployeeName = comboBox->currentText();

    // Get the absence value from the QLineEdit
    bool ok;
    int absence = ui->lineEditAbsence->text().toInt(&ok);  // Assume lineEditAbsence is where the user enters absence days

    // If the input is not a valid number, return
    if (!ok || absence < 0) {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid number of absence days.");
        return;
    }

    // Query to get the current 'presence' for the selected employee
    QSqlQuery query;
    query.prepare("SELECT presence FROM EMPLOYES WHERE NOM = :name");
    query.bindValue(":name", selectedEmployeeName);

    if (!query.exec()) {
        QMessageBox::critical(this, "Query Error", "Failed to execute query: " + query.lastError().text());
        return;
    }

    // Check if the query returned any data
    if (query.next()) {
        int currentPresence = query.value(0).toInt();  // Get the current presence value

        // Subtract the absence days from the current presence
        int newPresence = currentPresence - absence;

        // Update the database with the new 'presence' value
        QSqlQuery updateQuery;
        updateQuery.prepare("UPDATE EMPLOYES SET presence = :newPresence WHERE NOM = :name");
        updateQuery.bindValue(":newPresence", newPresence);
        updateQuery.bindValue(":name", selectedEmployeeName);

        if (!updateQuery.exec()) {
            QMessageBox::critical(this, "Update Error", "Failed to update presence: " + updateQuery.lastError().text());
        } else {
            ui->tableView->setModel(emp.afficher());
            QMessageBox::information(this, "Success", "Employee's presence updated successfully.");
        }
    } else {
        QMessageBox::warning(this, "No Data", "Employee not found in the database.");
    }
}
void GestionEmployes::displayTopEmployee() {
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Error", "Database connection is not open.");
        return;
    }

    // Correct SQL query for Oracle 11g using ROWNUM
    QSqlQuery query;
    query.prepare("SELECT NOM, presence "
                  "FROM ( "
                  "   SELECT NOM, presence "
                  "   FROM EMPLOYES "
                  "   ORDER BY presence DESC "
                  ") "
                  "WHERE ROWNUM = 1");

    if (!query.exec()) {
        QMessageBox::critical(this, "Query Error", "Failed to execute query: " + query.lastError().text());
        return;
    }

    if (query.next()) {
        QString name = query.value(0).toString();   // Employee's name
        int presence = query.value(1).toInt();     // Employee's presence

        // Show the result
        QString resultMessage = QString("Employee with most presence:\nName: %1\nPresence: %2 days")
                                    .arg(name)
                                    .arg(presence);

        QMessageBox::information(this, "Top Employee", resultMessage);
    } else {
        QMessageBox::information(this, "No Data", "No employee data found in the database.");
    }
}


void GestionEmployes::on_showTopEmployeeButton_clicked()
{
    displayTopEmployee();  // Call the function to show the employee with the most presence

}

void GestionEmployes::setCurrentUser(const QString &username) {
    currentUser = username; // Assigner le nom d'utilisateur
}

void GestionEmployes::sendMessage() {
    QString message = ui->inputField->text(); // Supposons que vous avez un champ de texte pour la saisie
    if (!message.isEmpty()) {
        // Afficher le message dans la zone de chat
        ui->chatArea->append(currentUser + ": " + message);

        // Enregistrer le message dans la base de données
        saveMessage(currentUser, message);

        // Recharger les messages pour afficher le nouveau message
        loadMessages();

        // Vider le champ de saisie
        ui->inputField->clear();
    }
}
void GestionEmployes::loadMessages() {
    QSqlQuery query("SELECT USERNAME, MESSAGE FROM MESSAGES");

    if (!query.exec()) {
        qDebug() << "Erreur lors de la récupération des messages:" << query.lastError().text();
        return;
    }

    ui->chatArea->clear(); // Vider la zone de chat avant de charger les nouveaux messages

    while (query.next()) {
        QString username = query.value(0).toString();
        QString message = query.value(1).toString();
        ui->chatArea->append(username + ": " + message);
    }
}

void GestionEmployes::saveMessage(const QString &username, const QString &message) {
    QSqlQuery query;
    query.prepare("INSERT INTO MESSAGES (USERNAME, MESSAGE) VALUES (:username, :message)");
    query.bindValue(":username", username);
    query.bindValue(":message", message);

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'enregistrement du message:" << query.lastError().text();
    }
}
