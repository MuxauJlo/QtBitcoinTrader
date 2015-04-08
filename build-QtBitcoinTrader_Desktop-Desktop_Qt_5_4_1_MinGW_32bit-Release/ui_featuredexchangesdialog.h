/********************************************************************************
** Form generated from reading UI file 'featuredexchangesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEATUREDEXCHANGESDIALOG_H
#define UI_FEATUREDEXCHANGESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_FeaturedExchangesDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *otherExchangesButton;
    QGroupBox *groupBoxExchange;
    QGridLayout *gridLayoutExchange;

    void setupUi(QDialog *FeaturedExchangesDialog)
    {
        if (FeaturedExchangesDialog->objectName().isEmpty())
            FeaturedExchangesDialog->setObjectName(QStringLiteral("FeaturedExchangesDialog"));
        FeaturedExchangesDialog->resize(400, 130);
        FeaturedExchangesDialog->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(FeaturedExchangesDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        okButton = new QPushButton(FeaturedExchangesDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        otherExchangesButton = new QPushButton(FeaturedExchangesDialog);
        otherExchangesButton->setObjectName(QStringLiteral("otherExchangesButton"));

        gridLayout->addWidget(otherExchangesButton, 1, 0, 1, 1);

        groupBoxExchange = new QGroupBox(FeaturedExchangesDialog);
        groupBoxExchange->setObjectName(QStringLiteral("groupBoxExchange"));
        groupBoxExchange->setMinimumSize(QSize(0, 0));
        groupBoxExchange->setStyleSheet(QStringLiteral(""));
        gridLayoutExchange = new QGridLayout(groupBoxExchange);
        gridLayoutExchange->setSpacing(10);
        gridLayoutExchange->setContentsMargins(15, 15, 15, 15);
        gridLayoutExchange->setObjectName(QStringLiteral("gridLayoutExchange"));

        gridLayout->addWidget(groupBoxExchange, 0, 0, 1, 4);

        QWidget::setTabOrder(otherExchangesButton, okButton);

        retranslateUi(FeaturedExchangesDialog);

        QMetaObject::connectSlotsByName(FeaturedExchangesDialog);
    } // setupUi

    void retranslateUi(QDialog *FeaturedExchangesDialog)
    {
        FeaturedExchangesDialog->setWindowTitle(QApplication::translate("FeaturedExchangesDialog", "Featured Exchanges", 0));
#ifndef QT_NO_ACCESSIBILITY
        okButton->setAccessibleName(QApplication::translate("FeaturedExchangesDialog", "OK", 0));
#endif // QT_NO_ACCESSIBILITY
        okButton->setText(QApplication::translate("FeaturedExchangesDialog", "OK", 0));
#ifndef QT_NO_ACCESSIBILITY
        otherExchangesButton->setAccessibleName(QApplication::translate("FeaturedExchangesDialog", "OTHER_EXCHANGES", 0));
#endif // QT_NO_ACCESSIBILITY
        otherExchangesButton->setText(QApplication::translate("FeaturedExchangesDialog", "Other Exchanges", 0));
#ifndef QT_NO_ACCESSIBILITY
        groupBoxExchange->setAccessibleName(QApplication::translate("FeaturedExchangesDialog", "SELECT_YOUR_EXCHANGE", 0));
#endif // QT_NO_ACCESSIBILITY
        groupBoxExchange->setTitle(QApplication::translate("FeaturedExchangesDialog", "Select your exchange", 0));
    } // retranslateUi

};

namespace Ui {
    class FeaturedExchangesDialog: public Ui_FeaturedExchangesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATUREDEXCHANGESDIALOG_H
