#include "employer.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

employer::employer()
{

}


employer::employer(const QString& prenom, const QString& nom, const QString& username, const QString& password,
                   const QString& adresse, const QString& email, const QString& role,
                   const QDate& dateEmbauche, int tel, float salaire)
{
    this->prenom = prenom;
    this->nom = nom;
    this->username = username;
    this->password = password;
    this->adresse = adresse;
    this->email = email;
    this->role = role;
    this->dateEmbauche = dateEmbauche;
    this->tel = tel;
    this->salaire = salaire;
}


bool employer::add()
{
    // Prepare the SQL query
    QSqlQuery query;
    // Convert numeric fields to QString
        QString salaireConvertir = QString::number(salaire, 'f', 2);
        QString idconvertit = QString::number(idemp);
        QString telconv = QString::number(tel);
        // Convert the date to a string format compatible with TO_DATE
        QString dateString = dateEmbauche.toString("dd-MM-yyyy");

    query.prepare("INSERT INTO EMPLOYES ( ADRESSE, DATE_AMBAUCHE, ROLE,  SALAIRE, EMAIL, NOM,  PASSWORD, PRENOMEMPLOYE, TEL, USERNAME, IDEMPLOYE )  "
                  "VALUES (:adresse, TO_DATE(:dateEmbauche, 'DD-MM-YYYY'), :role, :salaire,:email, :nom,:password, :prenom,:tel,:username,IDEMPLOYE.NEXTVAL )");

    // Bind the values from the Employer object
    query.bindValue(":adresse", adresse);
    query.bindValue(":dateEmbauche", dateString);  // Ensure date format
    query.bindValue(":email", email);
    query.bindValue(":idemp", idconvertit);
    query.bindValue(":nom", nom);
    query.bindValue(":password",password);
    query.bindValue(":prenom", prenom);
    query.bindValue(":role", role);
    query.bindValue(":salaire", salaire);
    query.bindValue(":tel", telconv);
    query.bindValue(":username", username);

    // Execute the query and check for errors
    if (query.exec()) {
        // Query executed successfully
        QMessageBox::information(nullptr, "Success", "Employee added successfully.");
        return true;
    } else {
        // Query failed
        qDebug() << "Error while adding employee:" << query.lastError().text();
        QMessageBox::warning(nullptr, "Error", "Failed to add employee.");
        return false;
    }
}
bool employer::supprimer(int code) {
    QSqlQuery query;

    query.prepare("DELETE FROM EMPLOYES WHERE IDEMPLOYE = :id");
    query.bindValue(":id", code);  // Bind the integer directly

    return query.exec();
}
QSqlTableModel* employer::afficher() {
    // Create a QSqlTableModel instance
    QSqlTableModel* model = new QSqlTableModel();

    // Specify the full schema and table name if necessary
    model->setTable("YASMINE.EMPLOYES"); // Assuming your schema is HR

    // Set the edit strategy (update the database whenever a field is modified)
    model->setEditStrategy(QSqlTableModel::OnFieldChange);

    // Attempt to fetch the data
    if (!model->select()) {
        qDebug() << "Error selecting data: " << model->lastError().text();
    }

    // Set custom headers for the table
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDEMPLOYE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("USERNAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOMEMPLOYE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TEL"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("PASSWORD"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("SALAIRE"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("ROLE"));
    model->setHeaderData(9, Qt::Horizontal, QObject::tr("DATE AMBAUCHE"));
    model->setHeaderData(10, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(11, Qt::Horizontal, QObject::tr("PRESENCE"));


    return model;
}

bool employer::meuilleurEmployes(int presence){
    QSqlQuery query;
    query.prepare("SELECT presence FROM EMPLOYES WHERE presence :presence ");
}
