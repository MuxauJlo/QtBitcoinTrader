/********************************************************************************
** Form generated from reading UI file 'newpassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPASSWORDDIALOG_H
#define UI_NEWPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_NewPasswordDialog
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBoxApiKeyAndSecret;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *restSignLine;
    QLabel *label_4;
    QToolButton *clearRestKey;
    QLabel *label_3;
    QLineEdit *restKeyLine;
    QToolButton *clearRestSign;
    QLabel *labelClientID;
    QToolButton *clearClientIdLine;
    QLabel *exchangeLabel;
    QLineEdit *clientIdLine;
    QLabel *exchangeLogoLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *confirmLabel;
    QLineEdit *confirmEdit;
    QLabel *label;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout;
    QLabel *bar1;
    QLabel *bar2;
    QLabel *bar3;
    QToolButton *toolButton_3;
    QLabel *labelPassword;
    QLineEdit *passwordEdit;
    QLineEdit *profileNameEdit;
    QToolButton *toolButton_2;
    QLabel *labelPassword_2;
    QLabel *label_difficulty;
    QGridLayout *gridLayout_3;
    QPushButton *buttonExit;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *getApiKeySecretButton;

    void setupUi(QDialog *NewPasswordDialog)
    {
        if (NewPasswordDialog->objectName().isEmpty())
            NewPasswordDialog->setObjectName(QStringLiteral("NewPasswordDialog"));
        NewPasswordDialog->resize(750, 308);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewPasswordDialog->sizePolicy().hasHeightForWidth());
        NewPasswordDialog->setSizePolicy(sizePolicy);
        NewPasswordDialog->setMinimumSize(QSize(670, 200));
        gridLayout_4 = new QGridLayout(NewPasswordDialog);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBoxApiKeyAndSecret = new QGroupBox(NewPasswordDialog);
        groupBoxApiKeyAndSecret->setObjectName(QStringLiteral("groupBoxApiKeyAndSecret"));
        groupBoxApiKeyAndSecret->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxApiKeyAndSecret->sizePolicy().hasHeightForWidth());
        groupBoxApiKeyAndSecret->setSizePolicy(sizePolicy1);
        groupBoxApiKeyAndSecret->setMinimumSize(QSize(320, 0));
        gridLayout_2 = new QGridLayout(groupBoxApiKeyAndSecret);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(groupBoxApiKeyAndSecret);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        restSignLine = new QLineEdit(groupBoxApiKeyAndSecret);
        restSignLine->setObjectName(QStringLiteral("restSignLine"));
        restSignLine->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(restSignLine, 3, 1, 1, 1);

        label_4 = new QLabel(groupBoxApiKeyAndSecret);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setMinimumSize(QSize(0, 50));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 2);

        clearRestKey = new QToolButton(groupBoxApiKeyAndSecret);
        clearRestKey->setObjectName(QStringLiteral("clearRestKey"));

        gridLayout_2->addWidget(clearRestKey, 2, 2, 1, 1);

        label_3 = new QLabel(groupBoxApiKeyAndSecret);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        restKeyLine = new QLineEdit(groupBoxApiKeyAndSecret);
        restKeyLine->setObjectName(QStringLiteral("restKeyLine"));
        restKeyLine->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(restKeyLine, 2, 1, 1, 1);

        clearRestSign = new QToolButton(groupBoxApiKeyAndSecret);
        clearRestSign->setObjectName(QStringLiteral("clearRestSign"));

        gridLayout_2->addWidget(clearRestSign, 3, 2, 1, 1);

        labelClientID = new QLabel(groupBoxApiKeyAndSecret);
        labelClientID->setObjectName(QStringLiteral("labelClientID"));
        sizePolicy2.setHeightForWidth(labelClientID->sizePolicy().hasHeightForWidth());
        labelClientID->setSizePolicy(sizePolicy2);
        labelClientID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelClientID, 1, 0, 1, 1);

        clearClientIdLine = new QToolButton(groupBoxApiKeyAndSecret);
        clearClientIdLine->setObjectName(QStringLiteral("clearClientIdLine"));

        gridLayout_2->addWidget(clearClientIdLine, 1, 2, 1, 1);

        exchangeLabel = new QLabel(groupBoxApiKeyAndSecret);
        exchangeLabel->setObjectName(QStringLiteral("exchangeLabel"));
        sizePolicy2.setHeightForWidth(exchangeLabel->sizePolicy().hasHeightForWidth());
        exchangeLabel->setSizePolicy(sizePolicy2);
        exchangeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(exchangeLabel, 4, 0, 1, 1);

        clientIdLine = new QLineEdit(groupBoxApiKeyAndSecret);
        clientIdLine->setObjectName(QStringLiteral("clientIdLine"));
        clientIdLine->setMaxLength(20);
        clientIdLine->setEchoMode(QLineEdit::Normal);

        gridLayout_2->addWidget(clientIdLine, 1, 1, 1, 1);

        exchangeLogoLabel = new QLabel(groupBoxApiKeyAndSecret);
        exchangeLogoLabel->setObjectName(QStringLiteral("exchangeLogoLabel"));

        gridLayout_2->addWidget(exchangeLogoLabel, 4, 1, 1, 1);


        gridLayout_4->addWidget(groupBoxApiKeyAndSecret, 0, 0, 1, 1);

        groupBox = new QGroupBox(NewPasswordDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(320, 0));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(4);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(8, 6, 8, 6);
        confirmLabel = new QLabel(groupBox);
        confirmLabel->setObjectName(QStringLiteral("confirmLabel"));
        confirmLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(confirmLabel, 6, 0, 1, 1);

        confirmEdit = new QLineEdit(groupBox);
        confirmEdit->setObjectName(QStringLiteral("confirmEdit"));
        confirmEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(confirmEdit, 6, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setMinimumSize(QSize(0, 50));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 2, 0, 1, 3);

        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        gridLayout->addWidget(toolButton, 3, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        bar1 = new QLabel(groupBox);
        bar1->setObjectName(QStringLiteral("bar1"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(bar1->sizePolicy().hasHeightForWidth());
        bar1->setSizePolicy(sizePolicy5);
        bar1->setMaximumSize(QSize(16777215, 10));

        horizontalLayout->addWidget(bar1);

        bar2 = new QLabel(groupBox);
        bar2->setObjectName(QStringLiteral("bar2"));
        sizePolicy5.setHeightForWidth(bar2->sizePolicy().hasHeightForWidth());
        bar2->setSizePolicy(sizePolicy5);
        bar2->setMaximumSize(QSize(16777215, 10));

        horizontalLayout->addWidget(bar2);

        bar3 = new QLabel(groupBox);
        bar3->setObjectName(QStringLiteral("bar3"));
        sizePolicy5.setHeightForWidth(bar3->sizePolicy().hasHeightForWidth());
        bar3->setSizePolicy(sizePolicy5);
        bar3->setMaximumSize(QSize(16777215, 10));

        horizontalLayout->addWidget(bar3);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

        toolButton_3 = new QToolButton(groupBox);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));

        gridLayout->addWidget(toolButton_3, 7, 2, 1, 1);

        labelPassword = new QLabel(groupBox);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));
        labelPassword->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPassword, 3, 0, 1, 1);

        passwordEdit = new QLineEdit(groupBox);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordEdit, 3, 1, 1, 1);

        profileNameEdit = new QLineEdit(groupBox);
        profileNameEdit->setObjectName(QStringLiteral("profileNameEdit"));
        profileNameEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(profileNameEdit, 7, 1, 1, 1);

        toolButton_2 = new QToolButton(groupBox);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        gridLayout->addWidget(toolButton_2, 6, 2, 1, 1);

        labelPassword_2 = new QLabel(groupBox);
        labelPassword_2->setObjectName(QStringLiteral("labelPassword_2"));
        labelPassword_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPassword_2, 7, 0, 1, 1);

        label_difficulty = new QLabel(groupBox);
        label_difficulty->setObjectName(QStringLiteral("label_difficulty"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_difficulty->sizePolicy().hasHeightForWidth());
        label_difficulty->setSizePolicy(sizePolicy6);
        label_difficulty->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_difficulty, 5, 0, 1, 3);


        gridLayout_4->addWidget(groupBox, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(0);
        buttonExit = new QPushButton(NewPasswordDialog);
        buttonExit->setObjectName(QStringLiteral("buttonExit"));
        sizePolicy5.setHeightForWidth(buttonExit->sizePolicy().hasHeightForWidth());
        buttonExit->setSizePolicy(sizePolicy5);

        gridLayout_3->addWidget(buttonExit, 0, 2, 1, 1);

        okButton = new QPushButton(NewPasswordDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        sizePolicy5.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy5);

        gridLayout_3->addWidget(okButton, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);

        getApiKeySecretButton = new QPushButton(NewPasswordDialog);
        getApiKeySecretButton->setObjectName(QStringLiteral("getApiKeySecretButton"));

        gridLayout_3->addWidget(getApiKeySecretButton, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 2, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(restKeyLine);
        label_4->setBuddy(restKeyLine);
        label_3->setBuddy(restSignLine);
        labelClientID->setBuddy(restKeyLine);
        exchangeLabel->setBuddy(restSignLine);
        confirmLabel->setBuddy(confirmEdit);
        label->setBuddy(passwordEdit);
        labelPassword->setBuddy(passwordEdit);
        labelPassword_2->setBuddy(profileNameEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(clientIdLine, restKeyLine);
        QWidget::setTabOrder(restKeyLine, restSignLine);
        QWidget::setTabOrder(restSignLine, passwordEdit);
        QWidget::setTabOrder(passwordEdit, confirmEdit);
        QWidget::setTabOrder(confirmEdit, profileNameEdit);
        QWidget::setTabOrder(profileNameEdit, okButton);
        QWidget::setTabOrder(okButton, buttonExit);
        QWidget::setTabOrder(buttonExit, getApiKeySecretButton);
        QWidget::setTabOrder(getApiKeySecretButton, clearClientIdLine);
        QWidget::setTabOrder(clearClientIdLine, clearRestKey);
        QWidget::setTabOrder(clearRestKey, clearRestSign);
        QWidget::setTabOrder(clearRestSign, toolButton);
        QWidget::setTabOrder(toolButton, toolButton_2);
        QWidget::setTabOrder(toolButton_2, toolButton_3);

        retranslateUi(NewPasswordDialog);
        QObject::connect(buttonExit, SIGNAL(clicked()), NewPasswordDialog, SLOT(reject()));
        QObject::connect(toolButton, SIGNAL(clicked()), passwordEdit, SLOT(clear()));
        QObject::connect(toolButton_2, SIGNAL(clicked()), confirmEdit, SLOT(clear()));
        QObject::connect(passwordEdit, SIGNAL(returnPressed()), confirmEdit, SLOT(setFocus()));
        QObject::connect(passwordEdit, SIGNAL(textChanged(QString)), NewPasswordDialog, SLOT(checkToEnableButton()));
        QObject::connect(confirmEdit, SIGNAL(textChanged(QString)), NewPasswordDialog, SLOT(checkToEnableButton()));
        QObject::connect(clearRestKey, SIGNAL(clicked()), restKeyLine, SLOT(clear()));
        QObject::connect(clearRestSign, SIGNAL(clicked()), restSignLine, SLOT(clear()));
        QObject::connect(restKeyLine, SIGNAL(textChanged(QString)), NewPasswordDialog, SLOT(checkToEnableButton()));
        QObject::connect(restSignLine, SIGNAL(textChanged(QString)), NewPasswordDialog, SLOT(checkToEnableButton()));
        QObject::connect(confirmEdit, SIGNAL(returnPressed()), profileNameEdit, SLOT(setFocus()));
        QObject::connect(restKeyLine, SIGNAL(returnPressed()), restSignLine, SLOT(setFocus()));
        QObject::connect(restSignLine, SIGNAL(returnPressed()), okButton, SLOT(setFocus()));
        QObject::connect(getApiKeySecretButton, SIGNAL(clicked()), NewPasswordDialog, SLOT(getApiKeySecretButton()));
        QObject::connect(toolButton_3, SIGNAL(clicked()), profileNameEdit, SLOT(clear()));
        QObject::connect(profileNameEdit, SIGNAL(returnPressed()), restKeyLine, SLOT(setFocus()));
        QObject::connect(profileNameEdit, SIGNAL(textChanged(QString)), NewPasswordDialog, SLOT(checkToEnableButton()));
        QObject::connect(okButton, SIGNAL(clicked()), NewPasswordDialog, SLOT(okPressed()));
        QObject::connect(clearClientIdLine, SIGNAL(clicked()), clientIdLine, SLOT(clear()));

        QMetaObject::connectSlotsByName(NewPasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *NewPasswordDialog)
    {
        NewPasswordDialog->setWindowTitle(QApplication::translate("NewPasswordDialog", "Qt Bitcoin Trader", 0));
#ifndef QT_NO_ACCESSIBILITY
        groupBoxApiKeyAndSecret->setAccessibleName(QApplication::translate("NewPasswordDialog", "TR00097", 0));
#endif // QT_NO_ACCESSIBILITY
        groupBoxApiKeyAndSecret->setTitle(QApplication::translate("NewPasswordDialog", "API Key and Secret", 0));
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleName(QApplication::translate("NewPasswordDialog", "TR00101", 0));
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("NewPasswordDialog", "API Key:", 0));
#ifndef QT_NO_ACCESSIBILITY
        label_4->setAccessibleName(QApplication::translate("NewPasswordDialog", "TR00111", 0));
#endif // QT_NO_ACCESSIBILITY
        label_4->setText(QApplication::translate("NewPasswordDialog", "Your API Key and Secret will be encrypted by AES256.", 0));
        clearRestKey->setText(QApplication::translate("NewPasswordDialog", "X", 0));
#ifndef QT_NO_ACCESSIBILITY
        label_3->setAccessibleName(QApplication::translate("NewPasswordDialog", "TR00102", 0));
#endif // QT_NO_ACCESSIBILITY
        label_3->setText(QApplication::translate("NewPasswordDialog", "Secret:", 0));
        clearRestSign->setText(QApplication::translate("NewPasswordDialog", "X", 0));
#ifndef QT_NO_ACCESSIBILITY
        labelClientID->setAccessibleName(QApplication::translate("NewPasswordDialog", "CLIENT_ID", 0));
#endif // QT_NO_ACCESSIBILITY
        labelClientID->setText(QApplication::translate("NewPasswordDialog", "Client ID:", 0));
        clearClientIdLine->setText(QApplication::translate("NewPasswordDialog", "X", 0));
#ifndef QT_NO_ACCESSIBILITY
        exchangeLabel->setAccessibleName(QApplication::translate("NewPasswordDialog", "EXCHANGE", 0));
#endif // QT_NO_ACCESSIBILITY
        exchangeLabel->setText(QApplication::translate("NewPasswordDialog", "Exchange:", 0));
        exchangeLogoLabel->setText(QApplication::translate("NewPasswordDialog", "Logo", 0));
#ifndef QT_NO_ACCESSIBILITY
        groupBox->setAccessibleName(QApplication::translate("NewPasswordDialog", "TR00098", 0));
#endif // QT_NO_ACCESSIBILITY
        groupBox->setTitle(QApplication::translate("NewPasswordDialog", "Create new Password", 0));
#ifndef QT_NO_ACCESSIBILITY
        confirmLabel->setAccessibleName(QApplication::translate("NewPasswordDialog", "TR00104", 0));
#endif // QT_NO_ACCESSIBILITY
        confirmLabel->setText(QApplication::translate("NewPasswordDialog", "Confirm:", 0));
#ifndef QT_NO_ACCESSIBILITY
        label->setAccessibleName(QApplication::translate("NewPasswordDialog", "TR00100", 0));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("NewPasswordDialog", "Your password must be at least 8 characters and contain letters, digits, and special characters.", 0));
        toolButton->setText(QApplication::translate("NewPasswordDialog", "X", 0));
        bar1->setText(QString());
        bar2->setText(QString());
        bar3->setText(QString());
        toolButton_3->setText(QApplication::translate("NewPasswordDialog", "X", 0));
#ifndef QT_NO_ACCESSIBILITY
        labelPassword->setAccessibleName(QApplication::translate("NewPasswordDialog", "TR00103", 0));
#endif // QT_NO_ACCESSIBILITY
        labelPassword->setText(QApplication::translate("NewPasswordDialog", "Password:", 0));
        profileNameEdit->setText(QString());
        toolButton_2->setText(QApplication::translate("NewPasswordDialog", "X", 0));
#ifndef QT_NO_ACCESSIBILITY
        labelPassword_2->setAccessibleName(QApplication::translate("NewPasswordDialog", "TR00105", 0));
#endif // QT_NO_ACCESSIBILITY
        labelPassword_2->setText(QApplication::translate("NewPasswordDialog", "Profile name:", 0));
        label_difficulty->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        buttonExit->setAccessibleName(QApplication::translate("NewPasswordDialog", "TRCLOSE", 0));
#endif // QT_NO_ACCESSIBILITY
        buttonExit->setText(QApplication::translate("NewPasswordDialog", "Close", 0));
#ifndef QT_NO_ACCESSIBILITY
        okButton->setAccessibleName(QApplication::translate("NewPasswordDialog", "OK", 0));
#endif // QT_NO_ACCESSIBILITY
        okButton->setText(QApplication::translate("NewPasswordDialog", "OK", 0));
#ifndef QT_NO_ACCESSIBILITY
        getApiKeySecretButton->setAccessibleName(QApplication::translate("NewPasswordDialog", "TR00107", 0));
#endif // QT_NO_ACCESSIBILITY
        getApiKeySecretButton->setText(QApplication::translate("NewPasswordDialog", "Get new API Key and Secret", 0));
    } // retranslateUi

};

namespace Ui {
    class NewPasswordDialog: public Ui_NewPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPASSWORDDIALOG_H
