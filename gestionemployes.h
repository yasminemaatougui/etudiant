#ifndef GESTIONEMPLOYES_H
#define GESTIONEMPLOYES_H

#include <QDialog>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QComboBox>
#include <QTableView>
#include <QDebug>
#include <QAxObject>
#include <QFileDialog>
#include <QFontMetrics>
#include <QHeaderView>
#include <QPageSize>
#include <QSqlTableModel>
#include <QFont>
#include <QPdfWriter>
#include <QPainter>

#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QtCharts>

#include "employer.h"

namespace Ui {
class GestionEmployes;
}

class GestionEmployes : public QDialog
{
    Q_OBJECT

public:
    explicit GestionEmployes(QWidget *parent = nullptr);
    ~GestionEmployes();

    void setCurrentUser(const QString &username); // Pour définir l'utilisateur courant

private slots:
    void on_Add_button_2_clicked();
    void on_delete_button_2_clicked();
    void on_lineEdit_13_textChanged(const QString &arg1);
    void exporterEnPDF();
    void exporterEnExcel();
    void trierTableView(int index);
    void loadComboBoxData();
    void onComboBoxIndexChanged(int index);
    void displayTopEmployee();
    void on_showTopEmployeeButton_clicked();
    void sendMessage(); // Nouvelle méthode pour envoyer un message

private:
    Ui::GestionEmployes *ui;
    employer emp;
    QComboBox *comboBox;
    QString currentUser; // Pour stocker le nom de l'utilisateur courant

    // Méthodes ajoutées
    void loadMessages(); // Pour charger les messages depuis la base de données
    void saveMessage(const QString &username, const QString &message); // Pour enregistrer un message
};

#endif // GESTIONEMPLOYES_H
