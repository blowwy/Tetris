//
// Created by boy on 11.09.18.
//

#ifndef TETRIS_MAINWIDGET_H
#define TETRIS_MAINWIDGET_H

#include <QtWidgets/QWidget>
#include <QPushButton>
#include <QtWidgets/QHBoxLayout>
#include <QKeyEvent>
#include <QtCore/QBasicTimer>

#include "Field.h"

class MainWidget : public QWidget{
    Q_OBJECT;
public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget() override;
protected:
    void paintEvent(QPaintEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    void timerEvent(QTimerEvent *event) override;
private:
    void drawPiece(QPainter * const painter,int x,int y,ColorType cType) const;
    QImage getFieldImage();
    QBasicTimer timer;
    Field *gameField;
};

#endif //TETRIS_MAINWIDGET_H
