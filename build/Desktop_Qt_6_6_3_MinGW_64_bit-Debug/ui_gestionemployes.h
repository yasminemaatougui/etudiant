/********************************************************************************
** Form generated from reading UI file 'gestionemployes.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONEMPLOYES_H
#define UI_GESTIONEMPLOYES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestionEmployes
{
public:
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_10;
    QPushButton *pushButton_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_7;
    QLineEdit *firstname;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_8;
    QLineEdit *name;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEdit_14;
    QLineEdit *username;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *lineEdit_15;
    QLineEdit *password;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *lineEdit_9;
    QLineEdit *email;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_10;
    QLineEdit *adresse;
    QPushButton *Add_button_2;
    QWidget *widget_15;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_22;
    QHBoxLayout *horizontalLayout_18;
    QLineEdit *lineEdit_22;
    QLineEdit *tel;
    QWidget *widget_23;
    QHBoxLayout *horizontalLayout_19;
    QLineEdit *lineEdit_23;
    QLineEdit *role;
    QWidget *widget_24;
    QHBoxLayout *horizontalLayout_20;
    QLineEdit *lineEdit_24;
    QLineEdit *salaire;
    QWidget *widget_25;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_25;
    QDateEdit *dateEdit;
    QWidget *widget_26;
    QHBoxLayout *horizontalLayout_22;
    QWidget *page_4;
    QTableView *tableView;
    QLineEdit *deleteline;
    QPushButton *delete_button_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label;
    QLineEdit *lineEdit_13;
    QComboBox *tri;
    QPushButton *pdf;
    QPushButton *excel;
    QWidget *page;
    QComboBox *comboBox;
    QLineEdit *lineEditAbsence;
    QPushButton *showTopEmployeeButton;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QWidget *widget_9;
    QWidget *widget_8;
    QFormLayout *formLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QDialog *GestionEmployes)
    {
        if (GestionEmployes->objectName().isEmpty())
            GestionEmployes->setObjectName("GestionEmployes");
        GestionEmployes->resize(1035, 628);
        GestionEmployes->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;   /* Green background */\n"
"    color: white;                 /* White text */\n"
"    border: none;                 /* No border */\n"
"    padding: 10px 20px;           /* Padding around the text */\n"
"    font-size: 16px;              /* Font size */\n"
"    border-radius: 12px;         /* Rounded corners */\n"
"    cursor: pointer;             /* Pointer cursor on hover */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;   /* Darker green when hovering */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;   /* Even darker green when pressed */\n"
"}\n"
""));
        frame_3 = new QFrame(GestionEmployes);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(260, 10, 751, 55));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: white;\n"
