#ifndef STARTWINDOW_H
#include<QPushButton>
#include<constnums.h>
#include<gamewindow.h>
#define STARTWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class startWindow; }
QT_END_NAMESPACE

class startWindow : public QWidget
{
    Q_OBJECT

public:
    startWindow(QWidget *parent = nullptr);
    ~startWindow();

private:
    Ui::startWindow *ui;
};
#endif // STARTWINDOW_H
