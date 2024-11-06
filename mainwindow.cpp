// mainwindow.cpp
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "filecompressor.hpp"
#include <QFileDialog>
#include <QMessageBox>
#include <QFileInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    connect(ui->compressButton, &QPushButton::clicked, this, &MainWindow::onCompressButtonClicked);
    connect(ui->decompressButton, &QPushButton::clicked, this, &MainWindow::onDecompressButtonClicked);
}

void MainWindow::onCompressButtonClicked() {
    QString inputFilePath = QFileDialog::getOpenFileName(this, "选择要压缩的文件");
    if (inputFilePath.isEmpty()) return;

    QString outputFilePath = QFileDialog::getSaveFileName(this, "选择压缩后保存的位置和文件名（无需输入后缀）");
    if (outputFilePath.isEmpty()) return;

    outputFilePath += ".huff";

    FileCompressor compressor;
    if (compressor.compressFile(inputFilePath.toStdString(), outputFilePath.toStdString())) {
        ui->compressStatusLabel->setText("压缩状态：压缩成功");
        logMessage("文件压缩完成！\n保存为：" + outputFilePath);

        QFileInfo inputFileInfo(inputFilePath);
        QFileInfo outputFileInfo(outputFilePath);
        qint64 inputSize = inputFileInfo.size();
        qint64 outputSize = outputFileInfo.size();
        double compressionRatio = (1.0 - static_cast<double>(outputSize) / inputSize) * 100;
        ui->compressionRatioLabel->setText(QString("压缩率：%1%").arg(compressionRatio, 0, 'f', 2));
        logMessage(QString("原文件大小：%1 字节").arg(inputSize));
        logMessage(QString("压缩后大小：%1 字节").arg(outputSize));
        logMessage(QString("压缩率：%1%").arg(compressionRatio, 0, 'f', 2));
    } else {
        ui->compressStatusLabel->setText("压缩状态：压缩失败");
        QMessageBox::warning(this, "错误", "文件压缩失败！");
        logMessage("文件压缩失败！");
    }
}

void MainWindow::onDecompressButtonClicked() {
    QString inputFilePath = QFileDialog::getOpenFileName(this, "选择要解压的文件", "", "Huffman 压缩文件 (*.huff)");
    if (inputFilePath.isEmpty()) return;

    QString outputFilePath = QFileDialog::getSaveFileName(this, "选择解压后保存的位置和文件名（无需输入扩展名）");
    if (outputFilePath.isEmpty()) return;

    FileCompressor compressor;
    if (compressor.decompressFile(inputFilePath.toStdString(), outputFilePath.toStdString())) {
        ui->decompressStatusLabel->setText("解压状态：解压成功");
        logMessage("文件解压完成！\n保存为：" + outputFilePath + "（已添加原始扩展名）");
    } else {
        ui->decompressStatusLabel->setText("解压状态：解压失败");
        QMessageBox::warning(this, "错误", "文件解压失败！");
        logMessage("文件解压失败！");
    }
}

void MainWindow::logMessage(const QString &message) {
    ui->logTextEdit->appendPlainText(message);
}

MainWindow::~MainWindow() {
    delete ui;
}