"    width: 10px;\n"
"    border: 2px solid #00a388;\n"
"    border-radius: 15px;\n"
"}"));
        frame_3->setFrameShape(QFrame::Shape::NoFrame);
        horizontalLayout_6 = new QHBoxLayout(frame_3);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton_10 = new QPushButton(frame_3);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setMinimumSize(QSize(0, 30));

        horizontalLayout_6->addWidget(pushButton_10);

        pushButton_2 = new QPushButton(frame_3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 30));

        horizontalLayout_6->addWidget(pushButton_2);

        pushButton_11 = new QPushButton(frame_3);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setMinimumSize(QSize(0, 30));

        horizontalLayout_6->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(frame_3);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setMinimumSize(QSize(0, 30));

        horizontalLayout_6->addWidget(pushButton_12);

        stackedWidget = new QStackedWidget(GestionEmployes);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(270, 70, 751, 551));
        stackedWidget->setStyleSheet(QString::fromUtf8("#stackedWidget {\n"
"    background-color: white;\n"
"    width: 10px;\n"
"    border: 2px solid #00a388;\n"
"    border-radius: 15px;\n"
"}"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        widget_10 = new QWidget(page_3);
        widget_10->setObjectName("widget_10");
        widget_10->setGeometry(QRect(30, 20, 325, 431));
        verticalLayout_2 = new QVBoxLayout(widget_10);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_11 = new QWidget(widget_10);
        widget_11->setObjectName("widget_11");
        horizontalLayout_7 = new QHBoxLayout(widget_11);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        lineEdit_7 = new QLineEdit(widget_11);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setMaximumSize(QSize(143, 16777215));
        lineEdit_7->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	 color:#00a388;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"	\n"
"	;\n"
"}"));
        lineEdit_7->setFrame(false);

        horizontalLayout_7->addWidget(lineEdit_7);

        firstname = new QLineEdit(widget_11);
        firstname->setObjectName("firstname");
        firstname->setMinimumSize(QSize(0, 0));
        firstname->setMaximumSize(QSize(159, 16777215));
        firstname->setStyleSheet(QString::fromUtf8("#nameline_2 {\n"
"	background-color: rgb(196, 255, 238);\n"
"    border: 2px solid  #00a388;; /* Bordure rose */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 2px;\n"
"}\n"
""));

        horizontalLayout_7->addWidget(firstname);


        verticalLayout_2->addWidget(widget_11);

        widget_12 = new QWidget(widget_10);
        widget_12->setObjectName("widget_12");
        horizontalLayout_8 = new QHBoxLayout(widget_12);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        lineEdit_8 = new QLineEdit(widget_12);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setMaximumSize(QSize(143, 16777215));
        lineEdit_8->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	 color:#00a388;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"	\n"
"	;\n"
"}"));
        lineEdit_8->setFrame(false);

        horizontalLayout_8->addWidget(lineEdit_8);

        name = new QLineEdit(widget_12);
        name->setObjectName("name");
        name->setMinimumSize(QSize(0, 0));
        name->setMaximumSize(QSize(159, 16777215));
        name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(196, 255, 238);\n"
"    border: 2px solid  #00a388;; /* Bordure rose */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 2px;\n"
"}"));

        horizontalLayout_8->addWidget(name);


        verticalLayout_2->addWidget(widget_12);

        widget_14 = new QWidget(widget_10);
        widget_14->setObjectName("widget_14");
        horizontalLayout_10 = new QHBoxLayout(widget_14);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        lineEdit_14 = new QLineEdit(widget_14);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setMaximumSize(QSize(126, 16777215));
        lineEdit_14->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	 color:#00a388;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"	\n"
"	;\n"
"}"));
        lineEdit_14->setFrame(false);

        horizontalLayout_10->addWidget(lineEdit_14);

        username = new QLineEdit(widget_14);
        username->setObjectName("username");
        username->setMinimumSize(QSize(0, 0));
        username->setMaximumSize(QSize(159, 16777215));
        username->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(196, 255, 238);\n"
"    border: 2px solid  #00a388;; /* Bordure rose */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 2px;\n"
"}"));

        horizontalLayout_10->addWidget(username);


        verticalLayout_2->addWidget(widget_14);

        widget_16 = new QWidget(widget_10);
        widget_16->setObjectName("widget_16");
        horizontalLayout_11 = new QHBoxLayout(widget_16);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        lineEdit_15 = new QLineEdit(widget_16);
        lineEdit_15->setObjectName("lineEdit_15");
        lineEdit_15->setMaximumSize(QSize(143, 16777215));
        lineEdit_15->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	 color:#00a388;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"	\n"
"	;\n"
"}"));
        lineEdit_15->setFrame(false);

        horizontalLayout_11->addWidget(lineEdit_15);

        password = new QLineEdit(widget_16);
        password->setObjectName("password");
        password->setMinimumSize(QSize(0, 0));
        password->setMaximumSize(QSize(159, 16777215));
        password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(196, 255, 238);\n"
