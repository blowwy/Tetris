//
// Created by boy on 23.08.18.
//

#ifndef TETRIS_MAINWINDOW_H
#define TETRIS_MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "MainWidget.h"

class MainWindow : public QMainWindow{
Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
private slots:
    void handlePlayButton();
private:
    QWidget *menuWidget;
    MainWidget *mainWidget;
};

#endif //TETRIS_MAINWINDOW_H