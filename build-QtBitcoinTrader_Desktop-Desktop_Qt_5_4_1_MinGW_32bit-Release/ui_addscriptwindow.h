/********************************************************************************
** Form generated from reading UI file 'addscriptwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSCRIPTWINDOW_H
#define UI_ADDSCRIPTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddScriptWindow
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupContentGroupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *checkUseFile;
    QPushButton *openFile;
    QLineEdit *scriptFileName;
    QRadioButton *checkEmptyScript;
    QRadioButton *checkExistingScript;
    QComboBox *existingScriptList;
    QRadioButton *checkUseTemplate;
    QComboBox *useScriptGroupTemplateList;
    QPushButton *buttonAddScript;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonCancel;
    QGroupBox *groupNameGroupbox;
    QGridLayout *gridLayout;
    QLabel *groupNameLabel;
    QLineEdit *scriptName;
    QPushButton *groupNameClear;

    void setupUi(QDialog *AddScriptWindow)
    {
        if (AddScriptWindow->objectName().isEmpty())
            AddScriptWindow->setObjectName(QStringLiteral("AddScriptWindow"));
        AddScriptWindow->resize(500, 271);
        gridLayout_3 = new QGridLayout(AddScriptWindow);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupContentGroupBox = new QGroupBox(AddScriptWindow);
        groupContentGroupBox->setObjectName(QStringLiteral("groupContentGroupBox"));
        gridLayout_2 = new QGridLayout(groupContentGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        checkUseFile = new QRadioButton(groupContentGroupBox);
        checkUseFile->setObjectName(QStringLiteral("checkUseFile"));
        checkUseFile->setEnabled(true);

        gridLayout_2->addWidget(checkUseFile, 3, 0, 1, 1);

        openFile = new QPushButton(groupContentGroupBox);
        openFile->setObjectName(QStringLiteral("openFile"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openFile->sizePolicy().hasHeightForWidth());
        openFile->setSizePolicy(sizePolicy);
        openFile->setMaximumSize(QSize(22, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        openFile->setIcon(icon);
        openFile->setIconSize(QSize(16, 16));

        gridLayout_2->addWidget(openFile, 3, 2, 1, 1);

        scriptFileName = new QLineEdit(groupContentGroupBox);
        scriptFileName->setObjectName(QStringLiteral("scriptFileName"));
        scriptFileName->setReadOnly(true);

        gridLayout_2->addWidget(scriptFileName, 3, 1, 1, 1);

        checkEmptyScript = new QRadioButton(groupContentGroupBox);
        checkEmptyScript->setObjectName(QStringLiteral("checkEmptyScript"));
        checkEmptyScript->setChecked(true);

        gridLayout_2->addWidget(checkEmptyScript, 0, 0, 1, 1);

        checkExistingScript = new QRadioButton(groupContentGroupBox);
        checkExistingScript->setObjectName(QStringLiteral("checkExistingScript"));
        checkExistingScript->setEnabled(true);

        gridLayout_2->addWidget(checkExistingScript, 1, 0, 1, 1);

        existingScriptList = new QComboBox(groupContentGroupBox);
        existingScriptList->setObjectName(QStringLiteral("existingScriptList"));
        existingScriptList->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(existingScriptList->sizePolicy().hasHeightForWidth());
        existingScriptList->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(existingScriptList, 1, 1, 1, 2);

        checkUseTemplate = new QRadioButton(groupContentGroupBox);
        checkUseTemplate->setObjectName(QStringLiteral("checkUseTemplate"));
        checkUseTemplate->setEnabled(true);

        gridLayout_2->addWidget(checkUseTemplate, 2, 0, 1, 1);

        useScriptGroupTemplateList = new QComboBox(groupContentGroupBox);
        useScriptGroupTemplateList->setObjectName(QStringLiteral("useScriptGroupTemplateList"));
        useScriptGroupTemplateList->setEnabled(true);
        sizePolicy1.setHeightForWidth(useScriptGroupTemplateList->sizePolicy().hasHeightForWidth());
        useScriptGroupTemplateList->setSizePolicy(sizePolicy1);
        useScriptGroupTemplateList->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_2->addWidget(useScriptGroupTemplateList, 2, 1, 1, 2);


        gridLayout_3->addWidget(groupContentGroupBox, 1, 0, 1, 4);

        buttonAddScript = new QPushButton(AddScriptWindow);
        buttonAddScript->setObjectName(QStringLiteral("buttonAddScript"));
        buttonAddScript->setEnabled(false);

        gridLayout_3->addWidget(buttonAddScript, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(154, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(154, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        buttonCancel = new QPushButton(AddScriptWindow);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));

        gridLayout_3->addWidget(buttonCancel, 2, 2, 1, 1);

        groupNameGroupbox = new QGroupBox(AddScriptWindow);
        groupNameGroupbox->setObjectName(QStringLiteral("groupNameGroupbox"));
        gridLayout = new QGridLayout(groupNameGroupbox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupNameLabel = new QLabel(groupNameGroupbox);
        groupNameLabel->setObjectName(QStringLiteral("groupNameLabel"));

        gridLayout->addWidget(groupNameLabel, 0, 0, 1, 1);

        scriptName = new QLineEdit(groupNameGroupbox);
        scriptName->setObjectName(QStringLiteral("scriptName"));
        sizePolicy1.setHeightForWidth(scriptName->sizePolicy().hasHeightForWidth());
        scriptName->setSizePolicy(sizePolicy1);
        scriptName->setInputMethodHints(Qt::ImhNone);

        gridLayout->addWidget(scriptName, 0, 1, 1, 1);

        groupNameClear = new QPushButton(groupNameGroupbox);
        groupNameClear->setObjectName(QStringLiteral("groupNameClear"));
        groupNameClear->setMaximumSize(QSize(22, 16777215));
        groupNameClear->setAutoDefault(false);

        gridLayout->addWidget(groupNameClear, 0, 2, 1, 1);


        gridLayout_3->addWidget(groupNameGroupbox, 0, 0, 1, 4);


        retranslateUi(AddScriptWindow);
        QObject::connect(checkEmptyScript, SIGNAL(toggled(bool)), AddScriptWindow, SLOT(onGroupContentChanged(bool)));
        QObject::connect(checkExistingScript, SIGNAL(toggled(bool)), AddScriptWindow, SLOT(onGroupContentChanged(bool)));
        QObject::connect(checkUseTemplate, SIGNAL(toggled(bool)), AddScriptWindow, SLOT(onGroupContentChanged(bool)));
        QObject::connect(checkUseFile, SIGNAL(toggled(bool)), AddScriptWindow, SLOT(onGroupContentChanged(bool)));
        QObject::connect(groupNameClear, SIGNAL(clicked()), scriptName, SLOT(clear()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), AddScriptWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddScriptWindow);
    } // setupUi

    void retranslateUi(QDialog *AddScriptWindow)
    {
        AddScriptWindow->setWindowTitle(QApplication::translate("AddScriptWindow", "Add Script", 0));
#ifndef QT_NO_ACCESSIBILITY
        groupContentGroupBox->setAccessibleName(QApplication::translate("AddScriptWindow", "RULES_SCRIPT_CONTENT", 0));
#endif // QT_NO_ACCESSIBILITY
        groupContentGroupBox->setTitle(QApplication::translate("AddScriptWindow", "Script content", 0));
#ifndef QT_NO_ACCESSIBILITY
        checkUseFile->setAccessibleName(QApplication::translate("AddScriptWindow", "USE_SCRIPT_FILE", 0));
#endif // QT_NO_ACCESSIBILITY
        checkUseFile->setText(QApplication::translate("AddScriptWindow", "Load script from file:", 0));
        openFile->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        checkEmptyScript->setAccessibleName(QApplication::translate("AddScriptWindow", "CREATE_EMPTY_SCRIPT", 0));
#endif // QT_NO_ACCESSIBILITY
        checkEmptyScript->setText(QApplication::translate("AddScriptWindow", "Create empty script", 0));
#ifndef QT_NO_ACCESSIBILITY
        checkExistingScript->setAccessibleName(QApplication::translate("AddScriptWindow", "COPY_FROM_EXISTING_SCRIPT", 0));
#endif // QT_NO_ACCESSIBILITY
        checkExistingScript->setText(QApplication::translate("AddScriptWindow", "Copy from existing script:", 0));
#ifndef QT_NO_ACCESSIBILITY
        checkUseTemplate->setAccessibleName(QApplication::translate("AddScriptWindow", "USE_SCRIPT_TEMPLATE", 0));
#endif // QT_NO_ACCESSIBILITY
        checkUseTemplate->setText(QApplication::translate("AddScriptWindow", "Use script template:", 0));
#ifndef QT_NO_ACCESSIBILITY
        buttonAddScript->setAccessibleName(QApplication::translate("AddScriptWindow", "ADD_SCRIPT", 0));
#endif // QT_NO_ACCESSIBILITY
        buttonAddScript->setText(QApplication::translate("AddScriptWindow", "Add Group", 0));
#ifndef QT_NO_ACCESSIBILITY
        buttonCancel->setAccessibleName(QApplication::translate("AddScriptWindow", "TRCANCEL", 0));
#endif // QT_NO_ACCESSIBILITY
        buttonCancel->setText(QApplication::translate("AddScriptWindow", "Cancel", 0));
#ifndef QT_NO_ACCESSIBILITY
        groupNameGroupbox->setAccessibleName(QApplication::translate("AddScriptWindow", "SCRIPT_NAME", 0));
#endif // QT_NO_ACCESSIBILITY
        groupNameGroupbox->setTitle(QApplication::translate("AddScriptWindow", "Script Name", 0));
#ifndef QT_NO_ACCESSIBILITY
        groupNameLabel->setAccessibleName(QApplication::translate("AddScriptWindow", "SHORT_NAME", 0));
#endif // QT_NO_ACCESSIBILITY
        groupNameLabel->setText(QApplication::translate("AddScriptWindow", "Short name:", 0));
        groupNameClear->setText(QApplication::translate("AddScriptWindow", "X", 0));
    } // retranslateUi

};

namespace Ui {
    class AddScriptWindow: public Ui_AddScriptWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCRIPTWINDOW_H
