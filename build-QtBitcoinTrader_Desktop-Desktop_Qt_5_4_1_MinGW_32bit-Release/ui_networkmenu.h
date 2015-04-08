/********************************************************************************
** Form generated from reading UI file 'networkmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKMENU_H
#define UI_NETWORKMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkMenu
{
public:
    QGridLayout *gridLayout;
    QLabel *label_32;
    QSpinBox *trafficTotal;
    QPushButton *trafficTotalToZero;

    void setupUi(QWidget *NetworkMenu)
    {
        if (NetworkMenu->objectName().isEmpty())
            NetworkMenu->setObjectName(QStringLiteral("NetworkMenu"));
        NetworkMenu->resize(210, 48);
        NetworkMenu->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(NetworkMenu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_32 = new QLabel(NetworkMenu);
        label_32->setObjectName(QStringLiteral("label_32"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy);
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_32, 0, 0, 1, 1);

        trafficTotal = new QSpinBox(NetworkMenu);
        trafficTotal->setObjectName(QStringLiteral("trafficTotal"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(trafficTotal->sizePolicy().hasHeightForWidth());
        trafficTotal->setSizePolicy(sizePolicy1);
        trafficTotal->setMinimumSize(QSize(60, 0));
        trafficTotal->setStyleSheet(QStringLiteral(""));
        trafficTotal->setAlignment(Qt::AlignCenter);
        trafficTotal->setReadOnly(true);
        trafficTotal->setButtonSymbols(QAbstractSpinBox::NoButtons);
        trafficTotal->setKeyboardTracking(false);
        trafficTotal->setMaximum(99);

        gridLayout->addWidget(trafficTotal, 0, 1, 1, 1);

        trafficTotalToZero = new QPushButton(NetworkMenu);
        trafficTotalToZero->setObjectName(QStringLiteral("trafficTotalToZero"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(trafficTotalToZero->sizePolicy().hasHeightForWidth());
        trafficTotalToZero->setSizePolicy(sizePolicy2);
        trafficTotalToZero->setMaximumSize(QSize(22, 16777215));

        gridLayout->addWidget(trafficTotalToZero, 0, 2, 1, 1);


        retranslateUi(NetworkMenu);

        QMetaObject::connectSlotsByName(NetworkMenu);
    } // setupUi

    void retranslateUi(QWidget *NetworkMenu)
    {
        NetworkMenu->setWindowTitle(QApplication::translate("NetworkMenu", "Form", 0));
#ifndef QT_NO_ACCESSIBILITY
        label_32->setAccessibleName(QApplication::translate("NetworkMenu", "NETWORK_TOTAL", 0));
#endif // QT_NO_ACCESSIBILITY
        label_32->setText(QApplication::translate("NetworkMenu", "Total:", 0));
#ifndef QT_NO_ACCESSIBILITY
        trafficTotal->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        trafficTotal->setSuffix(QApplication::translate("NetworkMenu", " Kb", 0));
        trafficTotalToZero->setText(QApplication::translate("NetworkMenu", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class NetworkMenu: public Ui_NetworkMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKMENU_H
