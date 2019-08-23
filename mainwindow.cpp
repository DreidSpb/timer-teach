#include "mainwindow.h"

#include <QDateTime>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
}

MainWindow::~MainWindow()
{

}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter p;
    p.begin(this);
    p.drawText(rect(), QDateTime::currentDateTime().toString());
    p.end();
}
