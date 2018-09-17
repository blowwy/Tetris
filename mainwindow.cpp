//
// Created by boy on 23.08.18.
//

#include "mainwindow.h"

#include <QtWidgets>
#include <QCoreApplication>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent){
    this->setGeometry(
            QStyle::alignedRect(
                    Qt::LeftToRight,
                    Qt::AlignCenter,
                    this->size(),
                    qApp->desktop()->availableGeometry()
            )
    );
    QPushButton *buttons[2];
    buttons[0] = new QPushButton("Play");
    QObject::connect(buttons[0],SIGNAL(released()),this,SLOT(handlePlayButton()));
    buttons[1] = new QPushButton("Quit");
    QObject::connect(buttons[1],SIGNAL(released()),qApp,SLOT(quit()));
    auto * layout = new QHBoxLayout(menuWidget);
    layout->addWidget(buttons[0]);
    layout->addWidget(buttons[1]);
    layout->setMargin(geometry().width() / 4);
    menuWidget = new QWidget(this);
    menuWidget->setLayout(layout);
    this->setCentralWidget(menuWidget);
}

void MainWindow::handlePlayButton(){
    mainWidget = new MainWidget(this);
    this->setCentralWidget(mainWidget);
}
