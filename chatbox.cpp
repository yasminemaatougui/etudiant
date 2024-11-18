#include "chatbox.h"
#include "ui_chatbox.h"

ChatBox::ChatBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatBox) // Initialisation de ui
{
    ui->setupUi(this); // Initialiser l'interface avec le fichier .ui
    connect(ui->sendButton, &QPushButton::clicked, this, &ChatBox::sendMessage);
}

ChatBox::~ChatBox() {
    delete ui; // Libérer la mémoire
}

void ChatBox::setCurrentUser(const QString &username) {
    currentUser = username; // Assigner le nom d'utilisateur
}

void ChatBox::sendMessage() {
    QString message = ui->inputField->text(); // Récupérer le texte du QLineEdit
    if (!message.isEmpty()) {
        ui->chatArea->append(currentUser + ": " + message); // Ajouter le message au QTextEdit
        ui->inputField->clear(); // Vider le champ de saisie
    }
}
