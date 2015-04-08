/********************************************************************************
** Form generated from reading UI file 'debugviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGVIEWER_H
#define UI_DEBUGVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebugViewer
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioLog;
    QPushButton *buttonClearLog;
    QRadioButton *radioDebug;
    QCheckBox *checkEnabled;
    QPlainTextEdit *debugText;
    QPushButton *buttonSaveAs;

    void setupUi(QWidget *DebugViewer)
    {
        if (DebugViewer->objectName().isEmpty())
            DebugViewer->setObjectName(QStringLiteral("DebugViewer"));
        DebugViewer->resize(609, 412);
        gridLayout = new QGridLayout(DebugViewer);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(401, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);

        radioLog = new QRadioButton(DebugViewer);
        radioLog->setObjectName(QStringLiteral("radioLog"));
        radioLog->setChecked(true);

        gridLayout->addWidget(radioLog, 1, 1, 1, 1);

        buttonClearLog = new QPushButton(DebugViewer);
        buttonClearLog->setObjectName(QStringLiteral("buttonClearLog"));

        gridLayout->addWidget(buttonClearLog, 1, 5, 1, 1);

        radioDebug = new QRadioButton(DebugViewer);
        radioDebug->setObjectName(QStringLiteral("radioDebug"));

        gridLayout->addWidget(radioDebug, 1, 2, 1, 1);

        checkEnabled = new QCheckBox(DebugViewer);
        checkEnabled->setObjectName(QStringLiteral("checkEnabled"));

        gridLayout->addWidget(checkEnabled, 1, 0, 1, 1);

        debugText = new QPlainTextEdit(DebugViewer);
        debugText->setObjectName(QStringLiteral("debugText"));
        debugText->setUndoRedoEnabled(false);
        debugText->setReadOnly(true);
        debugText->setMaximumBlockCount(10000);

        gridLayout->addWidget(debugText, 0, 0, 1, 6);

        buttonSaveAs = new QPushButton(DebugViewer);
        buttonSaveAs->setObjectName(QStringLiteral("buttonSaveAs"));

        gridLayout->addWidget(buttonSaveAs, 1, 4, 1, 1);


        retranslateUi(DebugViewer);
        QObject::connect(buttonClearLog, SIGNAL(clicked()), debugText, SLOT(clear()));

        QMetaObject::connectSlotsByName(DebugViewer);
    } // setupUi

    void retranslateUi(QWidget *DebugViewer)
    {
        DebugViewer->setWindowTitle(QApplication::translate("DebugViewer", "Qt Bitcoin Trader [DEBUG VIEWER]", 0));
        radioLog->setText(QApplication::translate("DebugViewer", "Log", 0));
        buttonClearLog->setText(QApplication::translate("DebugViewer", "Clear", 0));
        radioDebug->setText(QApplication::translate("DebugViewer", "Debug", 0));
        checkEnabled->setText(QApplication::translate("DebugViewer", "Enabled", 0));
        buttonSaveAs->setText(QApplication::translate("DebugViewer", "Save As..", 0));
    } // retranslateUi

};

namespace Ui {
    class DebugViewer: public Ui_DebugViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGVIEWER_H
