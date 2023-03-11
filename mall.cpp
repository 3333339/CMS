#include "mall.h"
#include "ui_mall.h"

mall::mall(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mall)
{
    ui->setupUi(this);
}

mall::~mall()
{
    delete ui;
}
