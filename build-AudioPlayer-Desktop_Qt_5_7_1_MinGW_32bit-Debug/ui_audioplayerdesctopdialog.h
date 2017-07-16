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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
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
    QSpacerItem *horizontalSpacer_4;
    QSlider *playProSlider;
    QSpacerItem *horizontalSpacer_5;
    QLabel *totalProlabel;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *playModelBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *preBtn;
    QPushButton *playOrPauseBtn;
    QPushButton *nextBtn;
    QPushButton *stopBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *soundBtn;
    QSlider *soundVolumnSlider;

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

        horizontalSpacer_4 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        playProSlider = new QSlider(AudioPlayerDesctopDialog);
        playProSlider->setObjectName(QStringLiteral("playProSlider"));
        playProSlider->setAcceptDrops(true);
        playProSlider->setMaximum(100);
        playProSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(playProSlider);

        horizontalSpacer_5 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        totalProlabel = new QLabel(AudioPlayerDesctopDialog);
        totalProlabel->setObjectName(QStringLiteral("totalProlabel"));

        horizontalLayout_2->addWidget(totalProlabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        playModelBtn = new QPushButton(AudioPlayerDesctopDialog);
        playModelBtn->setObjectName(QStringLiteral("playModelBtn"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/32_32/vinyl_symbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        playModelBtn->setIcon(icon);

        horizontalLayout_3->addWidget(playModelBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        preBtn = new QPushButton(AudioPlayerDesctopDialog);
        preBtn->setObjectName(QStringLiteral("preBtn"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/32_32/play_backward.png"), QSize(), QIcon::Normal, QIcon::On);
        icon1.addFile(QStringLiteral(":/image/32_32/play_backward.png"), QSize(), QIcon::Disabled, QIcon::Off);
        preBtn->setIcon(icon1);

        horizontalLayout_3->addWidget(preBtn);

        playOrPauseBtn = new QPushButton(AudioPlayerDesctopDialog);
        playOrPauseBtn->setObjectName(QStringLiteral("playOrPauseBtn"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/32_32/play_button.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/image/32_32/audio_play_play.png"), QSize(), QIcon::Normal, QIcon::On);
        icon2.addFile(QStringLiteral(":/image/32_32/play_button.png"), QSize(), QIcon::Disabled, QIcon::Off);
        playOrPauseBtn->setIcon(icon2);
        playOrPauseBtn->setCheckable(false);
        playOrPauseBtn->setChecked(false);

        horizontalLayout_3->addWidget(playOrPauseBtn);

        nextBtn = new QPushButton(AudioPlayerDesctopDialog);
        nextBtn->setObjectName(QStringLiteral("nextBtn"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/32_32/play_forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextBtn->setIcon(icon3);

        horizontalLayout_3->addWidget(nextBtn);

        stopBtn = new QPushButton(AudioPlayerDesctopDialog);
        stopBtn->setObjectName(QStringLiteral("stopBtn"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/image/32_32/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopBtn->setIcon(icon4);

        horizontalLayout_3->addWidget(stopBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        soundBtn = new QPushButton(AudioPlayerDesctopDialog);
        soundBtn->setObjectName(QStringLiteral("soundBtn"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/image/32_32/audio_sound_on.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QStringLiteral(":/image/32_32/audio_sound_on.png"), QSize(), QIcon::Disabled, QIcon::Off);
        icon5.addFile(QStringLiteral(":/image/32_32/audio_sound_on.png"), QSize(), QIcon::Active, QIcon::Off);
        icon5.addFile(QStringLiteral(":/image/32_32/audio_sound_on.png"), QSize(), QIcon::Selected, QIcon::Off);
        soundBtn->setIcon(icon5);
        soundBtn->setCheckable(true);
        soundBtn->setAutoExclusive(true);

        horizontalLayout_3->addWidget(soundBtn);

        soundVolumnSlider = new QSlider(AudioPlayerDesctopDialog);
        soundVolumnSlider->setObjectName(QStringLiteral("soundVolumnSlider"));
        soundVolumnSlider->setMaximum(100);
        soundVolumnSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(soundVolumnSlider);


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
#ifndef QT_NO_TOOLTIP
        playModelBtn->setToolTip(QApplication::translate("AudioPlayerDesctopDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#aa0000;\">Play Model</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        playModelBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        preBtn->setToolTip(QApplication::translate("AudioPlayerDesctopDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#aa0000;\">Back Forward</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        preBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        playOrPauseBtn->setToolTip(QApplication::translate("AudioPlayerDesctopDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#aa0000;\">Pause/Play</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        playOrPauseBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        nextBtn->setToolTip(QApplication::translate("AudioPlayerDesctopDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#aa0000;\">Forward</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        nextBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopBtn->setToolTip(QApplication::translate("AudioPlayerDesctopDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#aa0000;\">Stop</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        stopBtn->setText(QString());
        soundBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        soundVolumnSlider->setToolTip(QApplication::translate("AudioPlayerDesctopDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#aa0000;\">Volumn</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class AudioPlayerDesctopDialog: public Ui_AudioPlayerDesctopDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOPLAYERDESCTOPDIALOG_H
