#include "mainwindow.h"
#include <iostream>
#include "ui_mainwindow.h"
#include <QSystemTrayIcon>

using std::cout;
using std::endl;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    //tray = new QSystemTrayIcon;
    //QSystemTrayIcon t = &tray;
}

MainWindow::~MainWindow() {
    delete ui;
}




/*void MainWindow::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason) {
    case QSystemTrayIcon::Trigger:
    case QSystemTrayIcon::DoubleClick:
        iconComboBox->setCurrentIndex((iconComboBox->currentIndex() + 1) % iconComboBox->count());
        break;
    case QSystemTrayIcon::MiddleClick:
        showMessage();
        break;
    default:3
        ;
    }
}*/



void MainWindow::on_closeBtn_clicked()
{
    cout << "test" << endl;

    // create System Tray icon
    if(tray->isSystemTrayAvailable()) {

        tray->setIcon(QIcon("qrc:/x-mark-3-32.ico"));
        tray->setVisible(true);
        tray->show();
    }
    else {
       cout << "Doesn't support System Tray" << endl;
    }
}
