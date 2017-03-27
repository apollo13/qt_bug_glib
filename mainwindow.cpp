#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    sock(new QTcpSocket(this)),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->connectButton, &QPushButton::pressed, [this]() {
        sock->connectToHost("127.0.0.1", 5000);
    });

    connect(sock, &QTcpSocket::connected, [this]() {
       ui->triggerButton->setEnabled(true);
       ui->connectButton->setEnabled(false);
    });

    connect(ui->triggerButton, &QPushButton::pressed, [this]() {
        QEventLoop l;
        l.exec(QEventLoop::ExcludeUserInputEvents);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
