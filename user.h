#ifndef USER_H
#define USER_H
#include<QString>
#include "userfacade.h"

class User
{
private:
QString name;
QString login;
QString password;
int level;
public:

    User();

    QString getName() const;
    void setName(const QString &value);
    QString getLogin() const;
    void setLogin(const QString &value);
    QString getPassword() const;
    void setPassword(const QString &value);
    int getLevel() const;
    void setLevel(int value);

     User & operator= (const UserFacade &a);

    
};

#endif // USER_H
