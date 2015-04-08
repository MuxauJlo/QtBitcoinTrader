/********************************************************************************
** Form generated from reading UI file 'passworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDDIALOG_H
#define UI_PASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PasswordDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *descriptionGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QGroupBox *passInformText;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelPassword;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *passwordEdit;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout;
    QComboBox *profileComboBox;
    QToolButton *buttonAddProfile;
    QToolButton *removeButton;
    QLabel *labelPassword_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *updateCheckBox;
    QPushButton *cancelButton;
    QPushButton *okButton;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *LogoGroupBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_info;

    void setupUi(QDialog *PasswordDialog)
    {
        if (PasswordDialog->objectName().isEmpty())
            PasswordDialog->setObjectName(QStringLiteral("PasswordDialog"));
        PasswordDialog->resize(500, 328);
        PasswordDialog->setMinimumSize(QSize(500, 0));
        PasswordDialog->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(PasswordDialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 9, -1, -1);
        descriptionGroupBox = new QGroupBox(PasswordDialog);
        descriptionGroupBox->setObjectName(QStringLiteral("descriptionGroupBox"));
        descriptionGroupBox->setStyleSheet(QStringLiteral("QGroupBox::indicator::checked::hover {background: black; border: 1px solid gray; border-radius: 3px; image: url(:/Resources/Close.png);} QGroupBox::indicator::checked::!hover { background: white; border: 1px solid gray; border-radius: 3px; image: url(:/Resources/Close.png);} QGroupBox:title {background: transparent;}"));
        descriptionGroupBox->setCheckable(true);
        gridLayout_3 = new QGridLayout(descriptionGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(8, -1, 8, 8);
        label = new QLabel(descriptionGroupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QStringLiteral(""));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(descriptionGroupBox, 0, 5, 1, 1);

        passInformText = new QGroupBox(PasswordDialog);
        passInformText->setObjectName(QStringLiteral("passInformText"));
        verticalLayout = new QVBoxLayout(passInformText);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelPassword = new QLabel(passInformText);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelPassword->sizePolicy().hasHeightForWidth());
        labelPassword->setSizePolicy(sizePolicy1);
        labelPassword->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPassword, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        passwordEdit = new QLineEdit(passInformText);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(passwordEdit->sizePolicy().hasHeightForWidth());
        passwordEdit->setSizePolicy(sizePolicy2);
        passwordEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordEdit);

        toolButton = new QToolButton(passInformText);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout_2->addWidget(toolButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        profileComboBox = new QComboBox(passInformText);
        profileComboBox->setObjectName(QStringLiteral("profileComboBox"));
        sizePolicy2.setHeightForWidth(profileComboBox->sizePolicy().hasHeightForWidth());
        profileComboBox->setSizePolicy(sizePolicy2);
        profileComboBox->setIconSize(QSize(50, 16));

        horizontalLayout->addWidget(profileComboBox);

        buttonAddProfile = new QToolButton(passInformText);
        buttonAddProfile->setObjectName(QStringLiteral("buttonAddProfile"));

        horizontalLayout->addWidget(buttonAddProfile);

        removeButton = new QToolButton(passInformText);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        horizontalLayout->addWidget(removeButton);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        labelPassword_2 = new QLabel(passInformText);
        labelPassword_2->setObjectName(QStringLiteral("labelPassword_2"));
        sizePolicy1.setHeightForWidth(labelPassword_2->sizePolicy().hasHeightForWidth());
        labelPassword_2->setSizePolicy(sizePolicy1);
        labelPassword_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPassword_2, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        updateCheckBox = new QCheckBox(passInformText);
        updateCheckBox->setObjectName(QStringLiteral("updateCheckBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(updateCheckBox->sizePolicy().hasHeightForWidth());
        updateCheckBox->setSizePolicy(sizePolicy3);
        updateCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(updateCheckBox);

        cancelButton = new QPushButton(passInformText);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy4);
        cancelButton->setAutoDefault(false);

        horizontalLayout_3->addWidget(cancelButton);

        okButton = new QPushButton(passInformText);
        okButton->setObjectName(QStringLiteral("okButton"));
        sizePolicy4.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy4);

        horizontalLayout_3->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_2->addWidget(passInformText, 1, 5, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        LogoGroupBox = new QGroupBox(PasswordDialog);
        LogoGroupBox->setObjectName(QStringLiteral("LogoGroupBox"));
        sizePolicy1.setHeightForWidth(LogoGroupBox->sizePolicy().hasHeightForWidth());
        LogoGroupBox->setSizePolicy(sizePolicy1);
        LogoGroupBox->setMinimumSize(QSize(183, 44));
#ifndef QT_NO_TOOLTIP
        LogoGroupBox->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
        LogoGroupBox->setStyleSheet(QStringLiteral("border:0px;margin:0"));

        horizontalLayout_4->addWidget(LogoGroupBox);

        horizontalSpacer = new QSpacerItem(13, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_info = new QLabel(PasswordDialog);
        label_info->setObjectName(QStringLiteral("label_info"));
        label_info->setMargin(0);

        horizontalLayout_4->addWidget(label_info);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 5, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(passwordEdit);
        labelPassword->setBuddy(passwordEdit);
        labelPassword_2->setBuddy(profileComboBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(passwordEdit, profileComboBox);
        QWidget::setTabOrder(profileComboBox, buttonAddProfile);
        QWidget::setTabOrder(buttonAddProfile, removeButton);
        QWidget::setTabOrder(removeButton, toolButton);

        retranslateUi(PasswordDialog);
        QObject::connect(toolButton, SIGNAL(clicked()), passwordEdit, SLOT(clear()));
        QObject::connect(passwordEdit, SIGNAL(returnPressed()), okButton, SLOT(click()));
        QObject::connect(cancelButton, SIGNAL(clicked()), PasswordDialog, SLOT(reject()));
        QObject::connect(removeButton, SIGNAL(clicked()), PasswordDialog, SLOT(resetDataSlot()));
        QObject::connect(buttonAddProfile, SIGNAL(clicked()), PasswordDialog, SLOT(addNewProfile()));
        QObject::connect(okButton, SIGNAL(clicked()), PasswordDialog, SLOT(accept()));
        QObject::connect(passwordEdit, SIGNAL(textChanged(QString)), PasswordDialog, SLOT(checkToEnableButton(QString)));

        QMetaObject::connectSlotsByName(PasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *PasswordDialog)
    {
        PasswordDialog->setWindowTitle(QApplication::translate("PasswordDialog", "Qt Bitcoin Trader", 0));
        descriptionGroupBox->setTitle(QString());
#ifndef QT_NO_ACCESSIBILITY
        label->setAccessibleName(QApplication::translate("PasswordDialog", "TR00112", 0));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("PasswordDialog", "Your API Key and Secret are crypted by AES256.\n"
"Please enter password to decrypt data.\n"
"Or reset data and re-enter API keys.", 0));
#ifndef QT_NO_ACCESSIBILITY
        passInformText->setAccessibleName(QApplication::translate("PasswordDialog", "TR00106", 0));
#endif // QT_NO_ACCESSIBILITY
        passInformText->setTitle(QApplication::translate("PasswordDialog", "Data Password Protection", 0));
#ifndef QT_NO_ACCESSIBILITY
        labelPassword->setAccessibleName(QApplication::translate("PasswordDialog", "TR00109", 0));
#endif // QT_NO_ACCESSIBILITY
        labelPassword->setText(QApplication::translate("PasswordDialog", "Password:", 0));
        toolButton->setText(QApplication::translate("PasswordDialog", "X", 0));
        buttonAddProfile->setText(QApplication::translate("PasswordDialog", "+", 0));
        removeButton->setText(QApplication::translate("PasswordDialog", "X", 0));
#ifndef QT_NO_ACCESSIBILITY
        labelPassword_2->setAccessibleName(QApplication::translate("PasswordDialog", "TR00108", 0));
#endif // QT_NO_ACCESSIBILITY
        labelPassword_2->setText(QApplication::translate("PasswordDialog", "Profile:", 0));
#ifndef QT_NO_ACCESSIBILITY
        updateCheckBox->setAccessibleName(QApplication::translate("PasswordDialog", "CHECK_FOR_UPDATE", 0));
#endif // QT_NO_ACCESSIBILITY
        updateCheckBox->setText(QApplication::translate("PasswordDialog", "Check for updates", 0));
#ifndef QT_NO_ACCESSIBILITY
        cancelButton->setAccessibleName(QApplication::translate("PasswordDialog", "EXIT", 0));
#endif // QT_NO_ACCESSIBILITY
        cancelButton->setText(QApplication::translate("PasswordDialog", "Exit", 0));
#ifndef QT_NO_ACCESSIBILITY
        okButton->setAccessibleName(QApplication::translate("PasswordDialog", "OK", 0));
#endif // QT_NO_ACCESSIBILITY
        okButton->setText(QApplication::translate("PasswordDialog", "OK", 0));
#ifndef QT_NO_ACCESSIBILITY
        LogoGroupBox->setAccessibleName(QApplication::translate("PasswordDialog", "LOGOBUTTON", 0));
#endif // QT_NO_ACCESSIBILITY
        LogoGroupBox->setTitle(QString());
        label_info->setText(QApplication::translate("PasswordDialog", "Centrabit AG, Zug\n"
"reg. CHE-114.254.375\n"
"Version: 1.07.98", 0));
    } // retranslateUi

};

namespace Ui {
    class PasswordDialog: public Ui_PasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDDIALOG_H
