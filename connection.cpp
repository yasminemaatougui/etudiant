#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;

db.setDatabaseName("Projet2A");//inserer le nom de la source de données
db.setUserName("yasmine");//inserer nom de l'utilisateur
db.setPassword("123");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

    return  test;
}
void Connection::closeConnection(){db.close();}
