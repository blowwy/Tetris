//
// Created by boy on 23.08.18.
//

#include "mainwindow.h"
#include <QtWidgets>
#include <QCoreApplication>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent){
    //m_button->setGeometry(QRect(QPoint(100,100),QSize(200,50)));
    this->setGeometry(
            QStyle::alignedRect(
                    Qt::LeftToRight,
                    Qt::AlignCenter,
                    this->size(),
                    qApp->desktop()->availableGeometry()
            )
    );
    auto * layout = new QHBoxLayout;
    buttons[0] = new QPushButton("Play");
    QObject::connect(buttons[0],SIGNAL(released()),this,SLOT(handlePlayButton()));
    buttons[1]   = new QPushButton("Quit");
    QObject::connect(buttons[1],SIGNAL(released()),qApp,SLOT(quit()));
    layout->addWidget(buttons[0]);
    layout->addWidget(buttons[1]);
    layout->setMargin(geometry().width() / 4);
    QWidget *centreWidget = new QWidget();
    centreWidget->setLayout(layout);
    this->setCentralWidget(centreWidget);
}

void MainWindow::handlePlayButton() {
    auto *layout = new QHBoxLayout;
    //todo
}

MainWindow::~MainWindow() {
    for (auto &button : buttons)
        delete button;
}