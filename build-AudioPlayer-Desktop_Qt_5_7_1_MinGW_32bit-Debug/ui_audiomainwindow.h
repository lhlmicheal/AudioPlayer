/********************************************************************************
** Form generated from reading UI file 'audiomainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOMAINWINDOW_H
#define UI_AUDIOMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioMainWindow
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AudioMainWindow)
    {
        if (AudioMainWindow->objectName().isEmpty())
            AudioMainWindow->setObjectName(QStringLiteral("AudioMainWindow"));
        AudioMainWindow->resize(400, 300);
        menuBar = new QMenuBar(AudioMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        AudioMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AudioMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AudioMainWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(AudioMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AudioMainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AudioMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AudioMainWindow->setStatusBar(statusBar);

        retranslateUi(AudioMainWindow);

        QMetaObject::connectSlotsByName(AudioMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AudioMainWindow)
    {
        AudioMainWindow->setWindowTitle(QApplication::translate("AudioMainWindow", "AudioMainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AudioMainWindow: public Ui_AudioMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOMAINWINDOW_H
