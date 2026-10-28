#include "mainwindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(800, 600);

    QSize min_sz(500, 500);
    QSize max_sz(1000, 1000);
    setMinimumSize(min_sz);
    setMaximumSize(max_sz);
    setWindowTitle("Форма регистрации");
    QLabel* label1 = new QLabel(" <b> Форма регистрации </b>", this);
    label1->setGeometry(100, 10, 600, 15);
    label1->setTextFormat(Qt::RichText);
    label1->setAlignment(Qt::AlignCenter);

}
MainWindow::~MainWindow() = default;

