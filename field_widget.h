#ifndef FIELD_WIDGET_H
#define FIELD_WIDGET_H

#include <QWidget>

namespace Ui {
class field_widget;
}

class field_widget : public QWidget
{
    Q_OBJECT

public:
    explicit field_widget(QWidget *parent = nullptr);
    ~field_widget();

private:
    Ui::field_widget *ui;
};

#endif // FIELD_WIDGET_H
