#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QCryptographicHash>
#include "gestionemployes.h" // N'oubliez pas d'inclure le header de GestionEmployes

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->login, &QPushButton::clicked, this, &MainWindow::on_pushButton_login_clicked);
    connect(ui->cancel, &QPushButton::clicked, this, &MainWindow::on_pushButton_cancel_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked() {
    QString username = ui->A->text().trimmed();     // Champ de texte pour le nom d'utilisateur
    QString password = ui->B->text().trimmed();     // Champ de texte pour le mot de passe

    // Préparez la requête SQL pour récupérer le mot de passe pour le nom d'utilisateur entré
    QSqlQuery query;
    query.prepare("SELECT password FROM EMPLOYES WHERE username = :username");
    query.bindValue(":username", username);

    if (query.exec()) {
        if (query.next()) {
            QString storedPassword = query.value(0).toString(); // Récupérer le mot de passe stocké

            // Comparer le mot de passe entré avec le mot de passe stocké
            if (storedPassword == password) {
                // Si les mots de passe correspondent, la connexion est réussie
                QMessageBox::information(this, "Succès", "Connexion réussie.");

                // Créer une instance de GestionEmployes et définir le nom d'utilisateur
                GestionEmployes *gp = new GestionEmployes();
                gp->setCurrentUser(username); // Définir le nom d'utilisateur courant
                gp->setAttribute(Qt::WA_DeleteOnClose); // Assurer la libération de la mémoire lors de la fermeture
                this->hide(); // Cacher la fenêtre de connexion
                gp->show(); // Afficher la fenêtre de gestion
            } else {
                // Si les mots de passe ne correspondent pas
                QMessageBox::warning(this, "Échec", "Nom d'utilisateur ou mot de passe incorrect.");
            }
        } else {
            // Aucun utilisateur trouvé avec le nom d'utilisateur entré
            QMessageBox::warning(this, "Échec", "Nom d'utilisateur incorrect.");
        }
    } else {
        // Échec de l'exécution de la requête
        qDebug() << "Erreur lors de l'exécution de la requête:" << query.lastError().text();
        QMessageBox::warning(this, "Erreur", "Une erreur s'est produite lors de l'authentification.");
    }
}

void MainWindow::on_pushButton_cancel_clicked() {
    this->close(); // Fermer la fenêtre de connexion
}
