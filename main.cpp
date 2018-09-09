#include <QtWidgets>
#include <QtCore/QObject>

#include "mainwindow.h"
#include "Images.h"

int main(int argc,char * argv[]){
    QApplication app(argc,argv);
    MainWindow mainWindow;
    mainWindow.show();
    Images pict;
   // pict.isLoaded();
    return app.exec();
}
