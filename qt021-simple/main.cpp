
#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QPushButton>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow * w = new QMainWindow;
    w -> resize(700,700);
    w -> setWindowTitle("Eto okno");


    QLabel * label = new QLabel("Eto text label",w);
    label->setGeometry(20,100,300,30);
    label -> show();

    QPushButton * button = new QPushButton ("press me", w);
    button ->setGeometry(20,20,100,40);
     w -> show();
     button -> show();

    QObject::connect(button,SIGNAL(clicked()),w,SLOT(close()));


    return a.exec();
}

