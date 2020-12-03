#include "inc/buttontester.h"

#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ButtonTester *testArea = new ButtonTester;
    testArea->setMinimumSize(500, 350);

    testArea->setContextMenuPolicy(Qt::NoContextMenu);
    testArea->setTextInteractionFlags(Qt::TextSelectableByMouse);
    testArea->setText("to test your mouse with Qt, Press button in this area.\nYou may also scroll or tilt your mouse wheel.");
    QPushButton *quitButton = new QPushButton("Quit");

    QObject::connect(quitButton, &QPushButton::clicked, qApp, &QCoreApplication::quit);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(testArea);
    layout->addWidget(quitButton);

    QWidget window;
    window.setLayout(layout);
    window.setWindowTitle("Mouse Button Tester");
    window.show();

    return a.exec();
}

//cc b