"    border: 2px solid  #00a388;; /* Bordure rose */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 2px;\n"
"}"));

        horizontalLayout_11->addWidget(password);


        verticalLayout_2->addWidget(widget_16);

        widget_13 = new QWidget(widget_10);
        widget_13->setObjectName("widget_13");
        horizontalLayout_9 = new QHBoxLayout(widget_13);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        lineEdit_9 = new QLineEdit(widget_13);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setMaximumSize(QSize(76, 16777215));
        lineEdit_9->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	 color:#00a388;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"	\n"
"	;\n"
"}"));
        lineEdit_9->setFrame(false);

        horizontalLayout_9->addWidget(lineEdit_9);

        email = new QLineEdit(widget_13);
        email->setObjectName("email");
        email->setMinimumSize(QSize(0, 0));
        email->setMaximumSize(QSize(16777215, 16777215));
        email->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(196, 255, 238);\n"
"    border: 2px solid  #00a388;; /* Bordure rose */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 2px;\n"
"}"));

        horizontalLayout_9->addWidget(email);


        verticalLayout_2->addWidget(widget_13);

        widget_2 = new QWidget(widget_10);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_10 = new QLineEdit(widget_2);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setMaximumSize(QSize(80, 16777215));
        lineEdit_10->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	 color:#00a388;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"	\n"
"	;\n"
"}"));
        lineEdit_10->setFrame(false);

        horizontalLayout->addWidget(lineEdit_10);

        adresse = new QLineEdit(widget_2);
        adresse->setObjectName("adresse");
        adresse->setMaximumSize(QSize(191, 16777215));
        adresse->setStyleSheet(QString::fromUtf8("#lineEdit_11 {\n"
"	background-color: rgb(196, 255, 238);\n"
"    border: 2px solid  #00a388;; /* Bordure rose */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 2px;\n"
"}"));

        horizontalLayout->addWidget(adresse);


        verticalLayout_2->addWidget(widget_2);

        Add_button_2 = new QPushButton(page_3);
        Add_button_2->setObjectName("Add_button_2");
        Add_button_2->setGeometry(QRect(310, 480, 116, 31));
        Add_button_2->setStyleSheet(QString::fromUtf8("#Add_button_2 {\n"
"	\n"
"	background-color: rgb(228, 0, 0);\n"
"    color: white; /* Texte blanc */\n"
"    border: none;\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 8px;\n"
"}"));
        widget_15 = new QWidget(page_3);
        widget_15->setObjectName("widget_15");
        widget_15->setGeometry(QRect(370, 20, 325, 343));
        verticalLayout_4 = new QVBoxLayout(widget_15);
        verticalLayout_4->setObjectName("verticalLayout_4");
        widget_22 = new QWidget(widget_15);
        widget_22->setObjectName("widget_22");
        horizontalLayout_18 = new QHBoxLayout(widget_22);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        lineEdit_22 = new QLineEdit(widget_22);
        lineEdit_22->setObjectName("lineEdit_22");
        lineEdit_22->setMaximumSize(QSize(143, 16777215));
        lineEdit_22->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	 color:#00a388;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"	\n"
"	;\n"
"}"));
        lineEdit_22->setFrame(false);

        horizontalLayout_18->addWidget(lineEdit_22);

        tel = new QLineEdit(widget_22);
        tel->setObjectName("tel");
        tel->setMinimumSize(QSize(0, 0));
        tel->setMaximumSize(QSize(159, 16777215));
        tel->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(196, 255, 238);\n"
"    border: 2px solid  #00a388;; /* Bordure rose */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 2px;\n"
"}"));

        horizontalLayout_18->addWidget(tel);


        verticalLayout_4->addWidget(widget_22);

        widget_23 = new QWidget(widget_15);
        widget_23->setObjectName("widget_23");
        horizontalLayout_19 = new QHBoxLayout(widget_23);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        lineEdit_23 = new QLineEdit(widget_23);
        lineEdit_23->setObjectName("lineEdit_23");
        lineEdit_23->setMaximumSize(QSize(143, 16777215));
        lineEdit_23->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	 color:#00a388;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"	\n"
