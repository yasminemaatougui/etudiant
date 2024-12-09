#ifndef EMPLOYER_H
#define EMPLOYER_H
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

class employer
{
private:
    QString prenom ,nom , username , password , adresse , email ,role , idemp;
    QDate dateEmbauche ;
    int tel  ;
    float salaire ;
public:
    employer();
    employer(const QString& idemp, const QString& prenom, const QString& nom, const QString& username, const QString& password,
                const QString& adresse, const QString& email, const QString& role,
                const QDate& dateEmbauche, int tel, float salaire);
    bool add();
    bool supprimer(QString code);
    QSqlTableModel* afficher();
    bool meuilleurEmployes(int presence);
signals:
    void addCompleted(bool success);
    void deleteCompleted(bool success);
};

#endif // EMPLOYER_H
