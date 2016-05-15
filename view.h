#ifndef VIEW_H
#define VIEW_H

#include <QGraphicsView>
#include <QtGlobal>

class View : public QGraphicsView
{
    void makeBlocks();
    QGraphicsWidget *blankBlock;
public:
    View(QGraphicsScene *scene, QWidget *parent);
protected:
    void mousePressEvent(QMouseEvent *event);
};

#endif // VIEW_H
