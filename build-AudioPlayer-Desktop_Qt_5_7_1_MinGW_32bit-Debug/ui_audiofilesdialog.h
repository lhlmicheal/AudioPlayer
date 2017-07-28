/********************************************************************************
** Form generated from reading UI file 'audiofilesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOFILESDIALOG_H
#define UI_AUDIOFILESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AudioFilesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *fileEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *searchBtn;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addFileBtn;
    QPushButton *removeFileBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AudioFilesDialog)
    {
        if (AudioFilesDialog->objectName().isEmpty())
            AudioFilesDialog->setObjectName(QStringLiteral("AudioFilesDialog"));
        AudioFilesDialog->resize(346, 407);
        verticalLayout = new QVBoxLayout(AudioFilesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fileEdit = new QLineEdit(AudioFilesDialog);
        fileEdit->setObjectName(QStringLiteral("fileEdit"));

        horizontalLayout->addWidget(fileEdit);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        searchBtn = new QPushButton(AudioFilesDialog);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/32_32/headphone.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchBtn->setIcon(icon);

        horizontalLayout->addWidget(searchBtn);


        verticalLayout->addLayout(horizontalLayout);

        treeWidget = new QTreeWidget(AudioFilesDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addFileBtn = new QPushButton(AudioFilesDialog);
        addFileBtn->setObjectName(QStringLiteral("addFileBtn"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/32_32/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addFileBtn->setIcon(icon1);

        horizontalLayout_2->addWidget(addFileBtn);

        removeFileBtn = new QPushButton(AudioFilesDialog);
        removeFileBtn->setObjectName(QStringLiteral("removeFileBtn"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/32_32/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeFileBtn->setIcon(icon2);

        horizontalLayout_2->addWidget(removeFileBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(AudioFilesDialog);

        QMetaObject::connectSlotsByName(AudioFilesDialog);
    } // setupUi

    void retranslateUi(QDialog *AudioFilesDialog)
    {
        AudioFilesDialog->setWindowTitle(QApplication::translate("AudioFilesDialog", "Dialog", Q_NULLPTR));
        searchBtn->setText(QString());
        addFileBtn->setText(QString());
        removeFileBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AudioFilesDialog: public Ui_AudioFilesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOFILESDIALOG_H
