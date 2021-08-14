#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QAbstractButton::clicked, this, [this](){
        QMessageBox::about(this, "Hello World!", "CMake for fun");
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}