"	;\n"
"}"));
        lineEdit_23->setFrame(false);

        horizontalLayout_19->addWidget(lineEdit_23);

        role = new QLineEdit(widget_23);
        role->setObjectName("role");
        role->setMinimumSize(QSize(0, 0));
        role->setMaximumSize(QSize(159, 16777215));
        role->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(196, 255, 238);\n"
"    border: 2px solid  #00a388;; /* Bordure rose */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 2px;\n"
"}"));

        horizontalLayout_19->addWidget(role);


        verticalLayout_4->addWidget(widget_23);

        widget_24 = new QWidget(widget_15);
        widget_24->setObjectName("widget_24");
        horizontalLayout_20 = new QHBoxLayout(widget_24);
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        lineEdit_24 = new QLineEdit(widget_24);
        lineEdit_24->setObjectName("lineEdit_24");
        lineEdit_24->setMaximumSize(QSize(126, 16777215));
        lineEdit_24->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	 color:#00a388;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"	\n"
"	;\n"
"}"));
        lineEdit_24->setFrame(false);

        horizontalLayout_20->addWidget(lineEdit_24);

        salaire = new QLineEdit(widget_24);
        salaire->setObjectName("salaire");
        salaire->setMinimumSize(QSize(0, 0));
        salaire->setMaximumSize(QSize(159, 16777215));
        salaire->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(196, 255, 238);\n"
"    border: 2px solid  #00a388;; /* Bordure rose */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 2px;\n"
"}"));

        horizontalLayout_20->addWidget(salaire);


        verticalLayout_4->addWidget(widget_24);

        widget_25 = new QWidget(widget_15);
        widget_25->setObjectName("widget_25");
        verticalLayout_5 = new QVBoxLayout(widget_25);
        verticalLayout_5->setObjectName("verticalLayout_5");
        lineEdit_25 = new QLineEdit(widget_25);
        lineEdit_25->setObjectName("lineEdit_25");
        lineEdit_25->setMaximumSize(QSize(198, 16777215));
        lineEdit_25->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	 color:#00a388;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"	\n"
"	;\n"
"}"));
        lineEdit_25->setFrame(false);

        verticalLayout_5->addWidget(lineEdit_25);

        dateEdit = new QDateEdit(widget_25);
        dateEdit->setObjectName("dateEdit");

        verticalLayout_5->addWidget(dateEdit);


        verticalLayout_4->addWidget(widget_25);

        widget_26 = new QWidget(widget_15);
        widget_26->setObjectName("widget_26");
        horizontalLayout_22 = new QHBoxLayout(widget_26);
        horizontalLayout_22->setObjectName("horizontalLayout_22");

        verticalLayout_4->addWidget(widget_26);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        tableView = new QTableView(page_4);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 90, 701, 281));
        tableView->setStyleSheet(QString::fromUtf8("#tableView{\n"
"background-color: rgb(196, 255, 238);\n"
"    border: 2px solid  #00a388;; /* Bordure rose */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 2px;\n"
"}"));
        deleteline = new QLineEdit(page_4);
        deleteline->setObjectName("deleteline");
        deleteline->setGeometry(QRect(360, 380, 241, 28));
        deleteline->setStyleSheet(QString::fromUtf8("#deleteline{\n"
"background-color: rgb(196, 255, 238);\n"
"    border: 2px solid  #00a388;; /* Bordure rose */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 2px;\n"
"}"));
        delete_button_2 = new QPushButton(page_4);
        delete_button_2->setObjectName("delete_button_2");
        delete_button_2->setGeometry(QRect(430, 410, 121, 29));
        delete_button_2->setStyleSheet(QString::fromUtf8("#delete_button_2 {\n"
"	\n"
"	background-color: rgb(228, 0, 0);\n"
"    color: white; /* Texte blanc */\n"
"    border: none;\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 8px;\n"
"}"));
        frame_2 = new QFrame(page_4);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(490, 30, 231, 51));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"background-color: rgb(196, 255, 238);\n"
