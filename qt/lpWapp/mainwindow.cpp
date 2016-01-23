#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "close.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnRed_clicked()
{
    int fd;
    int cmd = 0x02;
    fd = open("/dev/xbdev1", O_RDWR);
    write(fd, &cmd, 1);
    myclose(fd);
}

void MainWindow::on_btnGreen_clicked()
{
    int fd;
    int cmd = 0x08;
    fd = open("/dev/xbdev1", O_RDWR);
    write(fd, &cmd, 1);
    myclose(fd);

}

void MainWindow::on_btnBlau_clicked()
{
    int fd;
    int cmd = 0x04;
    fd = open("/dev/xbdev1", O_RDWR);
    write(fd, &cmd, 1);
    myclose(fd);
}
