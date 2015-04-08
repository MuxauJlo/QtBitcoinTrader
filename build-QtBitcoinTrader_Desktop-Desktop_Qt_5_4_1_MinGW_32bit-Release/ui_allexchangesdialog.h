/********************************************************************************
** Form generated from reading UI file 'allexchangesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLEXCHANGESDIALOG_H
#define UI_ALLEXCHANGESDIALOG_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AllExchangesDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *okButton;
    QPushButton *backButton;
    QGroupBox *groupBoxAllExchange;
    QVBoxLayout *verticalLayout;
    QTableView *exchangesTableView;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *AllExchangesDialog)
    {
        if (AllExchangesDialog->objectName().isEmpty())
            AllExchangesDialog->setObjectName(QStringLiteral("AllExchangesDialog"));
        AllExchangesDialog->resize(400, 300);
        gridLayout = new QGridLayout(AllExchangesDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        okButton = new QPushButton(AllExchangesDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 1, 2, 1, 1);

        backButton = new QPushButton(AllExchangesDialog);
        backButton->setObjectName(QStringLiteral("backButton"));

        gridLayout->addWidget(backButton, 1, 0, 1, 1);

        groupBoxAllExchange = new QGroupBox(AllExchangesDialog);
        groupBoxAllExchange->setObjectName(QStringLiteral("groupBoxAllExchange"));
        verticalLayout = new QVBoxLayout(groupBoxAllExchange);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        exchangesTableView = new QTableView(groupBoxAllExchange);
        exchangesTableView->setObjectName(QStringLiteral("exchangesTableView"));
        exchangesTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        exchangesTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        exchangesTableView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        exchangesTableView->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        exchangesTableView->horizontalHeader()->setHighlightSections(false);
        exchangesTableView->verticalHeader()->setDefaultSectionSize(21);

        verticalLayout->addWidget(exchangesTableView);


        gridLayout->addWidget(groupBoxAllExchange, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        QWidget::setTabOrder(exchangesTableView, backButton);
        QWidget::setTabOrder(backButton, okButton);

        retranslateUi(AllExchangesDialog);

        QMetaObject::connectSlotsByName(AllExchangesDialog);
    } // setupUi

    void retranslateUi(QDialog *AllExchangesDialog)
    {
        AllExchangesDialog->setWindowTitle(QApplication::translate("AllExchangesDialog", "All Exchanges", 0));
#ifndef QT_NO_ACCESSIBILITY
        okButton->setAccessibleName(QApplication::translate("AllExchangesDialog", "OK", 0));
#endif // QT_NO_ACCESSIBILITY
        okButton->setText(QApplication::translate("AllExchangesDialog", "OK", 0));
#ifndef QT_NO_ACCESSIBILITY
        backButton->setAccessibleName(QApplication::translate("AllExchangesDialog", "BACK", 0));
#endif // QT_NO_ACCESSIBILITY
        backButton->setText(QApplication::translate("AllExchangesDialog", "Back", 0));
#ifndef QT_NO_ACCESSIBILITY
        groupBoxAllExchange->setAccessibleName(QApplication::translate("AllExchangesDialog", "SELECT_YOUR_EXCHANGE", 0));
#endif // QT_NO_ACCESSIBILITY
        groupBoxAllExchange->setTitle(QApplication::translate("AllExchangesDialog", "Select your exchange", 0));
    } // retranslateUi

};

namespace Ui {
    class AllExchangesDialog: public Ui_AllExchangesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLEXCHANGESDIALOG_H
