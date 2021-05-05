#include "userfacade.h"

QString UserFacade::getName() const
{
    return name;
}

void UserFacade::setName(const QString &value)
{

}

QString UserFacade::getLogin() const
{
    return login;
}

void UserFacade::setLogin(const QString &value)
{

}

QString UserFacade::getPassword() const
{
    return password;
}

void UserFacade::setPassword(const QString &value)
{

}

int UserFacade::getLevel() const
{
    return level;
}

void UserFacade::setLevel(int value)
{

}

void UserFacade::create(const UserFacade & a)
{
    query.prepare("INSERT INTO User (NAME, ID_LEVEL) "
                      "VALUES (?, ?)");
        query.addBindValue(a.getName());
        query.addBindValue(a.getLevel());
        query.exec();
}

UserFacade UserFacade::read(const UserFacade & a)
{
    UserFacade foundUser;
    QSqlQuery query;
    query.exec(" SELECT *, Column_Name FROM INFORMATION_SCHEMA.COLUMNSWHERE TABLE_CATALOG = 'AdventureWorks2014' AND COLUMN_NAME = 'addressline1';");


    query. prepare( "SELECT NAME FROM Users WHERE NAME = ':admission'" );
    query. bindValue(":admission" , a.getName());
    if(! query. exec())
    {
    qDebug() << query. lastError();
    }
    else
    {
    int numrow = query.size();
    if (numrow == 0)
    {
       qDebug() << "Exist";
    }
    }



      query.prepare("SELECT * FROM cars WHERE carID = ?");
      query.addBindValue(a.getName());
      query.exec();
      foundUser.setName(query.value("NAME").toString());
      foundUser.setLevel(query.value("ID_LEVEL").toInt());



    return foundUser;
}

UserFacade UserFacade::read(int index)
{
    UserFacade user;
    return user;
}

bool UserFacade::update(int index)
{
       return true;
}

bool UserFacade::update(UserFacade & a)
{
       return true;
}

bool UserFacade::remove(UserFacade & a )
{
       return true;
}

bool UserFacade::remove(int index)
{
    return true;
}

UserFacade::UserFacade()
{
  db.DbConect("DESKTOP-LON2QME\\MSSQLSERVER1","Facade","sa","Dokeri21");
}
