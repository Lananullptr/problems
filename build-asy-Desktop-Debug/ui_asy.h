/********************************************************************************
** Form generated from reading UI file 'asy.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASY_H
#define UI_ASY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_asy
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *asy)
    {
        if (asy->objectName().isEmpty())
            asy->setObjectName(QStringLiteral("asy"));
        asy->resize(680, 451);
        centralWidget = new QWidget(asy);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(510, 40, 120, 80));
        doubleSpinBox = new QDoubleSpinBox(groupBox);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(50, 20, 62, 22));
        doubleSpinBox->setMinimum(15);
        doubleSpinBox->setMaximum(30);
        doubleSpinBox->setValue(20);
        doubleSpinBox_2 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(50, 50, 62, 22));
        doubleSpinBox_2->setMinimum(4);
        doubleSpinBox_2->setMaximum(15);
        doubleSpinBox_2->setValue(10);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 31, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 31, 16));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(510, 140, 120, 80));
        doubleSpinBox_3 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(50, 20, 62, 22));
        doubleSpinBox_3->setMinimum(12);
        doubleSpinBox_3->setMaximum(30);
        doubleSpinBox_3->setValue(25);
        doubleSpinBox_4 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        doubleSpinBox_4->setGeometry(QRect(50, 50, 62, 22));
        doubleSpinBox_4->setMinimum(3);
        doubleSpinBox_4->setMaximum(13);
        doubleSpinBox_4->setValue(12);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 31, 16));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 50, 31, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 171, 16));
        QFont font;
        font.setFamily(QStringLiteral("Impact"));
        font.setPointSize(13);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        label_5->setFont(font);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 230, 151, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Impact"));
        font1.setPointSize(12);
        label_6->setFont(font1);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 30, 481, 192));
        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(10, 260, 481, 141));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(540, 340, 75, 23));
        asy->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(asy);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 680, 27));
        asy->setMenuBar(menuBar);
        mainToolBar = new QToolBar(asy);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        asy->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(asy);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        asy->setStatusBar(statusBar);

        retranslateUi(asy);

        QMetaObject::connectSlotsByName(asy);
    } // setupUi

    void retranslateUi(QMainWindow *asy)
    {
        asy->setWindowTitle(QApplication::translate("asy", "asy", 0));
        groupBox->setTitle(QApplication::translate("asy", "\321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", 0));
        label->setText(QApplication::translate("asy", "\320\274\320\260\320\272\321\201.", 0));
        label_2->setText(QApplication::translate("asy", "\320\274\320\270\320\275.", 0));
        groupBox_2->setTitle(QApplication::translate("asy", "\320\262\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214", 0));
        label_3->setText(QApplication::translate("asy", "\320\274\320\260\320\272\321\201.", 0));
        label_4->setText(QApplication::translate("asy", "\320\274\320\270\320\275.", 0));
        label_5->setText(QApplication::translate("asy", "\321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", 0));
        label_6->setText(QApplication::translate("asy", "\320\277\321\200\320\265\320\264\321\203\320\277\321\200\320\265\320\266\320\264\320\265\320\275\320\270\321\217", 0));
        pushButton->setText(QApplication::translate("asy", "\320\235\320\260\321\207\320\260\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class asy: public Ui_asy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASY_H