"    border: 2px solid  #00a388;; /* Bordure rose */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 2px;\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame_2);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/Nouveau dossier/search.svg")));
        label->setScaledContents(true);

        horizontalLayout_12->addWidget(label);

        lineEdit_13 = new QLineEdit(frame_2);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setStyleSheet(QString::fromUtf8("#lineEdit_13{\n"
"\n"
"background-color: rgb(196, 255, 238);\n"
"    border:none;; /* Bordure rose */\n"
"}"));

        horizontalLayout_12->addWidget(lineEdit_13);

        tri = new QComboBox(page_4);
        tri->addItem(QString());
        tri->addItem(QString());
        tri->addItem(QString());
        tri->setObjectName("tri");
        tri->setGeometry(QRect(50, 40, 191, 41));
        tri->setStyleSheet(QString::fromUtf8("/* Style for the ComboBox */\n"
"QComboBox {\n"
"    background-color: rgb(196, 255, 238);\n"
"    border: 2px solid #00a388;\n"
"    border-radius: 10px;\n"
"    padding: 2px;\n"
"    min-width: 120px;\n"
"}\n"
"\n"
""));
        pdf = new QPushButton(page_4);
        pdf->setObjectName("pdf");
        pdf->setGeometry(QRect(50, 380, 121, 31));
        pdf->setStyleSheet(QString::fromUtf8("#pdf{\n"
"	background-color: rgb(228, 0, 0);\n"
"    color: white; /* Texte blanc */\n"
"    border: none;\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 8px;\n"
"}"));
        excel = new QPushButton(page_4);
        excel->setObjectName("excel");
        excel->setGeometry(QRect(50, 440, 121, 31));
        excel->setStyleSheet(QString::fromUtf8("#excel{\n"
"	background-color: rgb(228, 0, 0);\n"
"    color: white; /* Texte blanc */\n"
"    border: none;\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 8px;\n"
"}"));
        stackedWidget->addWidget(page_4);
        page = new QWidget();
        page->setObjectName("page");
        comboBox = new QComboBox(page);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(90, 140, 331, 22));
        lineEditAbsence = new QLineEdit(page);
        lineEditAbsence->setObjectName("lineEditAbsence");
        lineEditAbsence->setGeometry(QRect(212, 200, 191, 22));
        showTopEmployeeButton = new QPushButton(page);
        showTopEmployeeButton->setObjectName("showTopEmployeeButton");
        showTopEmployeeButton->setGeometry(QRect(464, 130, 171, 61));
        stackedWidget->addWidget(page);
        frame = new QFrame(GestionEmployes);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 231, 611));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: black;\n"
