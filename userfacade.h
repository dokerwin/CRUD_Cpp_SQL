#ifndef USERFACADE_H
#define USERFACADE_H
#include<QString>
#include "crudeinterface.h"
#include "dbconector.h"
class UserFacade : public CrudeInterface<UserFacade>
{


private:

   DbConector db;
   QSqlQuery query;
   QString name;
   QString login;
   QString password;
   int level;
public:
    \
   QString getName() const;
   void setName(const QString &value);
   QString getLogin() const;
   void setLogin(const QString &value);
   QString getPassword() const;
   void setPassword(const QString &value);
   int getLevel() const;
   void setLevel(int value);
   void create(const UserFacade &) override;
   UserFacade read(const UserFacade &) override;
   UserFacade read(int index) override;
   bool update (int index) override;
   bool update (UserFacade&) override;
   bool remove (UserFacade&)override;
   bool remove (int index)override;
    
  
    
    
    UserFacade();
};

#endif // USERFACADE_H
