#ifndef WATERPOOL_H
#define WATERPOOL_H

#include <QGraphicsItem>

class WaterPool : public QGraphicsItem
{
public:
    WaterPool(qreal h, qreal w);

    //     Methods used for collision detection and drawing, inherited from QGraphicsItem
        QRectF boundingRect() const override;
        QPainterPath shape() const override;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                   QWidget *widget) override;
private:

    qreal height;
    qreal width;

};

class WaterBound : public WaterPool
{
public:
    WaterBound(qreal h, qreal w);

    QPainterPath shape() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
};

#endif // WATERPOOL_H