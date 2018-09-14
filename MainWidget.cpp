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
    QImage image(300,480,QImage::Format_ARGB32);
    image.fill(0);
    QPainter painter(&image);
    int i = static_cast<int>(gameField->getBlock()->getBlockType());
    int j = static_cast<int>(gameField->getBlock()->getDirectionType());
    for (int k = 0;k < 4;k++) {
        int x = gameField->getBlock()->getBlockMainCoordinate().getx() +
                gameField->getBlock()->getBlockCoordinate(i, j, k).getx();
        int y = gameField->getBlock()->getBlockMainCoordinate().gety() +
                gameField->getBlock()->getBlockCoordinate(i, j, k).gety();
        if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGH)
            painter.drawImage(x*24,y*24,pictures.get("piece"));
    }
    return image;


}

void MainWidget::keyPressEvent(QKeyEvent *event) {
    QWidget::keyPressEvent(event);
    switch (event->key() ){
        case Qt::Key_D  :{
            gameField->moveBlock(MoveType::RIGHT);
            break;
        }
        case Qt::Key_S: {
            gameField->moveBlock(MoveType::DOWN);
            break;
        }
        case Qt::Key_A: {
            gameField->moveBlock(MoveType::LEFT);
            break;
        }
        case Qt::Key_Right : {
            gameField->TurnBlock(1);
            break;
        }
        case Qt::Key_Left : {
            gameField->TurnBlock(-1);
        }

    }
    this->repaint();
}
