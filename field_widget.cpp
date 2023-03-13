#include "field_widget.h"
#include "ui_field_widget.h"
#include <constnums.h>
field_widget::field_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::field_widget)
{
    ui->setupUi(this);
    //锁定界面尺寸
    this->setMaximumSize(startWindow_size);
    this->setMinimumSize(startWindow_size);
    this->hide();
    connect(ui->back_game,&QPushButton::clicked,this,&field_widget::hide);
}

field_widget::~field_widget()
{
    delete ui;
}
