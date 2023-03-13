#include "mall.h"
#include "ui_mall.h"

mall::mall(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mall)
{
    ui->setupUi(this);
    this->hide();
    connect(ui->close_button,&QPushButton::clicked,this,&mall::hide);
}

mall::~mall()
{
    delete ui;
}
