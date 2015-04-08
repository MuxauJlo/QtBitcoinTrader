/********************************************************************************
** Form generated from reading UI file 'logobutton.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGOBUTTON_H
#define UI_LOGOBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogoButton
{
public:
    QLabel *logo;

    void setupUi(QWidget *LogoButton)
    {
        if (LogoButton->objectName().isEmpty())
            LogoButton->setObjectName(QStringLiteral("LogoButton"));
        LogoButton->resize(540, 479);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogoButton->sizePolicy().hasHeightForWidth());
        LogoButton->setSizePolicy(sizePolicy);
        LogoButton->setStyleSheet(QStringLiteral(""));
        logo = new QLabel(LogoButton);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(70, 70, 381, 291));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy1);
        logo->setMinimumSize(QSize(40, 40));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/Resources/CentrabitDay.png")));
        logo->setScaledContents(true);
        logo->setAlignment(Qt::AlignCenter);

        retranslateUi(LogoButton);

        QMetaObject::connectSlotsByName(LogoButton);
    } // setupUi

    void retranslateUi(QWidget *LogoButton)
    {
        LogoButton->setWindowTitle(QApplication::translate("LogoButton", "LogoButton", 0));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LogoButton: public Ui_LogoButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOBUTTON_H
