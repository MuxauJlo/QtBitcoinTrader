/********************************************************************************
** Form generated from reading UI file 'exchangebutton.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCHANGEBUTTON_H
#define UI_EXCHANGEBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExchangeButton
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetButton;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *urlLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *currenciesLabel;
    QLabel *imageLabel;

    void setupUi(QWidget *ExchangeButton)
    {
        if (ExchangeButton->objectName().isEmpty())
            ExchangeButton->setObjectName(QStringLiteral("ExchangeButton"));
        ExchangeButton->resize(400, 296);
        ExchangeButton->setMouseTracking(false);
        ExchangeButton->setStyleSheet(QLatin1String("#widgetButton{border:1px solid gray;border-radius:3px}\n"
"#widgetButton:hover{background:rgba(255,255,255,50%)}"));
        verticalLayout = new QVBoxLayout(ExchangeButton);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widgetButton = new QWidget(ExchangeButton);
        widgetButton->setObjectName(QStringLiteral("widgetButton"));
        widgetButton->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(widgetButton);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(14, 14, 14, 14);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(154, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        urlLabel = new QLabel(widgetButton);
        urlLabel->setObjectName(QStringLiteral("urlLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(urlLabel->sizePolicy().hasHeightForWidth());
        urlLabel->setSizePolicy(sizePolicy);
        urlLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(urlLabel, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(154, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        currenciesLabel = new QLabel(widgetButton);
        currenciesLabel->setObjectName(QStringLiteral("currenciesLabel"));
        sizePolicy.setHeightForWidth(currenciesLabel->sizePolicy().hasHeightForWidth());
        currenciesLabel->setSizePolicy(sizePolicy);
        currenciesLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(currenciesLabel, 1, 0, 1, 3);

        imageLabel = new QLabel(widgetButton);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setStyleSheet(QStringLiteral(""));
        imageLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(imageLabel, 0, 0, 1, 3);


        verticalLayout->addWidget(widgetButton);


        retranslateUi(ExchangeButton);

        QMetaObject::connectSlotsByName(ExchangeButton);
    } // setupUi

    void retranslateUi(QWidget *ExchangeButton)
    {
        ExchangeButton->setWindowTitle(QApplication::translate("ExchangeButton", "ExchangeButton", 0));
        urlLabel->setText(QApplication::translate("ExchangeButton", "URL", 0));
        currenciesLabel->setText(QApplication::translate("ExchangeButton", "Currencies", 0));
        imageLabel->setText(QApplication::translate("ExchangeButton", "Logo", 0));
    } // retranslateUi

};

namespace Ui {
    class ExchangeButton: public Ui_ExchangeButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCHANGEBUTTON_H
