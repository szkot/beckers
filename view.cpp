#include "view.h"
#include "block.h"
#include <algorithm>
#include <QDebug>
#include <vector>

View::View(QGraphicsScene *scene, QWidget *parent):
    QGraphicsView(scene, parent)
{
    blankBlock = new QGraphicsWidget();
    makeBlocks();
}

void View::makeBlocks()
{
    std::vector<int> perm(36);

   for(int i = 0; i < 36; i++)
    {
        perm[i] = i;
    }

    std::random_shuffle(perm.begin(), perm.end());

    int x = 0;
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(i==5 && j==5) {
                scene()->addItem(blankBlock);
                blankBlock->setPos(i*50, j*50);
                break;
            }

            scene()->addItem(new block(QPoint(i*50, j*50), perm[x]));
            x++;
        }
    }
}

void View::mousePressEvent(QMouseEvent *event)
{
   QGraphicsItem *item = itemAt(event->pos());
   if(!dynamic_cast<block *>(item)) return;

   const QPointF itemPos(item->pos());
   const QPointF diff = itemPos - blankBlock->pos();
   if(diff.manhattanLength() > 50) return;
   itemAt(event->pos())->setPos(blankBlock->pos());
   blankBlock->setPos(itemPos);
}

