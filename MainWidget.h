//
// Created by boy on 11.09.18.
//

#ifndef TETRIS_MAINWIDGET_H
#define TETRIS_MAINWIDGET_H

#include <QtWidgets/QWidget>
#include <QPushButton>
#include <QtWidgets/QHBoxLayout>
#include <QKeyEvent>

#include "Field.h"

class MainWidget : public QWidget{
    Q_OBJECT;
public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget() override;

protected:
    void paintEvent(QPaintEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
private:
    QImage getFieldImage();
    Field *gameField;
};

#endif //TETRIS_MAINWIDGET_H
