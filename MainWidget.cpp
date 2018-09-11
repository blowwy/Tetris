//
// Created by boy on 11.09.18.
//

#include "MainWidget.h"
#include "Images.h"

#include <QtWidgets>
#include <QCoreApplication>

MainWidget::MainWidget(QWidget *parent) : QWidget(parent){
    pictures.load();
}

MainWidget::~MainWidget() {

}

void MainWidget::paintEvent(QPaintEvent *event) {
    Q_UNUSED(event);
    QPainter painter(this);
    painter.drawImage(0,0,pictures.get("background"),0,0,1000,1000);

}
