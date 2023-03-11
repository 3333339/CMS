#ifndef MALL_H
#define MALL_H

#include <QWidget>

namespace Ui {
class mall;
}

class mall : public QWidget
{
    Q_OBJECT

public:
    explicit mall(QWidget *parent = nullptr);
    ~mall();

private:
    Ui::mall *ui;
};

#endif // MALL_H
