//
// Created by boy on 23.08.18.
//

#ifndef TETRIS_MAINWINDOW_H
#define TETRIS_MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "MainWidget.h"


namespace Ui{
    class MainWindow;
}

class MainWindow : public QMainWindow{
Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow() override;
private slots:
    void handlePlayButton();
private:
    QPushButton *buttons[2];
    QWidget *menuWidget;
    MainWidget *mainWidget;
};

#endif //TETRIS_MAINWINDOW_H