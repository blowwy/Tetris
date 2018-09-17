#include <QtWidgets>
#include <QtCore/QObject>

#include "mainwindow.h"


int main(int argc,char * argv[]){
    QApplication app(argc,argv);
    MainWindow mainWindow;
    mainWindow.show();
    return app.exec();
}
