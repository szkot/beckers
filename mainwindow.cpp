#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    scene = new QGraphicsScene;
    scene->setSceneRect(0, 0, 300, 300);
    view = new View(scene, this);
    setCentralWidget(view);
}

MainWindow::~MainWindow()
{

}
