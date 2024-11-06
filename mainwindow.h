// mainwindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onCompressButtonClicked();
    void onDecompressButtonClicked();

private:
    Ui::MainWindow *ui;

    void logMessage(const QString &message);
};

#endif // MAINWINDOW_H
