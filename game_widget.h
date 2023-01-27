#ifndef GAME_WIDGET_H
#define GAME_WIDGET_H
#include<startwindow.h>

#include <QWidget>

namespace Ui {
class game_widget;
}
class startWindow;
class game_widget : public QWidget
{
    Q_OBJECT

public:
    game_widget(startWindow * parent);
    ~game_widget();

private:
    Ui::game_widget *ui;
};

#endif // GAME_WIDGET_H
