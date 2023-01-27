#include "game_widget.h"
#include "ui_game_widget.h"

game_widget::game_widget(startWindow *parent) :
    ui(new Ui::game_widget)
{
    ui->setupUi(this);
    //实现回退开始界面
    connect(this->ui->rollback_button,&QPushButton::clicked,parent,&startWindow::rollback_signal);
    //实现药田界面的弹出
    connect(this->ui->field_button,&QPushButton::clicked,[=](){
        //弹出药田界面

    });
}

game_widget::~game_widget()
{
    delete ui;
}
