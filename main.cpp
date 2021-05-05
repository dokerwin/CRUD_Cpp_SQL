#include "mainwindow.h"
#include "dbconector.h"
#include "crudeinterface.h"
#include "levelfacade.h"
#include "userfacade.h"
#include "user.h"
#include "level.h"
#include<iostream>
#include "include/gtest/gtest.h"




using namespace std;

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    //Level level;
    //LevelFacade  levelFacade;
   //level levelFacade.read(5);
  
    UserFacade userFacade;
    User user;
    
    
    
    
    return a.exec();
}
