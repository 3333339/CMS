#include "mou_forest.h"
#include "ui_mou_forest.h"

mou_forest::mou_forest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mou_forest)
{
    ui->setupUi(this);
}

mou_forest::~mou_forest()
{
    delete ui;
}
