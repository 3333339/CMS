#include "field_widget.h"
#include "ui_field_widget.h"

field_widget::field_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::field_widget)
{
    ui->setupUi(this);
}

field_widget::~field_widget()
{
    delete ui;
}
