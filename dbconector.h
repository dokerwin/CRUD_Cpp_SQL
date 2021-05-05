#ifndef DBCONECTOR_H
#define DBCONECTOR_H
#include <iostream>

#include <QWidget>
#include <QtSql>
#include<QMessageBox>





using namespace std;
class DbConector
{
public:
    DbConector();

    bool DbConect(QString adress, QString name, QString login, QString pass);
    DbConector(string, string);

   private:
    QSqlDatabase db;
    QString databasepath= "DESKTOP-LON2QME\\MSSQLSERVER1";
    QString databasename ="Facade";
};

#endif // DBCONECTOR_H
