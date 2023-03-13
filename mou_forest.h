#ifndef MOU_FOREST_H
#define MOU_FOREST_H

#include <QWidget>

namespace Ui {
class mou_forest;
}

class mou_forest : public QWidget
{
    Q_OBJECT

public:
    explicit mou_forest(QWidget *parent = nullptr);
    ~mou_forest();

private:
    Ui::mou_forest *ui;
};

#endif // MOU_FOREST_H
