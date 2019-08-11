#include "SeeViewGraphic.h"
#include <QWheelEvent>
#include <QMouseEvent>
#include <iostream>
#pragma execution_character_set("utf-8")

using namespace std;
SeeViewGraphic::SeeViewGraphic(QWidget *parent) : QGraphicsView(parent),m_pItem(nullptr),
    m_Image(1920*4,1200*3,QImage::Format_Grayscale8)
{
    m_pScene = new QGraphicsScene(this);
    m_pScene->setItemIndexMethod(QGraphicsScene::NoIndex);
    m_Image.fill(QColor(0,0,0));

    setScene(m_pScene);
    setCacheMode(QGraphicsView::CacheBackground);
    setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    setRenderHint(QPainter::Antialiasing);
    setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    //  scale(qreal(0.8), qreal(0.8));
    // m_pItem->setPos(200,200);
}

void SeeViewGraphic::OnImage(QImage *pImg)
{
    if(m_pItem)
    {
        m_pScene->removeItem(m_pItem);
        m_pScene->clear();
        delete m_pItem;
    }
    resetTransform();


    if(pImg)
    {
        m_pScene->setSceneRect(pImg->rect());
        m_pItem = m_pScene->addPixmap(QPixmap::fromImage(*pImg,Qt::ThresholdDither));
        m_fScale = (this->width()-10)*1.0/pImg->width();
    }
    else
    {
        m_pScene->setSceneRect(m_Image.rect());
        m_pItem = m_pScene->addPixmap(QPixmap::fromImage(m_Image,Qt::ThresholdDither));
        m_fScale = (this->width()-10)*1.0/m_Image.width();
    }
    m_pItem->setFlag(QGraphicsItem::ItemIsMovable);
    m_pItem->setX(0);
    m_pItem->setY(50);
    scale(m_fScale,m_fScale);
    //  m_pItem->setScale((this->width()-10)*1.0/image.width());
}

//此处修改串EL排列顺序 123456    789 10 11 12
void SeeViewGraphic::Set_Ruler_w(int nW,bool Ruler_w_b,bool Ruler_w_c)
{
    int LY=0;//0滁州 1泰州 jin 2
    if(LY==0)
    {
        for(int i = 0;i<nW/2;i++)
        {
            QGraphicsTextItem *text = m_pScene->addText(QString(), QFont("Arial", 35));//字体40改35
            if(Ruler_w_b)
            {
                text->setHtml(QString("<font color=red>%1</font>").arg(i+1));
            }
            else
            {
                text->setHtml(QString("<font color=red>%1</font>").arg(nW/2-i));
            }
            text->setX(3600/nW+i*3600/nW*2);
            if(Ruler_w_c)
                text->setY(1250);

        }
        int a = 0;
        for(int i = nW/2;i<nW;i++)
        {
            QGraphicsTextItem *text = m_pScene->addText(QString(), QFont("Arial", 35));//字体40改35
            if(Ruler_w_b)
            {
                text->setHtml(QString("<font color=red>%1</font>").arg(i+1));
            }
            else
            {
                text->setHtml(QString("<font color=red>%1</font>").arg(nW-a));
            }
            text->setX(3600/nW+a*3600/nW*2);
            if(!Ruler_w_c)
                text->setY(1250);
            a++;
        }

    }
    else
    {
        for(int i = 0;i<nW/2;i++)
        {
            QGraphicsTextItem *text = m_pScene->addText(QString(), QFont("Arial", 25));//字体40改35
            if(Ruler_w_b)
            {
                text->setHtml(QString("<font color=red>%1</font>").arg(i+1));
            }
            else
            {
                text->setHtml(QString("<font color=red>%1</font>").arg(nW/2-i));
            }
            text->setX(3600/nW+i*3600/nW*2);
        }
        int a = 0;
        for(int i = nW/2;i<nW;i++)
        {
            QGraphicsTextItem *text = m_pScene->addText(QString(), QFont("Arial", 25));//字体40改35
            if(Ruler_w_b)
            {
                text->setHtml(QString("<font color=red>%1</font>").arg(i+1));
            }
            else
            {
                text->setHtml(QString("<font color=red>%1</font>").arg(nW-a));
            }
            //
            text->setX(3600/nW+a*3600/nW*2);
            text->setY(1250);

            a++;
        }
    }
}
void SeeViewGraphic::wheelEvent(QWheelEvent *event)
{
    scaleView(pow((double)2, -event->delta() / 240.0));
}

void SeeViewGraphic::mousePressEvent(QMouseEvent *event)
{
    //    scaleView(pow((double)2,2));
    QPointF pBegn = event->pos();
    pBegn.x();
    cout << "Value of str is : " << pBegn.x() << endl;
}

void SeeViewGraphic::scaleView(qreal scaleFactor)
{
    qreal factor = transform().scale(scaleFactor, scaleFactor).mapRect(QRectF(0, 0, 1, 1)).width();
    if (factor < m_fScale || factor > 5)
        return;

    scale(scaleFactor, scaleFactor);
}
