//
// Created by boy on 11.09.18.
//

#include "MainWidget.h"
#include "Images.h"
#include "ColorType.h"

#include <QtWidgets>
#include <QCoreApplication>

MainWidget::MainWidget(QWidget *parent) : QWidget(parent){
    pictures.load();
    gameField = new Field();
    this->setFocusPolicy(Qt::StrongFocus);
    timer.start(500,this);
}

MainWidget::~MainWidget() {
    delete gameField;
}

void MainWidget::paintEvent(QPaintEvent *event) {
    Q_UNUSED(event) ;
    QPainter painter(this);
    painter.drawLine(FIELD_APP_WIDTH,0,FIELD_APP_WIDTH,FIELD_APP_HEIGH);
    QImage image = getFieldImage();
    painter.drawImage(0,0,image);
}



QImage MainWidget::getFieldImage() {
    QImage image(FIELD_APP_WIDTH,FIELD_APP_HEIGH,QImage::Format_ARGB32);
    image.fill(0);
    QPainter painter(&image);
    for (int i = 0;i < FIELD_HEIGH;i++) {
        for (int j = 0; j < FIELD_WIDTH; j++) {
            ColorType tmp = gameField->getCellColour(i,j);
            if (tmp != ColorType::inv)
                drawPiece(&painter,j,i,tmp);
        }
    }
    int i = 0;
    int j = 0;
    gameField->getBlockTypeNDirection(i, j, 0);
    for (int k = 0;k < PIECES_NUM;k++) {
        int x = 0;
        int y = 0;
        gameField->getBlockXY(x,y,0,0,i,j,k);
        if (x >= 0 && x < FIELD_WIDTH && y >= 0 && y < FIELD_HEIGH)
            drawPiece(&painter,x,y,gameField->getBlock()->getColorType());
    }
    return image;


}

void MainWidget::keyPressEvent(QKeyEvent *event) {
    QWidget::keyPressEvent(event);
    int gameStatus = 0;
    switch (event->key() ){
        case Qt::Key_D  :{
            gameStatus = gameField->moveBlock(MoveType::RIGHT);
            break;
        }
        case Qt::Key_S: {
            gameStatus = gameField->moveBlock(MoveType::DOWN);
            break;
        }
        case Qt::Key_A: {
            gameStatus = gameField->moveBlock(MoveType::LEFT);
            break;
        }
        case Qt::Key_Right : {
            gameField->TurnBlock(1);
            break;
        }
        case Qt::Key_Left : {
            gameField->TurnBlock(-1);
        }
        default:{
            gameStatus = 0;
        }
    }
    if (gameStatus){
        delete gameField;
        gameField = new Field;
    }
    this->repaint();
}

void MainWidget::timerEvent(QTimerEvent *event) {
    QObject::timerEvent(event);
    int gameStatus = 0;
    gameStatus = gameField->moveBlock(MoveType::DOWN);
    if (gameStatus){
        delete gameField;
        gameField = new Field;
    }
    timer.start(500,this);
    this->repaint();
}

void MainWidget::drawPiece(QPainter * painter,int x, int y,ColorType color) const{
    painter->drawImage(x * CELL_WIDTH,y * CELL_HEIGH,pictures.get(color));
}
