/********************************************************************************
** Form generated from reading UI file 'rulewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULEWIDGET_H
#define UI_RULEWIDGET_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RuleWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *ruleBeep;
    QPushButton *ruleUp;
    QPushButton *ruleDown;
    QPushButton *ruleSave;
    QSpacerItem *horizontalSpacer;
    QRadioButton *ruleSequencialMode;
    QRadioButton *ruleConcurrentMode;
    QLabel *rulesNoMessage;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *ruleAddButton;
    QPushButton *ruleEditButton;
    QToolButton *ruleEnableDisable;
    QLabel *label_32;
    QPushButton *ruleRemoveAll;
    QPushButton *ruleRemove;
    QTabWidget *rulesTabs;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QTableView *rulesTable;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QPlainTextEdit *consoleOutput;
    QLabel *limitRowsLabel;
    QSpinBox *limitRowsValue;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonClearLog;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *notes;
    QWidget *saveFon;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonSave;

    void setupUi(QWidget *RuleWidget)
    {
        if (RuleWidget->objectName().isEmpty())
            RuleWidget->setObjectName(QStringLiteral("RuleWidget"));
        RuleWidget->resize(708, 602);
        gridLayout = new QGridLayout(RuleWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ruleBeep = new QPushButton(RuleWidget);
        ruleBeep->setObjectName(QStringLiteral("ruleBeep"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Mute.png"), QSize(), QIcon::Normal, QIcon::Off);
        ruleBeep->setIcon(icon);
        ruleBeep->setCheckable(true);
        ruleBeep->setChecked(false);

        horizontalLayout->addWidget(ruleBeep);

        ruleUp = new QPushButton(RuleWidget);
        ruleUp->setObjectName(QStringLiteral("ruleUp"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/ArrowUp.png"), QSize(), QIcon::Normal, QIcon::Off);
        ruleUp->setIcon(icon1);

        horizontalLayout->addWidget(ruleUp);

        ruleDown = new QPushButton(RuleWidget);
        ruleDown->setObjectName(QStringLiteral("ruleDown"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/ArrowDown.png"), QSize(), QIcon::Normal, QIcon::Off);
        ruleDown->setIcon(icon2);

        horizontalLayout->addWidget(ruleDown);

        ruleSave = new QPushButton(RuleWidget);
        ruleSave->setObjectName(QStringLiteral("ruleSave"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        ruleSave->setIcon(icon3);

        horizontalLayout->addWidget(ruleSave);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ruleSequencialMode = new QRadioButton(RuleWidget);
        ruleSequencialMode->setObjectName(QStringLiteral("ruleSequencialMode"));
        ruleSequencialMode->setStyleSheet(QStringLiteral("QRadioButton:disabled:checked {color: black;}"));
        ruleSequencialMode->setChecked(true);

        horizontalLayout->addWidget(ruleSequencialMode);

        ruleConcurrentMode = new QRadioButton(RuleWidget);
        ruleConcurrentMode->setObjectName(QStringLiteral("ruleConcurrentMode"));
        ruleConcurrentMode->setStyleSheet(QStringLiteral("QRadioButton:disabled:checked {color: black;}"));

        horizontalLayout->addWidget(ruleConcurrentMode);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        rulesNoMessage = new QLabel(RuleWidget);
        rulesNoMessage->setObjectName(QStringLiteral("rulesNoMessage"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rulesNoMessage->sizePolicy().hasHeightForWidth());
        rulesNoMessage->setSizePolicy(sizePolicy);
        rulesNoMessage->setMinimumSize(QSize(60, 60));
        QFont font;
        font.setPointSize(20);
        rulesNoMessage->setFont(font);
        rulesNoMessage->setStyleSheet(QStringLiteral("border: 1px solid gray; background: white; color: gray"));
        rulesNoMessage->setAlignment(Qt::AlignCenter);
        rulesNoMessage->setWordWrap(true);
        rulesNoMessage->setMargin(4);

        gridLayout->addWidget(rulesNoMessage, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        ruleAddButton = new QPushButton(RuleWidget);
        ruleAddButton->setObjectName(QStringLiteral("ruleAddButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ruleAddButton->sizePolicy().hasHeightForWidth());
        ruleAddButton->setSizePolicy(sizePolicy1);
        ruleAddButton->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(ruleAddButton);

        ruleEditButton = new QPushButton(RuleWidget);
        ruleEditButton->setObjectName(QStringLiteral("ruleEditButton"));
        sizePolicy1.setHeightForWidth(ruleEditButton->sizePolicy().hasHeightForWidth());
        ruleEditButton->setSizePolicy(sizePolicy1);
        ruleEditButton->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(ruleEditButton);

        ruleEnableDisable = new QToolButton(RuleWidget);
        ruleEnableDisable->setObjectName(QStringLiteral("ruleEnableDisable"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ruleEnableDisable->sizePolicy().hasHeightForWidth());
        ruleEnableDisable->setSizePolicy(sizePolicy2);
        ruleEnableDisable->setPopupMode(QToolButton::InstantPopup);
        ruleEnableDisable->setToolButtonStyle(Qt::ToolButtonTextOnly);
        ruleEnableDisable->setArrowType(Qt::NoArrow);

        horizontalLayout_4->addWidget(ruleEnableDisable);

        label_32 = new QLabel(RuleWidget);
        label_32->setObjectName(QStringLiteral("label_32"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy3);
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_32);

        ruleRemoveAll = new QPushButton(RuleWidget);
        ruleRemoveAll->setObjectName(QStringLiteral("ruleRemoveAll"));
        sizePolicy1.setHeightForWidth(ruleRemoveAll->sizePolicy().hasHeightForWidth());
        ruleRemoveAll->setSizePolicy(sizePolicy1);
        ruleRemoveAll->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(ruleRemoveAll);

        ruleRemove = new QPushButton(RuleWidget);
        ruleRemove->setObjectName(QStringLiteral("ruleRemove"));
        sizePolicy1.setHeightForWidth(ruleRemove->sizePolicy().hasHeightForWidth());
        ruleRemove->setSizePolicy(sizePolicy1);
        ruleRemove->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(ruleRemove);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        rulesTabs = new QTabWidget(RuleWidget);
        rulesTabs->setObjectName(QStringLiteral("rulesTabs"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        rulesTable = new QTableView(tab);
        rulesTable->setObjectName(QStringLiteral("rulesTable"));
        rulesTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        rulesTable->setDragDropOverwriteMode(false);
        rulesTable->setAlternatingRowColors(true);
        rulesTable->setSelectionMode(QAbstractItemView::SingleSelection);
        rulesTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        rulesTable->setTextElideMode(Qt::ElideNone);
        rulesTable->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        rulesTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        rulesTable->setShowGrid(false);
        rulesTable->setWordWrap(false);
        rulesTable->horizontalHeader()->setHighlightSections(false);
        rulesTable->verticalHeader()->setVisible(false);
        rulesTable->verticalHeader()->setDefaultSectionSize(26);
        rulesTable->verticalHeader()->setHighlightSections(false);

        gridLayout_2->addWidget(rulesTable, 0, 0, 1, 1);

        rulesTabs->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        consoleOutput = new QPlainTextEdit(tab_2);
        consoleOutput->setObjectName(QStringLiteral("consoleOutput"));
        consoleOutput->setReadOnly(true);
        consoleOutput->setMaximumBlockCount(10);

        gridLayout_4->addWidget(consoleOutput, 0, 0, 1, 4);

        limitRowsLabel = new QLabel(tab_2);
        limitRowsLabel->setObjectName(QStringLiteral("limitRowsLabel"));

        gridLayout_4->addWidget(limitRowsLabel, 1, 0, 1, 1);

        limitRowsValue = new QSpinBox(tab_2);
        limitRowsValue->setObjectName(QStringLiteral("limitRowsValue"));
        limitRowsValue->setAlignment(Qt::AlignCenter);
        limitRowsValue->setMaximum(100000);
        limitRowsValue->setValue(20);

        gridLayout_4->addWidget(limitRowsValue, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(462, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        buttonClearLog = new QPushButton(tab_2);
        buttonClearLog->setObjectName(QStringLiteral("buttonClearLog"));

        gridLayout_4->addWidget(buttonClearLog, 1, 3, 1, 1);

        rulesTabs->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        notes = new QPlainTextEdit(tab_3);
        notes->setObjectName(QStringLiteral("notes"));

        gridLayout_3->addWidget(notes, 0, 0, 1, 1);

        saveFon = new QWidget(tab_3);
        saveFon->setObjectName(QStringLiteral("saveFon"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(saveFon->sizePolicy().hasHeightForWidth());
        saveFon->setSizePolicy(sizePolicy4);
        horizontalLayout_3 = new QHBoxLayout(saveFon);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(0, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        buttonSave = new QPushButton(saveFon);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));

        horizontalLayout_3->addWidget(buttonSave);


        gridLayout_3->addWidget(saveFon, 1, 0, 1, 1);

        rulesTabs->addTab(tab_3, QString());

        gridLayout->addWidget(rulesTabs, 1, 0, 1, 1);


        retranslateUi(RuleWidget);
        QObject::connect(rulesTable, SIGNAL(doubleClicked(QModelIndex)), ruleEditButton, SLOT(click()));
        QObject::connect(buttonClearLog, SIGNAL(clicked()), consoleOutput, SLOT(clear()));

        rulesTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RuleWidget);
    } // setupUi

    void retranslateUi(QWidget *RuleWidget)
    {
        RuleWidget->setWindowTitle(QApplication::translate("RuleWidget", "RuleWidget", 0));
#ifndef QT_NO_ACCESSIBILITY
        ruleBeep->setAccessibleDescription(QApplication::translate("RuleWidget", "TOGGLE_SOUND", 0));
#endif // QT_NO_ACCESSIBILITY
        ruleBeep->setText(QString());
        ruleUp->setText(QString());
        ruleDown->setText(QString());
        ruleSave->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        ruleSequencialMode->setAccessibleName(QApplication::translate("RuleWidget", "SEQUENTIAL_MODE", 0));
#endif // QT_NO_ACCESSIBILITY
        ruleSequencialMode->setText(QApplication::translate("RuleWidget", "Sequential Mode", 0));
#ifndef QT_NO_ACCESSIBILITY
        ruleConcurrentMode->setAccessibleName(QApplication::translate("RuleWidget", "CONCURRENT_MODE", 0));
#endif // QT_NO_ACCESSIBILITY
        ruleConcurrentMode->setText(QApplication::translate("RuleWidget", "Concurrent Mode", 0));
#ifndef QT_NO_ACCESSIBILITY
        rulesNoMessage->setAccessibleName(QApplication::translate("RuleWidget", "RULE_NOITEMS", 0));
#endif // QT_NO_ACCESSIBILITY
        rulesNoMessage->setText(QApplication::translate("RuleWidget", "No Rules", 0));
#ifndef QT_NO_ACCESSIBILITY
        ruleAddButton->setAccessibleName(QApplication::translate("RuleWidget", "TR00027", 0));
#endif // QT_NO_ACCESSIBILITY
        ruleAddButton->setText(QApplication::translate("RuleWidget", "Add Rule", 0));
#ifndef QT_NO_ACCESSIBILITY
        ruleEditButton->setAccessibleName(QApplication::translate("RuleWidget", "RULE_EDIT", 0));
#endif // QT_NO_ACCESSIBILITY
        ruleEditButton->setText(QApplication::translate("RuleWidget", "Edit Rule", 0));
#ifndef QT_NO_ACCESSIBILITY
        ruleEnableDisable->setAccessibleName(QApplication::translate("RuleWidget", "ENABLE_DISABLE", 0));
#endif // QT_NO_ACCESSIBILITY
        ruleEnableDisable->setText(QApplication::translate("RuleWidget", "Enable / Disable", 0));
#ifndef QT_NO_ACCESSIBILITY
        label_32->setAccessibleName(QApplication::translate("RuleWidget", "REMOVE_RULES", 0));
#endif // QT_NO_ACCESSIBILITY
        label_32->setText(QApplication::translate("RuleWidget", "Remove:", 0));
#ifndef QT_NO_ACCESSIBILITY
        ruleRemoveAll->setAccessibleName(QApplication::translate("RuleWidget", "CANCEL_ALL_ORDERS", 0));
#endif // QT_NO_ACCESSIBILITY
        ruleRemoveAll->setText(QApplication::translate("RuleWidget", "All", 0));
#ifndef QT_NO_ACCESSIBILITY
        ruleRemove->setAccessibleName(QApplication::translate("RuleWidget", "CANCEL_SELECTED_ORDERS", 0));
#endif // QT_NO_ACCESSIBILITY
        ruleRemove->setText(QApplication::translate("RuleWidget", "Selected", 0));
        rulesTabs->setTabText(rulesTabs->indexOf(tab), QApplication::translate("RuleWidget", "Rules", 0));
#ifndef QT_NO_ACCESSIBILITY
        limitRowsLabel->setAccessibleName(QApplication::translate("RuleWidget", "LIMIT_ROWS", 0));
#endif // QT_NO_ACCESSIBILITY
        limitRowsLabel->setText(QApplication::translate("RuleWidget", "Limit rows:", 0));
#ifndef QT_NO_ACCESSIBILITY
        buttonClearLog->setAccessibleName(QApplication::translate("RuleWidget", "CLEAR", 0));
#endif // QT_NO_ACCESSIBILITY
        buttonClearLog->setText(QApplication::translate("RuleWidget", "Clear", 0));
        rulesTabs->setTabText(rulesTabs->indexOf(tab_2), QApplication::translate("RuleWidget", "Log", 0));
#ifndef QT_NO_ACCESSIBILITY
        buttonSave->setAccessibleName(QApplication::translate("RuleWidget", "SAVE", 0));
#endif // QT_NO_ACCESSIBILITY
        buttonSave->setText(QApplication::translate("RuleWidget", "Save", 0));
        rulesTabs->setTabText(rulesTabs->indexOf(tab_3), QApplication::translate("RuleWidget", "Notes", 0));
    } // retranslateUi

};

namespace Ui {
    class RuleWidget: public Ui_RuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULEWIDGET_H
