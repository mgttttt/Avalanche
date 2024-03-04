/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Avalanche
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QDateTimeEdit *dateTimeEdit;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_18;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_21;
    QLineEdit *lineEdit_22;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QPushButton *pushButton_6;
    QTextEdit *textEdit;
    QWidget *tab_2;
    QTableView *tableView;
    QPushButton *pushButton_7;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_17;
    QFrame *frame;
    QLabel *label_27;
    QComboBox *comboBox_2;
    QCheckBox *checkBox_3;
    QFrame *frame_4;
    QLabel *label_28;
    QDateEdit *dateEdit;
    QLabel *label_29;
    QDateEdit *dateEdit_2;
    QCheckBox *checkBox_4;
    QWidget *tab_3;
    QFrame *frame_2;
    QLabel *label_31;
    QComboBox *comboBox_3;
    QListWidget *listWidget;
    QFrame *frame_3;
    QLabel *label_32;
    QComboBox *comboBox_4;
    QListWidget *listWidget_2;
    QLabel *label_34;
    QDateEdit *dateEdit_3;
    QLabel *label_35;
    QDateEdit *dateEdit_4;
    QCustomPlot *widget;
    QPushButton *pushButton_15;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_16;
    QCheckBox *checkBox_5;
    QWidget *tab_4;
    QTableView *tableView_2;
    QLabel *label_30;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Avalanche)
    {
        if (Avalanche->objectName().isEmpty())
            Avalanche->setObjectName("Avalanche");
        Avalanche->resize(1384, 770);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../build-Avalanche-Desktop-Debug/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Avalanche->setWindowIcon(icon);
        Avalanche->setAutoFillBackground(false);
        centralwidget = new QWidget(Avalanche);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(6, 29, 1361, 721));
        tab = new QWidget();
        tab->setObjectName("tab");
        dateTimeEdit = new QDateTimeEdit(tab);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(10, 10, 194, 27));
        comboBox = new QComboBox(tab);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(10, 40, 191, 26));
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 40, 121, 18));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 10, 121, 18));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 80, 181, 31));
        label_3->setTextFormat(Qt::MarkdownText);
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 110, 191, 26));
        lineEdit->setInputMethodHints(Qt::ImhNone);
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(10, 140, 191, 26));
        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(10, 170, 191, 26));
        lineEdit_4 = new QLineEdit(tab);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(10, 200, 191, 26));
        lineEdit_5 = new QLineEdit(tab);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(10, 230, 191, 26));
        lineEdit_6 = new QLineEdit(tab);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(10, 260, 191, 26));
        lineEdit_7 = new QLineEdit(tab);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(10, 290, 191, 26));
        lineEdit_8 = new QLineEdit(tab);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(10, 320, 191, 26));
        lineEdit_9 = new QLineEdit(tab);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(10, 350, 191, 26));
        lineEdit_10 = new QLineEdit(tab);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(710, 110, 191, 26));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(210, 110, 151, 18));
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(210, 140, 221, 18));
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(210, 170, 221, 18));
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(210, 200, 271, 18));
        label_8 = new QLabel(tab);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(210, 230, 431, 18));
        label_9 = new QLabel(tab);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(210, 260, 381, 18));
        label_10 = new QLabel(tab);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(210, 290, 411, 18));
        label_11 = new QLabel(tab);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(210, 320, 401, 18));
        label_12 = new QLabel(tab);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(210, 350, 481, 18));
        label_13 = new QLabel(tab);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(910, 110, 391, 18));
        lineEdit_11 = new QLineEdit(tab);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setGeometry(QRect(10, 380, 191, 26));
        lineEdit_12 = new QLineEdit(tab);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setGeometry(QRect(10, 410, 191, 26));
        lineEdit_13 = new QLineEdit(tab);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setGeometry(QRect(710, 140, 191, 26));
        lineEdit_14 = new QLineEdit(tab);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setGeometry(QRect(710, 170, 191, 26));
        lineEdit_15 = new QLineEdit(tab);
        lineEdit_15->setObjectName("lineEdit_15");
        lineEdit_15->setGeometry(QRect(710, 200, 191, 26));
        lineEdit_16 = new QLineEdit(tab);
        lineEdit_16->setObjectName("lineEdit_16");
        lineEdit_16->setGeometry(QRect(710, 230, 191, 26));
        lineEdit_17 = new QLineEdit(tab);
        lineEdit_17->setObjectName("lineEdit_17");
        lineEdit_17->setGeometry(QRect(710, 260, 191, 26));
        lineEdit_18 = new QLineEdit(tab);
        lineEdit_18->setObjectName("lineEdit_18");
        lineEdit_18->setGeometry(QRect(710, 290, 191, 26));
        label_14 = new QLabel(tab);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(210, 380, 601, 18));
        label_15 = new QLabel(tab);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(910, 140, 381, 18));
        label_16 = new QLabel(tab);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(910, 200, 211, 18));
        label_17 = new QLabel(tab);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(910, 230, 351, 18));
        label_18 = new QLabel(tab);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(910, 260, 361, 18));
        label_19 = new QLabel(tab);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(910, 290, 381, 18));
        label_20 = new QLabel(tab);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(210, 410, 691, 18));
        label_21 = new QLabel(tab);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(910, 170, 421, 18));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 460, 191, 26));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(220, 460, 191, 26));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(430, 460, 191, 26));
        label_22 = new QLabel(tab);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(10, 500, 201, 31));
        label_22->setTextFormat(Qt::MarkdownText);
        label_23 = new QLabel(tab);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(10, 530, 181, 18));
        lineEdit_19 = new QLineEdit(tab);
        lineEdit_19->setObjectName("lineEdit_19");
        lineEdit_19->setGeometry(QRect(190, 530, 31, 26));
        lineEdit_20 = new QLineEdit(tab);
        lineEdit_20->setObjectName("lineEdit_20");
        lineEdit_20->setGeometry(QRect(10, 580, 191, 26));
        lineEdit_21 = new QLineEdit(tab);
        lineEdit_21->setObjectName("lineEdit_21");
        lineEdit_21->setGeometry(QRect(10, 610, 191, 26));
        lineEdit_22 = new QLineEdit(tab);
        lineEdit_22->setObjectName("lineEdit_22");
        lineEdit_22->setGeometry(QRect(10, 640, 191, 26));
        label_24 = new QLabel(tab);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(210, 580, 611, 18));
        label_25 = new QLabel(tab);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(210, 610, 481, 18));
        label_26 = new QLabel(tab);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(210, 640, 571, 18));
        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(1170, 590, 131, 26));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(233, 509, 1061, 51));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tableView = new QTableView(tab_2);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 90, 1311, 551));
        tableView->setGridStyle(Qt::SolidLine);
        tableView->setSortingEnabled(true);
        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(710, 40, 88, 26));
        pushButton_12 = new QPushButton(tab_2);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(1050, 40, 31, 26));
        pushButton_13 = new QPushButton(tab_2);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(1090, 40, 31, 26));
        pushButton_14 = new QPushButton(tab_2);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(810, 40, 211, 26));
        pushButton_17 = new QPushButton(tab_2);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(1320, 4, 31, 26));
        frame = new QFrame(tab_2);
        frame->setObjectName("frame");
        frame->setEnabled(true);
        frame->setGeometry(QRect(20, 30, 301, 51));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_27 = new QLabel(frame);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(10, 14, 67, 18));
        comboBox_2 = new QComboBox(frame);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(70, 12, 191, 26));
        checkBox_3 = new QCheckBox(frame);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(270, 12, 21, 24));
        frame_4 = new QFrame(tab_2);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(330, 30, 361, 51));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_28 = new QLabel(frame_4);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(10, 15, 51, 18));
        dateEdit = new QDateEdit(frame_4);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(60, 12, 110, 27));
        label_29 = new QLabel(frame_4);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(180, 13, 21, 18));
        dateEdit_2 = new QDateEdit(frame_4);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setGeometry(QRect(210, 12, 110, 27));
        checkBox_4 = new QCheckBox(frame_4);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(330, 12, 21, 24));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        frame_2 = new QFrame(tab_3);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(10, 40, 411, 321));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_31 = new QLabel(frame_2);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(10, 10, 141, 18));
        comboBox_3 = new QComboBox(frame_2);
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(10, 40, 211, 26));
        listWidget = new QListWidget(frame_2);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 80, 391, 231));
        listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget->setSortingEnabled(false);
        frame_3 = new QFrame(tab_3);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(10, 370, 411, 281));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_32 = new QLabel(frame_3);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(10, 10, 161, 18));
        comboBox_4 = new QComboBox(frame_3);
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(10, 40, 211, 26));
        listWidget_2 = new QListWidget(frame_3);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(10, 80, 391, 191));
        listWidget_2->setSelectionMode(QAbstractItemView::MultiSelection);
        listWidget_2->setSortingEnabled(true);
        label_34 = new QLabel(tab_3);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(10, 10, 51, 18));
        dateEdit_3 = new QDateEdit(tab_3);
        dateEdit_3->setObjectName("dateEdit_3");
        dateEdit_3->setGeometry(QRect(60, 7, 110, 27));
        label_35 = new QLabel(tab_3);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(180, 10, 21, 18));
        dateEdit_4 = new QDateEdit(tab_3);
        dateEdit_4->setObjectName("dateEdit_4");
        dateEdit_4->setGeometry(QRect(200, 6, 110, 27));
        widget = new QCustomPlot(tab_3);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(480, 40, 821, 541));
        pushButton_15 = new QPushButton(tab_3);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(500, 610, 311, 41));
        pushButton_15->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Cantarell\";"));
        checkBox = new QCheckBox(tab_3);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(430, 34, 16, 24));
        checkBox_2 = new QCheckBox(tab_3);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(430, 364, 16, 24));
        pushButton_16 = new QPushButton(tab_3);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(1320, 4, 31, 26));
        checkBox_5 = new QCheckBox(tab_3);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setGeometry(QRect(320, 7, 21, 24));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tableView_2 = new QTableView(tab_4);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(20, 80, 1271, 361));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView_2->sizePolicy().hasHeightForWidth());
        tableView_2->setSizePolicy(sizePolicy);
        tableView_2->setAutoFillBackground(false);
        tableView_2->setFrameShape(QFrame::Box);
        tableView_2->setFrameShadow(QFrame::Sunken);
        tableView_2->setLineWidth(0);
        tableView_2->setSortingEnabled(true);
        label_30 = new QLabel(tab_4);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(30, 40, 281, 18));
        pushButton_8 = new QPushButton(tab_4);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(320, 40, 31, 26));
        pushButton_9 = new QPushButton(tab_4);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(360, 40, 31, 26));
        pushButton_10 = new QPushButton(tab_4);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(400, 40, 31, 26));
        pushButton_11 = new QPushButton(tab_4);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(440, 40, 31, 26));
        tabWidget->addTab(tab_4, QString());
        Avalanche->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Avalanche);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1384, 23));
        Avalanche->setMenuBar(menubar);
        statusbar = new QStatusBar(Avalanche);
        statusbar->setObjectName("statusbar");
        Avalanche->setStatusBar(statusbar);

        retranslateUi(Avalanche);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Avalanche);
    } // setupUi

    void retranslateUi(QMainWindow *Avalanche)
    {
        Avalanche->setWindowTitle(QCoreApplication::translate("Avalanche", "Avalanche", nullptr));
        label->setText(QCoreApplication::translate("Avalanche", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\276\320\261\321\212\320\265\320\272\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("Avalanche", "\320\224\320\260\321\202\320\260 \320\270 \320\262\321\200\320\265\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("Avalanche", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\320\230\321\201\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Avalanche", "\320\243\320\263\320\276\320\273 \321\201\320\272\320\273\320\276\320\275\320\260, \320\263\321\200\320\260\320\264\321\203\321\201\321\213 ", nullptr));
        label_5->setText(QCoreApplication::translate("Avalanche", "\320\224\320\273\320\270\320\275\320\260 \321\201\320\272\320\273\320\276\320\275\320\260 \320\277\320\276 \320\263\320\270\320\277\320\276\321\202\320\265\320\275\321\203\320\267\320\265, \320\274", nullptr));
        label_6->setText(QCoreApplication::translate("Avalanche", "\320\242\320\276\320\273\321\211\320\270\320\275\320\260 \321\201\320\275\320\265\320\266\320\275\320\276\320\263\320\276 \320\277\320\276\320\272\321\200\320\276\320\262\320\260, \320\274", nullptr));
        label_7->setText(QCoreApplication::translate("Avalanche", "\320\241\321\203\320\274\320\274\320\260 \320\276\321\201\320\260\320\264\320\272\320\276\320\262 \320\267\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\265 \321\201\321\203\321\202\320\272\320\270, \320\274\320\274", nullptr));
        label_8->setText(QCoreApplication::translate("Avalanche", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214 \320\276\321\201\320\260\320\264\320\272\320\276\320\262 \320\267\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\265 3 \321\207\320\260\321\201\320\260, \320\274\320\274/\321\207\320\260\321\201", nullptr));
        label_9->setText(QCoreApplication::translate("Avalanche", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\262\320\265\321\202\321\200\320\260 \320\267\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\265 \321\201\321\203\321\202\320\272\320\270, \320\274/\321\201", nullptr));
        label_10->setText(QCoreApplication::translate("Avalanche", "\320\236\320\266\320\270\320\264\320\260\320\265\320\274\320\260\321\217 \320\275\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\265 \321\201\321\203\321\202\320\272\320\270 \321\201\321\203\320\274\320\274\320\260 \320\276\321\201\320\260\320\264\320\272\320\276\320\262, \320\274\320\274/\321\207\320\260\321\201", nullptr));
        label_11->setText(QCoreApplication::translate("Avalanche", "\320\230\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214 \320\267\320\265\320\274\320\273\320\265\321\202\321\200\321\217\321\201\320\265\320\275\320\270\321\217, \320\261\320\260\320\273\320\273\321\213 \320\277\320\276 \321\210\320\272\320\260\320\273\320\265 MSK-81", nullptr));
        label_12->setText(QCoreApplication::translate("Avalanche", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \320\262\320\276\320\267\320\264\321\203\321\205\320\260 \320\267\320\260 \320\262\321\200\320\265\320\274\321\217 \320\275\320\260\320\273\320\270\321\207\320\270\321\217 \321\201\320\275\320\265\320\263\320\260 \320\275\320\260 \321\201\320\272\320\273\320\276\320\275\320\265, \302\260\320\241 ", nullptr));
        label_13->setText(QCoreApplication::translate("Avalanche", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \320\262\320\276\320\267\320\264\321\203\321\205\320\260 \320\267\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\265 10 \320\264\320\275\320\265\320\271, \302\260\320\241", nullptr));
        label_14->setText(QCoreApplication::translate("Avalanche", "\320\242\320\276\320\273\321\211\320\270\320\275\320\260 \321\201\320\275\320\265\320\263\320\260, \320\275\320\260\321\207\320\270\320\275\320\260\321\216\321\211\320\265\320\263\320\276\321\201\321\217 \321\203 \320\263\321\200\321\203\320\275\321\202\320\260 \320\270 \320\270\320\274\320\265\321\216\321\211\320\265\320\263\320\276 \320\277\320\273\320\276\321\202\320\275\320\276\321\201\321\202\321\214 >430 \320\272\320\263/\320\272\321\203\320\261\320\276\320\274\320\265\321\202\321\200,\320\274", nullptr));
        label_15->setText(QCoreApplication::translate("Avalanche", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \320\262\320\276\320\267\320\264\321\203\321\205\320\260 \320\267\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\265 \321\201\321\203\321\202\320\272\320\270, \302\260\320\241", nullptr));
        label_16->setText(QCoreApplication::translate("Avalanche", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \321\202\320\276\320\273\321\211\320\270\320\275\320\260 \321\201\320\275\320\265\320\263\320\260, \320\274", nullptr));
        label_17->setText(QCoreApplication::translate("Avalanche", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217 \321\202\320\276\320\273\321\211\320\270\320\275\320\260 \321\201\320\275\320\265\320\263\320\260 \320\267\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\265 10 \320\264\320\275\320\265\320\271, \320\274", nullptr));
        label_18->setText(QCoreApplication::translate("Avalanche", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \321\202\320\276\320\273\321\211\320\270\320\275\321\213 \321\201\320\275\320\265\320\263\320\260 \320\267\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\265 \321\201\321\203\321\202\320\272\320\270, \320\274", nullptr));
        label_19->setText(QCoreApplication::translate("Avalanche", "\320\222\320\265\321\200\320\276\321\217\321\202\320\275\320\276\321\201\321\202\321\214 \320\267\320\265\320\274\320\273\320\265\321\202\321\200\321\217\321\201\320\265\320\275\320\270\321\217 \320\267\320\260\320\264\320\260\320\275\320\275\320\276\320\271 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\320\270", nullptr));
        label_20->setText(QCoreApplication::translate("Avalanche", "\320\237\320\273\320\276\321\202\320\275\320\276\321\201\321\202\321\214 \321\201\320\275\320\265\320\263\320\260, \320\275\320\260\321\207\320\270\320\275\320\260\321\216\321\211\320\265\320\263\320\276\321\201\321\217 \321\203 \320\263\321\200\321\203\320\275\321\202\320\260 \320\270 \320\270\320\274\320\265\321\216\321\211\320\265\320\263\320\276 \320\277\320\273\320\276\321\202\320\275\320\276\321\201\321\202\321\214 >430 \320\272\320\263/\320\272\321\203\320\261\320\276\320\274\320\265\321\202\321\200, \320\272\320\263/\320\272\321\203\320\261\320\276\320\274\320\265\321\202\321\200", nullptr));
        label_21->setText(QCoreApplication::translate("Avalanche", "\320\222\321\200\320\265\320\274\321\217, \320\262 \321\202\320\265\321\207\320\265\320\275\320\270\320\265 \320\272\320\276\321\202\320\276\321\200\320\276\320\263\320\276 \321\201\320\275\320\265\320\263 \320\275\320\260\321\205\320\276\320\264\320\270\321\202\321\201\321\217 \320\275\320\260 \321\201\320\272\320\273\320\276\320\275\320\265, \321\207\320\260\321\201\321\213", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Avalanche", "\320\240\320\260\321\201\321\207\320\265\321\202", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Avalanche", "\320\237\321\200\320\270\320\274\320\265\321\200 \321\200\320\260\321\201\321\207\320\265\321\202\320\260", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Avalanche", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label_22->setText(QCoreApplication::translate("Avalanche", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \321\200\320\260\321\201\321\207\320\265\321\202\320\260</span></p></body></html>", nullptr));
        label_23->setText(QCoreApplication::translate("Avalanche", "\320\232\320\276\320\264 \320\273\320\260\320\262\320\270\320\275\320\275\320\276\320\271 \320\276\320\277\320\260\321\201\320\275\320\276\321\201\321\202\320\270", nullptr));
        label_24->setText(QCoreApplication::translate("Avalanche", "\320\241\321\202\320\265\320\277\320\265\320\275\321\214 \320\277\321\200\320\270\320\275\320\260\320\264\320\273\320\265\320\266\320\275\320\276\321\201\321\202\320\270 \321\201\320\270\321\202\321\203\320\260\321\206\320\270\320\270 \320\272 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\216 \320\270\321\201\320\272\320\273\321\216\321\207\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\271 \320\273\320\260\320\262\320\270\320\275\320\275\320\276\320\271 \320\276\320\277\320\260\321\201\320\275\320\276\321\201\321\202\320\270", nullptr));
        label_25->setText(QCoreApplication::translate("Avalanche", "\320\241\321\202\320\265\320\277\320\265\320\275\321\214 \320\277\321\200\320\270\320\275\320\260\320\264\320\273\320\265\320\266\320\275\320\276\321\201\321\202\320\270 \321\201\320\270\321\202\321\203\320\260\321\206\320\270\320\270 \320\272 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\216 \320\273\320\260\320\262\320\270\320\275\320\275\320\276\320\271 \320\276\320\277\320\260\321\201\320\275\320\276\321\201\321\202\320\270", nullptr));
        label_26->setText(QCoreApplication::translate("Avalanche", "\320\241\321\202\320\265\320\277\320\265\320\275\321\214 \320\277\321\200\320\270\320\275\320\260\320\264\320\273\320\265\320\266\320\275\320\276\321\201\321\202\320\270 \321\201\320\270\321\202\321\203\320\260\321\206\320\270\320\270 \320\272 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\216 \320\275\320\265\321\203\321\201\321\202\320\276\320\271\321\207\320\270\320\262\320\276\320\263\320\276 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\216 \321\201\320\275\320\265\320\263\320\260", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Avalanche", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \320\221\320\224", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Avalanche", "\320\240\320\260\321\201\321\207\320\265\321\202", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Avalanche", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Avalanche", "+", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Avalanche", "-", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Avalanche", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \321\204\320\270\320\273\321\214\321\202\321\200\321\213 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        pushButton_17->setText(QCoreApplication::translate("Avalanche", "?", nullptr));
        label_27->setText(QCoreApplication::translate("Avalanche", "\320\236\320\261\321\212\320\265\320\272\321\202", nullptr));
        checkBox_3->setText(QString());
        label_28->setText(QCoreApplication::translate("Avalanche", "\320\224\320\260\321\202\320\260 \321\201", nullptr));
        label_29->setText(QCoreApplication::translate("Avalanche", "\320\277\320\276", nullptr));
        checkBox_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Avalanche", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label_31->setText(QCoreApplication::translate("Avalanche", "\320\220\320\275\320\260\320\273\320\270\320\267 \320\277\320\276 \320\276\320\261\321\212\320\265\320\272\321\202\321\203", nullptr));
        comboBox_3->setCurrentText(QString());
        label_32->setText(QCoreApplication::translate("Avalanche", "\320\220\320\275\320\260\320\273\320\270\320\267 \320\277\320\276 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\260\320\274", nullptr));
        label_34->setText(QCoreApplication::translate("Avalanche", "\320\224\320\260\321\202\320\260 \321\201", nullptr));
        label_35->setText(QCoreApplication::translate("Avalanche", "\320\277\320\276", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Avalanche", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        checkBox->setText(QString());
        checkBox_2->setText(QString());
        pushButton_16->setText(QCoreApplication::translate("Avalanche", "?", nullptr));
        checkBox_5->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Avalanche", "\320\220\320\275\320\260\320\273\320\270\320\267 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label_30->setText(QCoreApplication::translate("Avalanche", "\320\224\320\273\321\217 \321\200\320\260\320\261\320\276\321\202\321\213 \321\201 \320\264\320\260\320\275\320\275\321\213\320\274\320\270 \320\262\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Avalanche", "+", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Avalanche", "-", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Avalanche", "\342\234\223", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Avalanche", "?", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Avalanche", "\320\242\320\276\321\207\320\272\320\270 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Avalanche: public Ui_Avalanche {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
