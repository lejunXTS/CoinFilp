#ifndef CHOOSELEVELSCENE_H
#define CHOOSELEVELSCENE_H

#include <QMainWindow>
#include "playscene.h"

class ChooseLevelScene : public QMainWindow
{
    Q_OBJECT
public:
    explicit ChooseLevelScene(QWidget *parent = nullptr);

    //重写绘图事件  背景设置
    void paintEvent(QPaintEvent *);

    //游戏场景对象指针
    PlayScene *playScene = NULL;

signals:
    //自定义信号 告诉主场景 点击了返回
    void chooseSceneBack();
};

#endif // CHOOSELEVELSCENE_H
