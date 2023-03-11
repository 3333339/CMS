#ifndef STARTWINDOW_H
#define STARTWINDOW_H
#include<QPushButton>
#include<constnums.h>
#include<game_widget.h>
#include<QTimer>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class startWindow; }
QT_END_NAMESPACE

class startWindow : public QWidget
{
    Q_OBJECT

public:
    startWindow(QWidget* parent = nullptr);
    ~startWindow();
Q_SIGNALS:
    void rollback_signal();
private:
    Ui::startWindow *ui;
};
#endif // STARTWINDOW_H
