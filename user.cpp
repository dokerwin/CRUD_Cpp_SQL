#include "user.h"

QString User::getName() const
{
    return name;
}

void User::setName(const QString &value)
{
    name = value;
}

QString User::getLogin() const
{
    return login;
}

void User::setLogin(const QString &value)
{
    login = value;
}

QString User::getPassword() const
{
    return password;
}

void User::setPassword(const QString &value)
{
    password = value;
}

int User::getLevel() const
{
    return level;
}

void User::setLevel(int value)
{
    level = value;
}

User& User::operator=(const UserFacade &a)
{
    name= a.getName();
    login=a.getLogin();
    password=a.getPassword();
    level= a.getLevel();
   return *this;
}



User::User()
{
    
}

