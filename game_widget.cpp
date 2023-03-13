#include "game_widget.h"
#include "ui_game_widget.h"

game_widget::game_widget(startWindow *parent) :
    ui(new Ui::game_widget)
{
    ui->setupUi(this);
    //创建耕地界面
    fieldWidget=new field_widget(this);
    //创建商城界面
    mallWidget=new mall(this);
    //实现回退开始界面
    connect(this->ui->rollback_button,&QPushButton::clicked,parent,&startWindow::rollback_signal);

    //实现药田界面的弹出
    connect(this->ui->field_button,&QPushButton::clicked,[=](){
        //弹出药田界面
        fieldWidget->show();
    });

    //实现商城界面的弹出
    connect(this->ui->mall_button,&QPushButton::clicked,[=](){
        //弹出商城界面
        mallWidget->show();
    });

}

game_widget::~game_widget()
{
    delete ui;
}
