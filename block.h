#ifndef BLOCK_H
#define BLOCK_H

#include <QGraphicsWidget>

class block : public QGraphicsWidget
{
    int no;
public:
    block(QPoint p, int n);
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // BLOCK_H
