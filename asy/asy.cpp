 #include "asy.h"
#include "ui_asy.h"
#include <qfile.h>
#include <qtextstream.h>
#include <QString>
#include <qstring.h>

asy::asy(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::asy)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(first_timer()));
    timer->stop();

    timer1 = new QTimer(this);
    connect(timer1,SIGNAL(timeout()),this, SLOT(second_timer()));
    timer1->stop();

    timer2 = new QTimer(this);
    connect(timer2,SIGNAL(timeout()),this, SLOT(third_timer()));
    timer2->stop();

    srand(time(0));
}

asy::~asy()
{
    delete ui;
}

void asy::first_timer()
{
   ui->listWidget->clear();
   for(int i = 0; i<10; i++)
   {
        ui->listWidget->addItem("Room "+QString("%3").arg(i+1)+": temperature = "+QString("%1").arg(rooms[i][0])+"; hum = "+QString("%2").arg(rooms[i][1]));

   }

}

void asy::second_timer()
{
    int c,i,j;
    ui->listWidget_2->clear();
    for (i = 0; i < 10; i++)
    for (j = 0; j < 2; j++)
    {
        c = 0 + rand() % 2;
        if (c==0) rooms[i][j]+=0.5;
        else rooms[i][j]-=0.5;

        if (j==0){
            if(((rooms[i][j]<=mint+2)&&(rooms[i][j]>=mint))||((rooms[i][j]<=maxt)&&(rooms[i][j]>=maxt-2)))
            ui->listWidget_2->addItem("Room attention! "+QString("%3").arg(i+1)+": t = "+QString("%1").arg(rooms[i][0]));
            if((rooms[i][j]<mint)||(rooms[i][j]>maxt))
            ui->listWidget_2->addItem("Room danger "+QString("%1").arg(i+1)+": t = "+QString("%2").arg(rooms[i][0]));
        }
        else
            if(((rooms[i][j]<=minw+2)&&(rooms[i][j]>=minw))||((rooms[i][j]>=maxw-2)&&(rooms[i][j]<=maxw)))
            ui->listWidget_2->addItem("Room attention!"+QString("%3").arg(i+1)+"; h = "+QString("%2").arg(rooms[i][1]));
            if((rooms[i][j]<minw)||(rooms[i][j]>maxw))
            ui->listWidget_2->addItem("Room attention!"+QString("%3").arg(i+1)+"; h = "+QString("%2").arg(rooms[i][1]));
    }
}

void asy::third_timer()
{
    int c,i,j;
    for (i = 0; i < 5; i++)
    for (j = 0; j < 2; j++)
    {
        c = 0 + rand() % 2;
        if (c==0) rooms[fcr[i]][j]+=0.5;
        else rooms[fcr[i]][j]-=0.5;
    }
}



void asy::on_pushButton_clicked()
{
    QFile file("/home/panda/Документы/asy/as");
    file.open( QIODevice::ReadOnly);
    QTextStream stream(&file);
    QString wholefile;

   // stream.setEncoding(QTextStream::UnicodeUTF8);
    wholefile = stream.read(9);
    file.close();
    int j=0;
    QString wfile[5];
    for (int i=0; i<9; i++)
        if (wholefile[i]!=' ') {
            wfile[j]=wholefile[i];
            fcr[j]=wfile[j].toInt();
            j++;
        }

    if(ui->pushButton->text()=="Начать")
    {
        maxt = ui->doubleSpinBox->value();
        mint = ui->doubleSpinBox_2->value();
        maxw = ui->doubleSpinBox_3->value();
        minw = ui->doubleSpinBox_4->value();
        int n1 = (maxt+mint)/2;
        int n2 = (maxw+minw)/2;
        for(int i=0;i<10;i++)
        {
            rooms[i][0]= n1;
            rooms[i][1]= n2;
        }

        timer->start(1000);
        timer1->start(4000);
        timer2->start(1000);
        ui->pushButton->text()= "Остановить";
    }
    else
    {
        timer->stop();
        timer1->stop();
        ui->pushButton->text()= "Начать";
    }
}
