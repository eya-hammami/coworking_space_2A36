#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Coworking_speace");
db.setUserName("eya");//inserer nom de l'utilisateur
db.setPassword("BD2023");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
/*QSqlDatabase Connection::getdb()
{
    return db;
}*/
void Connection::closeConnection() {db.close();}
