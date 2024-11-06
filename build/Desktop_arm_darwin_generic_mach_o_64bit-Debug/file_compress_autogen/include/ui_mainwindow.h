/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *titleLabel;
    QPushButton *compressButton;
    QPushButton *decompressButton;
    QLabel *compressStatusLabel;
    QLabel *decompressStatusLabel;
    QLabel *compressionRatioLabel;
    QLabel *logLabel;
    QPlainTextEdit *logTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 650);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(200, 20, 400, 40));
        titleLabel->setAlignment(Qt::AlignCenter);
        titleLabel->setStyleSheet(QString::fromUtf8("font-size: 20pt; font-weight: bold; color: #2E86C1;"));
        compressButton = new QPushButton(centralwidget);
        compressButton->setObjectName("compressButton");
        compressButton->setGeometry(QRect(150, 100, 200, 50));
        compressButton->setStyleSheet(QString::fromUtf8("font-size: 12pt; background-color: #28B463; color: white; border-radius: 10px;"));
        decompressButton = new QPushButton(centralwidget);
        decompressButton->setObjectName("decompressButton");
        decompressButton->setGeometry(QRect(450, 100, 200, 50));
        decompressButton->setStyleSheet(QString::fromUtf8("font-size: 12pt; background-color: #C0392B; color: white; border-radius: 10px;"));
        compressStatusLabel = new QLabel(centralwidget);
        compressStatusLabel->setObjectName("compressStatusLabel");
        compressStatusLabel->setGeometry(QRect(150, 180, 500, 30));
        compressStatusLabel->setAlignment(Qt::AlignCenter);
        compressStatusLabel->setStyleSheet(QString::fromUtf8("font-size: 10pt; color: #34495E;"));
        decompressStatusLabel = new QLabel(centralwidget);
        decompressStatusLabel->setObjectName("decompressStatusLabel");
        decompressStatusLabel->setGeometry(QRect(150, 220, 500, 30));
        decompressStatusLabel->setAlignment(Qt::AlignCenter);
        decompressStatusLabel->setStyleSheet(QString::fromUtf8("font-size: 10pt; color: #34495E;"));
        compressionRatioLabel = new QLabel(centralwidget);
        compressionRatioLabel->setObjectName("compressionRatioLabel");
        compressionRatioLabel->setGeometry(QRect(150, 260, 500, 30));
        compressionRatioLabel->setAlignment(Qt::AlignCenter);
        compressionRatioLabel->setStyleSheet(QString::fromUtf8("font-size: 10pt; color: #1F618D;"));
        logLabel = new QLabel(centralwidget);
        logLabel->setObjectName("logLabel");
        logLabel->setGeometry(QRect(50, 300, 700, 30));
        logLabel->setStyleSheet(QString::fromUtf8("font-size: 12pt; font-weight: bold; color: #5D6D7E;"));
        logTextEdit = new QPlainTextEdit(centralwidget);
        logTextEdit->setObjectName("logTextEdit");
        logTextEdit->setGeometry(QRect(50, 330, 700, 250));
        logTextEdit->setReadOnly(true);
        logTextEdit->setStyleSheet(QString::fromUtf8("font-size: 10pt; color: #2C3E50; background-color: #F2F4F4; border: 1px solid #BDC3C7; border-radius: 5px;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\216\213\347\274\251\344\270\216\350\247\243\345\216\213\347\274\251", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\216\213\347\274\251\344\270\216\350\247\243\345\216\213\347\274\251\345\267\245\345\205\267", nullptr));
        compressButton->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266\345\271\266\345\216\213\347\274\251", nullptr));
        decompressButton->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266\345\271\266\350\247\243\345\216\213", nullptr));
        compressStatusLabel->setText(QCoreApplication::translate("MainWindow", "\345\216\213\347\274\251\347\212\266\346\200\201\357\274\232\347\255\211\345\276\205\346\223\215\344\275\234", nullptr));
        decompressStatusLabel->setText(QCoreApplication::translate("MainWindow", "\350\247\243\345\216\213\347\212\266\346\200\201\357\274\232\347\255\211\345\276\205\346\223\215\344\275\234", nullptr));
        compressionRatioLabel->setText(QCoreApplication::translate("MainWindow", "\345\216\213\347\274\251\347\216\207\357\274\232N/A", nullptr));
        logLabel->setText(QCoreApplication::translate("MainWindow", "\346\223\215\344\275\234\346\227\245\345\277\227\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
