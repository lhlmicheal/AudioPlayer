/********************************************************************************
** Form generated from reading UI file 'audioplayerdesctopdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOPLAYERDESCTOPDIALOG_H
#define UI_AUDIOPLAYERDESCTOPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AudioPlayerDesctopDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *tilelabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *selectBtn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *curProlabel;
    QProgressBar *AudioProBar;
    QLabel *totalProlabel;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *playModelBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *preBtn;
    QPushButton *playOrPauseBtn;
    QPushButton *nextBtn;

    void setupUi(QDialog *AudioPlayerDesctopDialog)
    {
        if (AudioPlayerDesctopDialog->objectName().isEmpty())
            AudioPlayerDesctopDialog->setObjectName(QStringLiteral("AudioPlayerDesctopDialog"));
        AudioPlayerDesctopDialog->resize(535, 276);
        verticalLayout = new QVBoxLayout(AudioPlayerDesctopDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tilelabel = new QLabel(AudioPlayerDesctopDialog);
        tilelabel->setObjectName(QStringLiteral("tilelabel"));
        tilelabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(tilelabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(AudioPlayerDesctopDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        lineEdit = new QLineEdit(AudioPlayerDesctopDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        selectBtn = new QPushButton(AudioPlayerDesctopDialog);
        selectBtn->setObjectName(QStringLiteral("selectBtn"));

        horizontalLayout_4->addWidget(selectBtn);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        curProlabel = new QLabel(AudioPlayerDesctopDialog);
        curProlabel->setObjectName(QStringLiteral("curProlabel"));
        curProlabel->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(curProlabel);

        AudioProBar = new QProgressBar(AudioPlayerDesctopDialog);
        AudioProBar->setObjectName(QStringLiteral("AudioProBar"));
        AudioProBar->setValue(0);

        horizontalLayout_2->addWidget(AudioProBar);

        totalProlabel = new QLabel(AudioPlayerDesctopDialog);
        totalProlabel->setObjectName(QStringLiteral("totalProlabel"));

        horizontalLayout_2->addWidget(totalProlabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        playModelBtn = new QPushButton(AudioPlayerDesctopDialog);
        playModelBtn->setObjectName(QStringLiteral("playModelBtn"));

        horizontalLayout_3->addWidget(playModelBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        preBtn = new QPushButton(AudioPlayerDesctopDialog);
        preBtn->setObjectName(QStringLiteral("preBtn"));

        horizontalLayout_3->addWidget(preBtn);

        playOrPauseBtn = new QPushButton(AudioPlayerDesctopDialog);
        playOrPauseBtn->setObjectName(QStringLiteral("playOrPauseBtn"));

        horizontalLayout_3->addWidget(playOrPauseBtn);

        nextBtn = new QPushButton(AudioPlayerDesctopDialog);
        nextBtn->setObjectName(QStringLiteral("nextBtn"));

        horizontalLayout_3->addWidget(nextBtn);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(AudioPlayerDesctopDialog);

        QMetaObject::connectSlotsByName(AudioPlayerDesctopDialog);
    } // setupUi

    void retranslateUi(QDialog *AudioPlayerDesctopDialog)
    {
        AudioPlayerDesctopDialog->setWindowTitle(QApplication::translate("AudioPlayerDesctopDialog", "Dialog", Q_NULLPTR));
        tilelabel->setText(QApplication::translate("AudioPlayerDesctopDialog", "Music makes people temperament noble", Q_NULLPTR));
        label->setText(QApplication::translate("AudioPlayerDesctopDialog", "file:", Q_NULLPTR));
        selectBtn->setText(QApplication::translate("AudioPlayerDesctopDialog", "...", Q_NULLPTR));
        curProlabel->setText(QApplication::translate("AudioPlayerDesctopDialog", "00:00", Q_NULLPTR));
        totalProlabel->setText(QApplication::translate("AudioPlayerDesctopDialog", "00:00", Q_NULLPTR));
        playModelBtn->setText(QApplication::translate("AudioPlayerDesctopDialog", "\345\215\225\346\233\262\345\276\252\347\216\257", Q_NULLPTR));
        preBtn->setText(QApplication::translate("AudioPlayerDesctopDialog", "<<", Q_NULLPTR));
        playOrPauseBtn->setText(QApplication::translate("AudioPlayerDesctopDialog", "||", Q_NULLPTR));
        nextBtn->setText(QApplication::translate("AudioPlayerDesctopDialog", ">>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AudioPlayerDesctopDialog: public Ui_AudioPlayerDesctopDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOPLAYERDESCTOPDIALOG_H
