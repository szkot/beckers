#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "view.h"
#include <QGraphicsScene>

class MainWindow : public QMainWindow
{
    Q_OBJECT
    View *view;
    QGraphicsScene *scene;
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

#endif // MAINWINDOW_H
