//
// Created by boy on 11.09.18.
//

#include "MainWidget.h"
#include "Images.h"

#include <QtWidgets>
#include <QCoreApplication>

MainWidget::MainWidget(QWidget *parent) : QWidget(parent){
    pictures.load();
    gameField = new Field();
    this->setFocusPolicy(Qt::StrongFocus);
    timer.start(5,this);
}

MainWidget::~MainWidget() {
    delete gameField;
}

void MainWidget::paintEvent(QPaintEvent *event) {
    Q_UNUSED(event) ;
    QPainter painter(this);
    painter.drawLine(240,0,240,480);
    QImage image = getFieldImage();
    painter.drawImage(0,0,image);
}



QImage MainWidget::getFieldImage() {
    QImage image(240,480,QImage::Format_ARGB32);
    image.fill(0);
    QPainter painter(&image);
    for (int ii = 0;ii < HEIGH;ii++) {
        for (int jj = 0; jj < WIDTH; jj++) {
            int tmp = gameField->getCellColour(ii,jj);
            if (tmp)
                painter.drawImage(jj * 24, ii * 24, pictures.get("piece"));
        }
    }
    int i = 0;
    int j = 0;
    gameField->getTypeNDirection(i,j,0);
    for (int k = 0;k < 4;k++) {
        int x = 0;
        int y = 0;
        gameField->getBlockXY(x,y,0,0,i,j,k);
        if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGH)
            painter.drawImage(x*24,y*24,pictures.get("piece"));
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
