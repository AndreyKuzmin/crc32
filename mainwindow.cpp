#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QTableWidget>
#include <QVector>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QFileSystemModel(this);
    //ui->tableWidget
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString str = QFileDialog::getOpenFileName();
    QString name = QFileInfo(str).fileName();
    //QString size = QFileInfo(str).size();

}


void MainWindow::on_pushButton_2_clicked()
{
    ui->tableWidget->setRowCount(0);
}
