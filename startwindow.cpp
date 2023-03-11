#include "startwindow.h"
#include "ui_startwindow.h"

startWindow::startWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::startWindow)
{
    ui->setupUi(this);
    game_widget* game_body=new game_widget(this);
    this->setWindowTitle(game_name);

    //锁定界面尺寸
    this->setMaximumSize(startWindow_size);
    this->setMinimumSize(startWindow_size);

    //设置开始按键
    QPushButton *begin_game_button=new QPushButton("开始游戏",this);
    begin_game_button->move(begin_game_button_pos);

    //设置退出按键
    QPushButton *end_game_button=new QPushButton("退出",this);
    end_game_button->move(end_game_button_pos);

    //实现退出功能
    connect(end_game_button,&QPushButton::clicked,this,[=](){this->close();});

    //实现开始功能
    connect(begin_game_button,&QPushButton::clicked,this,[=](){
        game_body->show();
        this->hide();//隐藏开始界面
    });

    //实现回退主界面功能.....完成
    connect(this,&startWindow::rollback_signal,this,[=](){
        this->show();//隐藏开始界面
        game_body->hide();
    });

}


startWindow::~startWindow()
{
    delete ui;
}

