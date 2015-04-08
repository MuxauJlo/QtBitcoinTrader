/********************************************************************************
** Form generated from reading UI file 'datafolderchusedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAFOLDERCHUSEDIALOG_H
#define UI_DATAFOLDERCHUSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DataFolderChuseDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *buttonUseSystemFolder;
    QPushButton *buttonUsePortableMode;

    void setupUi(QDialog *DataFolderChuseDialog)
    {
        if (DataFolderChuseDialog->objectName().isEmpty())
            DataFolderChuseDialog->setObjectName(QStringLiteral("DataFolderChuseDialog"));
        DataFolderChuseDialog->resize(480, 280);
        DataFolderChuseDialog->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(DataFolderChuseDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonUseSystemFolder = new QPushButton(DataFolderChuseDialog);
        buttonUseSystemFolder->setObjectName(QStringLiteral("buttonUseSystemFolder"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonUseSystemFolder->sizePolicy().hasHeightForWidth());
        buttonUseSystemFolder->setSizePolicy(sizePolicy);
        buttonUseSystemFolder->setDefault(true);

        gridLayout->addWidget(buttonUseSystemFolder, 0, 0, 1, 1);

        buttonUsePortableMode = new QPushButton(DataFolderChuseDialog);
        buttonUsePortableMode->setObjectName(QStringLiteral("buttonUsePortableMode"));
        sizePolicy.setHeightForWidth(buttonUsePortableMode->sizePolicy().hasHeightForWidth());
        buttonUsePortableMode->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonUsePortableMode, 1, 0, 1, 1);


        retranslateUi(DataFolderChuseDialog);
        QObject::connect(buttonUseSystemFolder, SIGNAL(clicked()), DataFolderChuseDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(DataFolderChuseDialog);
    } // setupUi

    void retranslateUi(QDialog *DataFolderChuseDialog)
    {
        DataFolderChuseDialog->setWindowTitle(QApplication::translate("DataFolderChuseDialog", "Qt Bitcoin Trader", 0));
        buttonUseSystemFolder->setText(QApplication::translate("DataFolderChuseDialog", "Use system folder", 0));
        buttonUsePortableMode->setText(QApplication::translate("DataFolderChuseDialog", "Portable mode", 0));
    } // retranslateUi

};

namespace Ui {
    class DataFolderChuseDialog: public Ui_DataFolderChuseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAFOLDERCHUSEDIALOG_H
