/********************************************************************************
** Form generated from reading UI file 'scriptwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCRIPTWIDGET_H
#define UI_SCRIPTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScriptWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *scriptSave;
    QPushButton *ruleAddButton;
    QSpacerItem *horizontalSpacer;
    QLabel *stateLabel;
    QPushButton *buttonStartStop;
    QTabWidget *scriptTabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *sourceCode;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QToolButton *insertEvents;
    QToolButton *insertFunction;
    QToolButton *insertCommand;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *validateButton;
    QLabel *statusLabel;
    QPushButton *buttonClear;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QWidget *clearFon;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *buttonClearLog;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *limitRowsValue;
    QLabel *limitRowsLabel;
    QPlainTextEdit *consoleOutput;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QPlainTextEdit *notes;
    QWidget *saveFon;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonSave;

    void setupUi(QWidget *ScriptWidget)
    {
        if (ScriptWidget->objectName().isEmpty())
            ScriptWidget->setObjectName(QStringLiteral("ScriptWidget"));
        ScriptWidget->resize(600, 500);
        gridLayout = new QGridLayout(ScriptWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        scriptSave = new QPushButton(ScriptWidget);
        scriptSave->setObjectName(QStringLiteral("scriptSave"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        scriptSave->setIcon(icon);

        horizontalLayout_2->addWidget(scriptSave);

        ruleAddButton = new QPushButton(ScriptWidget);
        ruleAddButton->setObjectName(QStringLiteral("ruleAddButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ruleAddButton->sizePolicy().hasHeightForWidth());
        ruleAddButton->setSizePolicy(sizePolicy);
        ruleAddButton->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(ruleAddButton);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        stateLabel = new QLabel(ScriptWidget);
        stateLabel->setObjectName(QStringLiteral("stateLabel"));

        horizontalLayout_2->addWidget(stateLabel);

        buttonStartStop = new QPushButton(ScriptWidget);
        buttonStartStop->setObjectName(QStringLiteral("buttonStartStop"));

        horizontalLayout_2->addWidget(buttonStartStop);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        scriptTabWidget = new QTabWidget(ScriptWidget);
        scriptTabWidget->setObjectName(QStringLiteral("scriptTabWidget"));
        scriptTabWidget->setTabPosition(QTabWidget::North);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        sourceCode = new QPlainTextEdit(tab);
        sourceCode->setObjectName(QStringLiteral("sourceCode"));

        gridLayout_2->addWidget(sourceCode, 1, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        insertEvents = new QToolButton(tab);
        insertEvents->setObjectName(QStringLiteral("insertEvents"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(insertEvents->sizePolicy().hasHeightForWidth());
        insertEvents->setSizePolicy(sizePolicy2);
        insertEvents->setMouseTracking(true);
        insertEvents->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(insertEvents);

        insertFunction = new QToolButton(tab);
        insertFunction->setObjectName(QStringLiteral("insertFunction"));
        sizePolicy2.setHeightForWidth(insertFunction->sizePolicy().hasHeightForWidth());
        insertFunction->setSizePolicy(sizePolicy2);
        insertFunction->setMouseTracking(true);
        insertFunction->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(insertFunction);

        insertCommand = new QToolButton(tab);
        insertCommand->setObjectName(QStringLiteral("insertCommand"));
        sizePolicy2.setHeightForWidth(insertCommand->sizePolicy().hasHeightForWidth());
        insertCommand->setSizePolicy(sizePolicy2);
        insertCommand->setMouseTracking(true);
        insertCommand->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(insertCommand);

        horizontalSpacer_4 = new QSpacerItem(356, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        validateButton = new QPushButton(tab);
        validateButton->setObjectName(QStringLiteral("validateButton"));

        horizontalLayout_4->addWidget(validateButton);

        statusLabel = new QLabel(tab);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy3);
        statusLabel->setWordWrap(true);

        horizontalLayout_4->addWidget(statusLabel);

        buttonClear = new QPushButton(tab);
        buttonClear->setObjectName(QStringLiteral("buttonClear"));

        horizontalLayout_4->addWidget(buttonClear);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 0, 1, 2);

        scriptTabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        clearFon = new QWidget(tab_2);
        clearFon->setObjectName(QStringLiteral("clearFon"));
        sizePolicy2.setHeightForWidth(clearFon->sizePolicy().hasHeightForWidth());
        clearFon->setSizePolicy(sizePolicy2);
        clearFon->setMinimumSize(QSize(0, 0));
        horizontalLayout_5 = new QHBoxLayout(clearFon);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        buttonClearLog = new QPushButton(clearFon);
        buttonClearLog->setObjectName(QStringLiteral("buttonClearLog"));

        horizontalLayout_5->addWidget(buttonClearLog);


        gridLayout_3->addWidget(clearFon, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(37, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        limitRowsValue = new QSpinBox(tab_2);
        limitRowsValue->setObjectName(QStringLiteral("limitRowsValue"));
        limitRowsValue->setAlignment(Qt::AlignCenter);
        limitRowsValue->setMaximum(100000);
        limitRowsValue->setValue(20);

        gridLayout_3->addWidget(limitRowsValue, 1, 1, 1, 1);

        limitRowsLabel = new QLabel(tab_2);
        limitRowsLabel->setObjectName(QStringLiteral("limitRowsLabel"));

        gridLayout_3->addWidget(limitRowsLabel, 1, 0, 1, 1);

        consoleOutput = new QPlainTextEdit(tab_2);
        consoleOutput->setObjectName(QStringLiteral("consoleOutput"));
        consoleOutput->setReadOnly(true);
        consoleOutput->setMaximumBlockCount(10);

        gridLayout_3->addWidget(consoleOutput, 0, 0, 1, 4);

        scriptTabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        notes = new QPlainTextEdit(tab_3);
        notes->setObjectName(QStringLiteral("notes"));

        gridLayout_4->addWidget(notes, 0, 0, 1, 1);

        saveFon = new QWidget(tab_3);
        saveFon->setObjectName(QStringLiteral("saveFon"));
        sizePolicy2.setHeightForWidth(saveFon->sizePolicy().hasHeightForWidth());
        saveFon->setSizePolicy(sizePolicy2);
        horizontalLayout_3 = new QHBoxLayout(saveFon);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(0, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        buttonSave = new QPushButton(saveFon);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));

        horizontalLayout_3->addWidget(buttonSave);


        gridLayout_4->addWidget(saveFon, 1, 0, 1, 1);

        scriptTabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(scriptTabWidget, 1, 0, 1, 1);


        retranslateUi(ScriptWidget);
        QObject::connect(notes, SIGNAL(textChanged()), ScriptWidget, SLOT(noteChanged()));
        QObject::connect(buttonClearLog, SIGNAL(clicked()), consoleOutput, SLOT(clear()));

        scriptTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ScriptWidget);
    } // setupUi

    void retranslateUi(QWidget *ScriptWidget)
    {
        ScriptWidget->setWindowTitle(QApplication::translate("ScriptWidget", "Form", 0));
        scriptSave->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        ruleAddButton->setAccessibleName(QApplication::translate("ScriptWidget", "TR00027", 0));
#endif // QT_NO_ACCESSIBILITY
        ruleAddButton->setText(QApplication::translate("ScriptWidget", "Add Rule", 0));
        stateLabel->setText(QApplication::translate("ScriptWidget", "Stopped", 0));
        buttonStartStop->setText(QApplication::translate("ScriptWidget", "Start", 0));
        buttonStartStop->setShortcut(QApplication::translate("ScriptWidget", "Ctrl+F5", 0));
#ifndef QT_NO_ACCESSIBILITY
        label->setAccessibleName(QApplication::translate("ScriptWidget", "SCRIPT_INSERT", 0));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("ScriptWidget", "Insert:", 0));
#ifndef QT_NO_ACCESSIBILITY
        insertEvents->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        insertEvents->setText(QApplication::translate("ScriptWidget", "Event", 0));
#ifndef QT_NO_ACCESSIBILITY
        insertFunction->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        insertFunction->setText(QApplication::translate("ScriptWidget", "Function", 0));
#ifndef QT_NO_ACCESSIBILITY
        insertCommand->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        insertCommand->setText(QApplication::translate("ScriptWidget", "Command", 0));
#ifndef QT_NO_ACCESSIBILITY
        validateButton->setAccessibleName(QApplication::translate("ScriptWidget", "SCRIPT_VALIDATE", 0));
#endif // QT_NO_ACCESSIBILITY
        validateButton->setText(QApplication::translate("ScriptWidget", "Validate", 0));
        validateButton->setShortcut(QApplication::translate("ScriptWidget", "F6", 0));
        statusLabel->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        buttonClear->setAccessibleName(QApplication::translate("ScriptWidget", "CLEAR", 0));
#endif // QT_NO_ACCESSIBILITY
        buttonClear->setText(QApplication::translate("ScriptWidget", "Clear", 0));
        scriptTabWidget->setTabText(scriptTabWidget->indexOf(tab), QApplication::translate("ScriptWidget", "Source Code", 0));
#ifndef QT_NO_ACCESSIBILITY
        buttonClearLog->setAccessibleName(QApplication::translate("ScriptWidget", "CLEAR", 0));
#endif // QT_NO_ACCESSIBILITY
        buttonClearLog->setText(QApplication::translate("ScriptWidget", "Clear", 0));
#ifndef QT_NO_ACCESSIBILITY
        limitRowsLabel->setAccessibleName(QApplication::translate("ScriptWidget", "LIMIT_ROWS", 0));
#endif // QT_NO_ACCESSIBILITY
        limitRowsLabel->setText(QApplication::translate("ScriptWidget", "Limit rows:", 0));
        scriptTabWidget->setTabText(scriptTabWidget->indexOf(tab_2), QApplication::translate("ScriptWidget", "Console output", 0));
#ifndef QT_NO_ACCESSIBILITY
        buttonSave->setAccessibleName(QApplication::translate("ScriptWidget", "SAVE", 0));
#endif // QT_NO_ACCESSIBILITY
        buttonSave->setText(QApplication::translate("ScriptWidget", "Save", 0));
        scriptTabWidget->setTabText(scriptTabWidget->indexOf(tab_3), QApplication::translate("ScriptWidget", "Notes", 0));
    } // retranslateUi

};

namespace Ui {
    class ScriptWidget: public Ui_ScriptWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCRIPTWIDGET_H