"    width: 10px;\n"
"    border: 2px solid rgb(225,255,255);\n"
"    border-radius: 15px;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::NoFrame);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        widget_9 = new QWidget(frame);
        widget_9->setObjectName("widget_9");
        widget_9->setMinimumSize(QSize(0, 77));
        widget_9->setMaximumSize(QSize(16777215, 77));

        verticalLayout->addWidget(widget_9);

        widget_8 = new QWidget(frame);
        widget_8->setObjectName("widget_8");
        formLayout_2 = new QFormLayout(widget_8);
        formLayout_2->setObjectName("formLayout_2");
        pushButton = new QPushButton(widget_8);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 50));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, pushButton);

        pushButton_4 = new QPushButton(widget_8);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(0, 50));

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, pushButton_4);

        pushButton_8 = new QPushButton(widget_8);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setMinimumSize(QSize(0, 50));

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, pushButton_8);

        pushButton_5 = new QPushButton(widget_8);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(0, 50));
        pushButton_5->setAutoDefault(true);

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, pushButton_5);

        pushButton_6 = new QPushButton(widget_8);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(0, 50));

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, pushButton_6);

        pushButton_7 = new QPushButton(widget_8);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setMinimumSize(QSize(0, 50));

        formLayout_2->setWidget(5, QFormLayout::SpanningRole, pushButton_7);


        verticalLayout->addWidget(widget_8);


        retranslateUi(GestionEmployes);

        stackedWidget->setCurrentIndex(2);
        tri->setCurrentIndex(0);
        pushButton_5->setDefault(false);


        QMetaObject::connectSlotsByName(GestionEmployes);
    } // setupUi

    void retranslateUi(QDialog *GestionEmployes)
    {
        GestionEmployes->setWindowTitle(QCoreApplication::translate("GestionEmployes", "Dialog", nullptr));
        pushButton_10->setText(QCoreApplication::translate("GestionEmployes", "Add Employe", nullptr));
        pushButton_2->setText(QCoreApplication::translate("GestionEmployes", "List of Employe", nullptr));
        pushButton_11->setText(QCoreApplication::translate("GestionEmployes", "Best employee", nullptr));
        pushButton_12->setText(QCoreApplication::translate("GestionEmployes", "ChatBox", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("GestionEmployes", "First name", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("GestionEmployes", "name", nullptr));
        lineEdit_14->setText(QCoreApplication::translate("GestionEmployes", "Username", nullptr));
        lineEdit_15->setText(QCoreApplication::translate("GestionEmployes", "Password", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("GestionEmployes", "Email", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("GestionEmployes", "Adresse", nullptr));
        Add_button_2->setText(QCoreApplication::translate("GestionEmployes", "Add", nullptr));
        lineEdit_22->setText(QCoreApplication::translate("GestionEmployes", "Phone Number", nullptr));
        lineEdit_23->setText(QCoreApplication::translate("GestionEmployes", "Role", nullptr));
        lineEdit_24->setText(QCoreApplication::translate("GestionEmployes", "Salaire", nullptr));
        lineEdit_25->setText(QCoreApplication::translate("GestionEmployes", "DATE EMPLOYMENT", nullptr));
        deleteline->setPlaceholderText(QCoreApplication::translate("GestionEmployes", "Deleted id", nullptr));
        delete_button_2->setText(QCoreApplication::translate("GestionEmployes", "Delete", nullptr));
        label->setText(QString());
        lineEdit_13->setPlaceholderText(QCoreApplication::translate("GestionEmployes", "Search", nullptr));
        tri->setItemText(0, QCoreApplication::translate("GestionEmployes", "Par defaut", nullptr));
        tri->setItemText(1, QCoreApplication::translate("GestionEmployes", "PRENOM", nullptr));
        tri->setItemText(2, QCoreApplication::translate("GestionEmployes", "NOM", nullptr));

        tri->setCurrentText(QCoreApplication::translate("GestionEmployes", "Par defaut", nullptr));
        pdf->setText(QCoreApplication::translate("GestionEmployes", "Export pdf", nullptr));
        excel->setText(QCoreApplication::translate("GestionEmployes", "Export Excel", nullptr));
        comboBox->setCurrentText(QString());
        showTopEmployeeButton->setText(QCoreApplication::translate("GestionEmployes", "best employee", nullptr));
        pushButton->setText(QCoreApplication::translate("GestionEmployes", "Workers", nullptr));
        pushButton_4->setText(QCoreApplication::translate("GestionEmployes", "Patients", nullptr));
        pushButton_8->setText(QCoreApplication::translate("GestionEmployes", "Products", nullptr));
        pushButton_5->setText(QCoreApplication::translate("GestionEmployes", "Prescription ", nullptr));
        pushButton_6->setText(QCoreApplication::translate("GestionEmployes", "Supplier", nullptr));
        pushButton_7->setText(QCoreApplication::translate("GestionEmployes", "Deliver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestionEmployes: public Ui_GestionEmployes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONEMPLOYES_H
