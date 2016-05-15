#include "block.h"
#include <QPainter>
#include <QDebug>

block::block(QPoint p, int n) : no(n)
{
    setPos(p);
}

void block::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QString s;
    s.setNum(no);
    painter->drawRect(rect());
    painter->drawText(rect(),Qt::AlignCenter, s);
}
