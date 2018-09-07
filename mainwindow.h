//
// Created by boy on 23.08.18.
//

#ifndef TETRIS_MAINWINDOW_H
#define TETRIS_MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QHBoxLayout>

namespace Ui{
    class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

private slots:
    void handlePlayButton();

private:
    QPushButton * buttons[2];
};

#endif //TETRIS_MAINWINDOW_H
