#ifndef ASY_H
#define ASY_H

#include <QMainWindow>
#include <QTimer>
#include <time.h>
#include <iostream>

namespace Ui {
class asy;
}

class asy : public QMainWindow
{
    Q_OBJECT

public:
    explicit asy(QWidget *parent = 0);
    ~asy();

private slots:

    void first_timer();

    void second_timer();

    void third_timer();


    void on_pushButton_clicked();

    void on_asy_iconSizeChanged(const QSize &iconSize);

private:
    Ui::asy *ui;
    double maxt;
    double mint;
    double maxw;
    double minw;
    double rooms[10][2];
    int fcr[5];
    QTimer *timer,*timer1, *timer2;
};

#endif // ASY_H
