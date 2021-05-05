#include "dbconector.h"

DbConector::DbConector()
{

}

bool DbConector::DbConect(QString adress, QString name, QString login, QString pass)
{


    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DRIVER={SQL Server};SERVER="+adress + "; DATABASE="+name+";");
    db.setUserName(login);
    db.setPassword(pass);

    if (db.open()){

        return true;
    }

    else{

        return false;

    }

}

DbConector::DbConector(string, string)
{

}
