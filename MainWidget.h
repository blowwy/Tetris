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

#include <memory>

#include "Field.h"

class MainWidget : public QWidget{
    Q_OBJECT;
public:
    explicit MainWidget(QWidget *parent = nullptr);
    ~MainWidget() override = default;
protected:
    void paintEvent(QPaintEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    void timerEvent(QTimerEvent *event) override;
private:
    void drawPiece(QPainter *painter,int x,int y,ColorType cType) const;
    void checkGameStatus(int status);
    void resetField();
    QImage getFieldImage();
    QBasicTimer timer;
    std::unique_ptr<Field> gameField;
};

#endif //TETRIS_MAINWIDGET_H
