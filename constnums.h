#ifndef CONSTNUMS_H
#include<QSize>
#include<QPoint>
#include<QString>
#include<QLabel>
#include<QDebug>
#define CONSTNUMS_H
//这是项目中用的静态变量
const QSize startWindow_size={1200,900};//开始界面的尺寸
const QSize gameWindow_size={1200,900};//游戏界面的尺寸
const  QString game_name=QStringLiteral("中药铺");
const QPoint begin_game_button_pos={50,50};
const QPoint end_game_button_pos={150,150};

#endif // CONSTNUMS_H
