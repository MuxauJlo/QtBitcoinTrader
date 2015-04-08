/********************************************************************************
** Form generated from reading UI file 'addruledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRULEDIALOG_H
#define UI_ADDRULEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddRuleDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *scriptCodeGroupbox;
    QGridLayout *gridLayout_8;
    QTextEdit *scriptCodePreview;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *fillFromBuyPanel;
    QPushButton *fillFromSellPanel;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonSaveRule;
    QPushButton *buttonAddRule;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_10;
    QLineEdit *descriptionText;
    QToolButton *descriptionClear;
    QPushButton *buttonCancel;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *groupNameLabel;
    QComboBox *groupName;
    QGroupBox *addRuleGroupBox;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *whenValueGroupBox;
    QGridLayout *gridLayout_2;
    QWidget *modeFon;
    QGridLayout *gridLayout_7;
    QLabel *variableBModeLabel;
    QComboBox *variableBMode;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *variableBplusMinus;
    QCheckBox *variableBPercent;
    QDoubleSpinBox *variableBExact;
    QToolButton *variableBPercentButton;
    QComboBox *variableBFee;
    QGridLayout *gridLayout_5;
    QComboBox *variableB;
    QLabel *label_3;
    QComboBox *valueBSymbol;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_7;
    QGroupBox *actionGroupBox;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_6;
    QComboBox *thanType;
    QLabel *label_8;
    QLabel *thanSymbolLabel;
    QComboBox *thanSymbol;
    QWidget *doubleValueFon;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QCheckBox *thanAmountPercent;
    QToolButton *thanAmountPercentButton;
    QLabel *label_6;
    QDoubleSpinBox *thanAmount;
    QComboBox *thanAmountFee;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_4;
    QComboBox *thanPriceType;
    QHBoxLayout *horizontalLayout;
    QComboBox *thanPricePlusMinus;
    QCheckBox *thanPricePercent;
    QDoubleSpinBox *thanPriceValue;
    QToolButton *thanPricePercentButton;
    QComboBox *thanPriceFee;
    QGridLayout *gridLayout_11;
    QPushButton *thanTextBrowse;
    QComboBox *sayCode;
    QLineEdit *thanText;
    QToolButton *clearTextButton;
    QLabel *nameLabel;
    QToolButton *playButton;
    QLabel *sayLabelPlus;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBoxWhen;
    QGridLayout *gridLayout_4;
    QLabel *valueALabel;
    QComboBox *valueASymbol;
    QComboBox *variableA;
    QLabel *label;
    QLabel *delayLabel;
    QDoubleSpinBox *delayValue;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *codePreview;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_3;
    QComboBox *comparation;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *AddRuleDialog)
    {
        if (AddRuleDialog->objectName().isEmpty())
            AddRuleDialog->setObjectName(QStringLiteral("AddRuleDialog"));
        AddRuleDialog->resize(1188, 602);
        AddRuleDialog->setMaximumSize(QSize(2048, 1280));
        gridLayout = new QGridLayout(AddRuleDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(8, 8, 8, 8);
        scriptCodeGroupbox = new QGroupBox(AddRuleDialog);
        scriptCodeGroupbox->setObjectName(QStringLiteral("scriptCodeGroupbox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scriptCodeGroupbox->sizePolicy().hasHeightForWidth());
        scriptCodeGroupbox->setSizePolicy(sizePolicy);
        gridLayout_8 = new QGridLayout(scriptCodeGroupbox);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        scriptCodePreview = new QTextEdit(scriptCodeGroupbox);
        scriptCodePreview->setObjectName(QStringLiteral("scriptCodePreview"));
        scriptCodePreview->setReadOnly(true);

        gridLayout_8->addWidget(scriptCodePreview, 0, 0, 1, 1);


        gridLayout->addWidget(scriptCodeGroupbox, 2, 0, 1, 5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        fillFromBuyPanel = new QPushButton(AddRuleDialog);
        fillFromBuyPanel->setObjectName(QStringLiteral("fillFromBuyPanel"));
        fillFromBuyPanel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(fillFromBuyPanel);

        fillFromSellPanel = new QPushButton(AddRuleDialog);
        fillFromSellPanel->setObjectName(QStringLiteral("fillFromSellPanel"));
        fillFromSellPanel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(fillFromSellPanel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        buttonSaveRule = new QPushButton(AddRuleDialog);
        buttonSaveRule->setObjectName(QStringLiteral("buttonSaveRule"));
        buttonSaveRule->setAutoDefault(true);
        buttonSaveRule->setDefault(false);

        gridLayout->addWidget(buttonSaveRule, 3, 2, 1, 1);

        buttonAddRule = new QPushButton(AddRuleDialog);
        buttonAddRule->setObjectName(QStringLiteral("buttonAddRule"));
        buttonAddRule->setAutoDefault(true);
        buttonAddRule->setDefault(false);

        gridLayout->addWidget(buttonAddRule, 3, 1, 1, 1);

        groupBox = new QGroupBox(AddRuleDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_10 = new QGridLayout(groupBox);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        descriptionText = new QLineEdit(groupBox);
        descriptionText->setObjectName(QStringLiteral("descriptionText"));

        gridLayout_10->addWidget(descriptionText, 0, 0, 1, 1);

        descriptionClear = new QToolButton(groupBox);
        descriptionClear->setObjectName(QStringLiteral("descriptionClear"));

        gridLayout_10->addWidget(descriptionClear, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 5);

        buttonCancel = new QPushButton(AddRuleDialog);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));

        gridLayout->addWidget(buttonCancel, 3, 3, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        groupNameLabel = new QLabel(AddRuleDialog);
        groupNameLabel->setObjectName(QStringLiteral("groupNameLabel"));

        horizontalLayout_5->addWidget(groupNameLabel);

        groupName = new QComboBox(AddRuleDialog);
        groupName->setObjectName(QStringLiteral("groupName"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupName->sizePolicy().hasHeightForWidth());
        groupName->setSizePolicy(sizePolicy1);
        groupName->setMinimumSize(QSize(150, 0));
        groupName->setEditable(true);
        groupName->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_5->addWidget(groupName);


        gridLayout->addLayout(horizontalLayout_5, 3, 4, 1, 1);

        addRuleGroupBox = new QGroupBox(AddRuleDialog);
        addRuleGroupBox->setObjectName(QStringLiteral("addRuleGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(addRuleGroupBox->sizePolicy().hasHeightForWidth());
        addRuleGroupBox->setSizePolicy(sizePolicy2);
        gridLayout_9 = new QGridLayout(addRuleGroupBox);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        whenValueGroupBox = new QGroupBox(addRuleGroupBox);
        whenValueGroupBox->setObjectName(QStringLiteral("whenValueGroupBox"));
        sizePolicy2.setHeightForWidth(whenValueGroupBox->sizePolicy().hasHeightForWidth());
        whenValueGroupBox->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(whenValueGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        modeFon = new QWidget(whenValueGroupBox);
        modeFon->setObjectName(QStringLiteral("modeFon"));
        gridLayout_7 = new QGridLayout(modeFon);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        variableBModeLabel = new QLabel(modeFon);
        variableBModeLabel->setObjectName(QStringLiteral("variableBModeLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(variableBModeLabel->sizePolicy().hasHeightForWidth());
        variableBModeLabel->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(variableBModeLabel, 0, 0, 1, 1);

        variableBMode = new QComboBox(modeFon);
        variableBMode->setObjectName(QStringLiteral("variableBMode"));
        variableBMode->setIconSize(QSize(24, 24));

        gridLayout_7->addWidget(variableBMode, 0, 1, 1, 2);


        gridLayout_2->addWidget(modeFon, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        variableBplusMinus = new QComboBox(whenValueGroupBox);
        variableBplusMinus->setObjectName(QStringLiteral("variableBplusMinus"));

        horizontalLayout_3->addWidget(variableBplusMinus);

        variableBPercent = new QCheckBox(whenValueGroupBox);
        variableBPercent->setObjectName(QStringLiteral("variableBPercent"));

        horizontalLayout_3->addWidget(variableBPercent);

        variableBExact = new QDoubleSpinBox(whenValueGroupBox);
        variableBExact->setObjectName(QStringLiteral("variableBExact"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(variableBExact->sizePolicy().hasHeightForWidth());
        variableBExact->setSizePolicy(sizePolicy4);
        variableBExact->setMinimumSize(QSize(120, 0));
        variableBExact->setDecimals(8);
        variableBExact->setMinimum(-1e+07);
        variableBExact->setMaximum(1e+07);

        horizontalLayout_3->addWidget(variableBExact);

        variableBPercentButton = new QToolButton(whenValueGroupBox);
        variableBPercentButton->setObjectName(QStringLiteral("variableBPercentButton"));
        variableBPercentButton->setPopupMode(QToolButton::InstantPopup);
        variableBPercentButton->setToolButtonStyle(Qt::ToolButtonIconOnly);
        variableBPercentButton->setArrowType(Qt::DownArrow);

        horizontalLayout_3->addWidget(variableBPercentButton);

        variableBFee = new QComboBox(whenValueGroupBox);
        variableBFee->setObjectName(QStringLiteral("variableBFee"));
        sizePolicy4.setHeightForWidth(variableBFee->sizePolicy().hasHeightForWidth());
        variableBFee->setSizePolicy(sizePolicy4);

        horizontalLayout_3->addWidget(variableBFee);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        variableB = new QComboBox(whenValueGroupBox);
        variableB->setObjectName(QStringLiteral("variableB"));
        sizePolicy4.setHeightForWidth(variableB->sizePolicy().hasHeightForWidth());
        variableB->setSizePolicy(sizePolicy4);
        variableB->setMaxVisibleItems(30);

        gridLayout_5->addWidget(variableB, 0, 2, 1, 1);

        label_3 = new QLabel(whenValueGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_3, 0, 1, 1, 1);

        valueBSymbol = new QComboBox(whenValueGroupBox);
        valueBSymbol->setObjectName(QStringLiteral("valueBSymbol"));
        sizePolicy4.setHeightForWidth(valueBSymbol->sizePolicy().hasHeightForWidth());
        valueBSymbol->setSizePolicy(sizePolicy4);

        gridLayout_5->addWidget(valueBSymbol, 1, 2, 1, 1);

        label_7 = new QLabel(whenValueGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_7, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_5, 0, 0, 1, 1);


        verticalLayout_5->addWidget(whenValueGroupBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        gridLayout_9->addLayout(verticalLayout_5, 0, 2, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_7 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_7);

        actionGroupBox = new QGroupBox(addRuleGroupBox);
        actionGroupBox->setObjectName(QStringLiteral("actionGroupBox"));
        verticalLayout_2 = new QVBoxLayout(actionGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(-1, 0, -1, -1);
        thanType = new QComboBox(actionGroupBox);
        thanType->setObjectName(QStringLiteral("thanType"));
        sizePolicy4.setHeightForWidth(thanType->sizePolicy().hasHeightForWidth());
        thanType->setSizePolicy(sizePolicy4);
        thanType->setMaxVisibleItems(30);

        gridLayout_6->addWidget(thanType, 0, 1, 1, 1);

        label_8 = new QLabel(actionGroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        thanSymbolLabel = new QLabel(actionGroupBox);
        thanSymbolLabel->setObjectName(QStringLiteral("thanSymbolLabel"));
        sizePolicy2.setHeightForWidth(thanSymbolLabel->sizePolicy().hasHeightForWidth());
        thanSymbolLabel->setSizePolicy(sizePolicy2);
        thanSymbolLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(thanSymbolLabel, 1, 0, 1, 1);

        thanSymbol = new QComboBox(actionGroupBox);
        thanSymbol->setObjectName(QStringLiteral("thanSymbol"));
        sizePolicy4.setHeightForWidth(thanSymbol->sizePolicy().hasHeightForWidth());
        thanSymbol->setSizePolicy(sizePolicy4);

        gridLayout_6->addWidget(thanSymbol, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_6);

        doubleValueFon = new QWidget(actionGroupBox);
        doubleValueFon->setObjectName(QStringLiteral("doubleValueFon"));
        verticalLayout = new QVBoxLayout(doubleValueFon);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        thanAmountPercent = new QCheckBox(doubleValueFon);
        thanAmountPercent->setObjectName(QStringLiteral("thanAmountPercent"));

        gridLayout_3->addWidget(thanAmountPercent, 0, 1, 1, 1);

        thanAmountPercentButton = new QToolButton(doubleValueFon);
        thanAmountPercentButton->setObjectName(QStringLiteral("thanAmountPercentButton"));
        thanAmountPercentButton->setPopupMode(QToolButton::InstantPopup);
        thanAmountPercentButton->setToolButtonStyle(Qt::ToolButtonIconOnly);
        thanAmountPercentButton->setArrowType(Qt::DownArrow);

        gridLayout_3->addWidget(thanAmountPercentButton, 0, 3, 1, 1);

        label_6 = new QLabel(doubleValueFon);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        thanAmount = new QDoubleSpinBox(doubleValueFon);
        thanAmount->setObjectName(QStringLiteral("thanAmount"));
        sizePolicy4.setHeightForWidth(thanAmount->sizePolicy().hasHeightForWidth());
        thanAmount->setSizePolicy(sizePolicy4);
        thanAmount->setMinimumSize(QSize(120, 0));
        thanAmount->setDecimals(8);
        thanAmount->setMinimum(-1e+07);
        thanAmount->setMaximum(1e+07);

        gridLayout_3->addWidget(thanAmount, 0, 2, 1, 1);

        thanAmountFee = new QComboBox(doubleValueFon);
        thanAmountFee->setObjectName(QStringLiteral("thanAmountFee"));
        sizePolicy4.setHeightForWidth(thanAmountFee->sizePolicy().hasHeightForWidth());
        thanAmountFee->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(thanAmountFee, 0, 4, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_4 = new QLabel(doubleValueFon);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);

        horizontalLayout_12->addWidget(label_4);

        thanPriceType = new QComboBox(doubleValueFon);
        thanPriceType->setObjectName(QStringLiteral("thanPriceType"));
        sizePolicy4.setHeightForWidth(thanPriceType->sizePolicy().hasHeightForWidth());
        thanPriceType->setSizePolicy(sizePolicy4);
        thanPriceType->setMaxVisibleItems(30);

        horizontalLayout_12->addWidget(thanPriceType);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        thanPricePlusMinus = new QComboBox(doubleValueFon);
        thanPricePlusMinus->setObjectName(QStringLiteral("thanPricePlusMinus"));

        horizontalLayout->addWidget(thanPricePlusMinus);

        thanPricePercent = new QCheckBox(doubleValueFon);
        thanPricePercent->setObjectName(QStringLiteral("thanPricePercent"));

        horizontalLayout->addWidget(thanPricePercent);

        thanPriceValue = new QDoubleSpinBox(doubleValueFon);
        thanPriceValue->setObjectName(QStringLiteral("thanPriceValue"));
        sizePolicy4.setHeightForWidth(thanPriceValue->sizePolicy().hasHeightForWidth());
        thanPriceValue->setSizePolicy(sizePolicy4);
        thanPriceValue->setMinimumSize(QSize(120, 0));
        thanPriceValue->setDecimals(8);
        thanPriceValue->setMinimum(-1e+07);
        thanPriceValue->setMaximum(1e+07);

        horizontalLayout->addWidget(thanPriceValue);

        thanPricePercentButton = new QToolButton(doubleValueFon);
        thanPricePercentButton->setObjectName(QStringLiteral("thanPricePercentButton"));
        thanPricePercentButton->setPopupMode(QToolButton::InstantPopup);
        thanPricePercentButton->setToolButtonStyle(Qt::ToolButtonIconOnly);
        thanPricePercentButton->setArrowType(Qt::DownArrow);

        horizontalLayout->addWidget(thanPricePercentButton);

        thanPriceFee = new QComboBox(doubleValueFon);
        thanPriceFee->setObjectName(QStringLiteral("thanPriceFee"));
        sizePolicy4.setHeightForWidth(thanPriceFee->sizePolicy().hasHeightForWidth());
        thanPriceFee->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(thanPriceFee);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(doubleValueFon);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        thanTextBrowse = new QPushButton(actionGroupBox);
        thanTextBrowse->setObjectName(QStringLiteral("thanTextBrowse"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        thanTextBrowse->setIcon(icon);

        gridLayout_11->addWidget(thanTextBrowse, 0, 6, 1, 1);

        sayCode = new QComboBox(actionGroupBox);
        sayCode->setObjectName(QStringLiteral("sayCode"));
        sizePolicy4.setHeightForWidth(sayCode->sizePolicy().hasHeightForWidth());
        sayCode->setSizePolicy(sizePolicy4);
        sayCode->setMaxVisibleItems(30);

        gridLayout_11->addWidget(sayCode, 1, 3, 1, 1);

        thanText = new QLineEdit(actionGroupBox);
        thanText->setObjectName(QStringLiteral("thanText"));

        gridLayout_11->addWidget(thanText, 0, 3, 1, 1);

        clearTextButton = new QToolButton(actionGroupBox);
        clearTextButton->setObjectName(QStringLiteral("clearTextButton"));

        gridLayout_11->addWidget(clearTextButton, 0, 5, 1, 1);

        nameLabel = new QLabel(actionGroupBox);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        sizePolicy2.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy2);
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_11->addWidget(nameLabel, 0, 2, 1, 1);

        playButton = new QToolButton(actionGroupBox);
        playButton->setObjectName(QStringLiteral("playButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Play.png"), QSize(), QIcon::Normal, QIcon::Off);
        playButton->setIcon(icon1);

        gridLayout_11->addWidget(playButton, 0, 1, 1, 1);

        sayLabelPlus = new QLabel(actionGroupBox);
        sayLabelPlus->setObjectName(QStringLiteral("sayLabelPlus"));
        sizePolicy2.setHeightForWidth(sayLabelPlus->sizePolicy().hasHeightForWidth());
        sayLabelPlus->setSizePolicy(sizePolicy2);
        sayLabelPlus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_11->addWidget(sayLabelPlus, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_11);


        verticalLayout_6->addWidget(actionGroupBox);

        verticalSpacer_8 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_8);


        gridLayout_9->addLayout(verticalLayout_6, 0, 3, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_6 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        groupBoxWhen = new QGroupBox(addRuleGroupBox);
        groupBoxWhen->setObjectName(QStringLiteral("groupBoxWhen"));
        gridLayout_4 = new QGridLayout(groupBoxWhen);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(8, 6, 8, 6);
        valueALabel = new QLabel(groupBoxWhen);
        valueALabel->setObjectName(QStringLiteral("valueALabel"));
        sizePolicy2.setHeightForWidth(valueALabel->sizePolicy().hasHeightForWidth());
        valueALabel->setSizePolicy(sizePolicy2);
        valueALabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(valueALabel, 1, 0, 1, 1);

        valueASymbol = new QComboBox(groupBoxWhen);
        valueASymbol->setObjectName(QStringLiteral("valueASymbol"));
        sizePolicy4.setHeightForWidth(valueASymbol->sizePolicy().hasHeightForWidth());
        valueASymbol->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(valueASymbol, 1, 1, 1, 1);

        variableA = new QComboBox(groupBoxWhen);
        variableA->setObjectName(QStringLiteral("variableA"));
        sizePolicy4.setHeightForWidth(variableA->sizePolicy().hasHeightForWidth());
        variableA->setSizePolicy(sizePolicy4);
        variableA->setMaxVisibleItems(30);

        gridLayout_4->addWidget(variableA, 0, 1, 1, 1);

        label = new QLabel(groupBoxWhen);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        delayLabel = new QLabel(groupBoxWhen);
        delayLabel->setObjectName(QStringLiteral("delayLabel"));
        sizePolicy2.setHeightForWidth(delayLabel->sizePolicy().hasHeightForWidth());
        delayLabel->setSizePolicy(sizePolicy2);
        delayLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(delayLabel, 2, 0, 1, 1);

        delayValue = new QDoubleSpinBox(groupBoxWhen);
        delayValue->setObjectName(QStringLiteral("delayValue"));
        sizePolicy4.setHeightForWidth(delayValue->sizePolicy().hasHeightForWidth());
        delayValue->setSizePolicy(sizePolicy4);
        delayValue->setMinimumSize(QSize(120, 0));
        delayValue->setDecimals(3);
        delayValue->setMinimum(0);
        delayValue->setMaximum(1e+07);
        delayValue->setSingleStep(0.1);

        gridLayout_4->addWidget(delayValue, 2, 1, 1, 1);


        verticalLayout_3->addWidget(groupBoxWhen);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        codePreview = new QCheckBox(addRuleGroupBox);
        codePreview->setObjectName(QStringLiteral("codePreview"));

        verticalLayout_3->addWidget(codePreview);


        gridLayout_9->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        comparation = new QComboBox(addRuleGroupBox);
        comparation->setObjectName(QStringLiteral("comparation"));

        verticalLayout_4->addWidget(comparation);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);


        gridLayout_9->addLayout(verticalLayout_4, 0, 1, 1, 1);


        gridLayout->addWidget(addRuleGroupBox, 1, 0, 1, 5);


        retranslateUi(AddRuleDialog);
        QObject::connect(descriptionClear, SIGNAL(clicked()), descriptionText, SLOT(clear()));
        QObject::connect(clearTextButton, SIGNAL(clicked()), thanText, SLOT(clear()));
        QObject::connect(codePreview, SIGNAL(toggled(bool)), scriptCodeGroupbox, SLOT(setVisible(bool)));
        QObject::connect(buttonCancel, SIGNAL(clicked()), AddRuleDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddRuleDialog);
    } // setupUi

    void retranslateUi(QWidget *AddRuleDialog)
    {
        AddRuleDialog->setWindowTitle(QApplication::translate("AddRuleDialog", "Form", 0));
#ifndef QT_NO_ACCESSIBILITY
        scriptCodeGroupbox->setAccessibleName(QApplication::translate("AddRuleDialog", "SCRIPT_CODE", 0));
#endif // QT_NO_ACCESSIBILITY
        scriptCodeGroupbox->setTitle(QApplication::translate("AddRuleDialog", "Script code", 0));
#ifndef QT_NO_ACCESSIBILITY
        fillFromBuyPanel->setAccessibleName(QApplication::translate("AddRuleDialog", "FILL_FROM_BUY_PANEL", 0));
#endif // QT_NO_ACCESSIBILITY
        fillFromBuyPanel->setText(QApplication::translate("AddRuleDialog", "Fill from Buy Panel", 0));
#ifndef QT_NO_ACCESSIBILITY
        fillFromSellPanel->setAccessibleName(QApplication::translate("AddRuleDialog", "FILL_FROM_Sell_PANEL", 0));
#endif // QT_NO_ACCESSIBILITY
        fillFromSellPanel->setText(QApplication::translate("AddRuleDialog", "Fill from Sell Panel", 0));
#ifndef QT_NO_ACCESSIBILITY
        buttonSaveRule->setAccessibleName(QApplication::translate("AddRuleDialog", "SAVE_RULE", 0));
#endif // QT_NO_ACCESSIBILITY
        buttonSaveRule->setText(QApplication::translate("AddRuleDialog", "Save Rule", 0));
#ifndef QT_NO_ACCESSIBILITY
        buttonAddRule->setAccessibleName(QApplication::translate("AddRuleDialog", "ADD_RULE", 0));
#endif // QT_NO_ACCESSIBILITY
        buttonAddRule->setText(QApplication::translate("AddRuleDialog", "Add Rule", 0));
#ifndef QT_NO_ACCESSIBILITY
        groupBox->setAccessibleName(QApplication::translate("AddRuleDialog", "DESCRIPTION", 0));
#endif // QT_NO_ACCESSIBILITY
        groupBox->setTitle(QApplication::translate("AddRuleDialog", "Description", 0));
        descriptionClear->setText(QApplication::translate("AddRuleDialog", "X", 0));
#ifndef QT_NO_ACCESSIBILITY
        buttonCancel->setAccessibleName(QApplication::translate("AddRuleDialog", "TRCANCEL", 0));
#endif // QT_NO_ACCESSIBILITY
        buttonCancel->setText(QApplication::translate("AddRuleDialog", "Cancel", 0));
#ifndef QT_NO_ACCESSIBILITY
        groupNameLabel->setAccessibleName(QApplication::translate("AddRuleDialog", "GROUP_NAME", 0));
#endif // QT_NO_ACCESSIBILITY
        groupNameLabel->setText(QApplication::translate("AddRuleDialog", "Group Name:", 0));
#ifndef QT_NO_ACCESSIBILITY
        addRuleGroupBox->setAccessibleName(QApplication::translate("AddRuleDialog", "GENERATE_RULE", 0));
#endif // QT_NO_ACCESSIBILITY
        addRuleGroupBox->setTitle(QApplication::translate("AddRuleDialog", "Generate rule", 0));
#ifndef QT_NO_ACCESSIBILITY
        whenValueGroupBox->setAccessibleName(QApplication::translate("AddRuleDialog", "VALUE", 0));
#endif // QT_NO_ACCESSIBILITY
        whenValueGroupBox->setTitle(QApplication::translate("AddRuleDialog", "Value", 0));
#ifndef QT_NO_ACCESSIBILITY
        variableBModeLabel->setAccessibleName(QApplication::translate("AddRuleDialog", "MODE", 0));
#endif // QT_NO_ACCESSIBILITY
        variableBModeLabel->setText(QApplication::translate("AddRuleDialog", "Mode:", 0));
        variableBMode->clear();
        variableBMode->insertItems(0, QStringList()
         << QApplication::translate("AddRuleDialog", "Realtime comparation", 0)
         << QApplication::translate("AddRuleDialog", "Fixed. Save base value once at rule starts", 0)
         << QApplication::translate("AddRuleDialog", "Trailing. Save base value on opposide direction", 0)
        );
        variableBplusMinus->clear();
        variableBplusMinus->insertItems(0, QStringList()
         << QApplication::translate("AddRuleDialog", "+", 0)
         << QApplication::translate("AddRuleDialog", "-", 0)
         << QApplication::translate("AddRuleDialog", "*", 0)
         << QApplication::translate("AddRuleDialog", "/", 0)
        );
        variableBPercent->setText(QApplication::translate("AddRuleDialog", "%", 0));
        variableBPercentButton->setText(QString());
        variableBFee->clear();
        variableBFee->insertItems(0, QStringList()
         << QApplication::translate("AddRuleDialog", "No Fee", 0)
         << QApplication::translate("AddRuleDialog", "+ Fee", 0)
         << QApplication::translate("AddRuleDialog", "- Fee", 0)
        );
#ifndef QT_NO_ACCESSIBILITY
        label_3->setAccessibleName(QApplication::translate("AddRuleDialog", "TYPE", 0));
#endif // QT_NO_ACCESSIBILITY
        label_3->setText(QApplication::translate("AddRuleDialog", "Type:", 0));
#ifndef QT_NO_ACCESSIBILITY
        valueBSymbol->setAccessibleName(QApplication::translate("AddRuleDialog", "SYMBOL", 0));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        label_7->setAccessibleName(QApplication::translate("AddRuleDialog", "TR00005", 0));
#endif // QT_NO_ACCESSIBILITY
        label_7->setText(QApplication::translate("AddRuleDialog", "Symbol:", 0));
#ifndef QT_NO_ACCESSIBILITY
        actionGroupBox->setAccessibleName(QApplication::translate("AddRuleDialog", "THEN", 0));
#endif // QT_NO_ACCESSIBILITY
        actionGroupBox->setTitle(QApplication::translate("AddRuleDialog", "Then", 0));
#ifndef QT_NO_ACCESSIBILITY
        label_8->setAccessibleName(QApplication::translate("AddRuleDialog", "ACTION", 0));
#endif // QT_NO_ACCESSIBILITY
        label_8->setText(QApplication::translate("AddRuleDialog", "Action:", 0));
#ifndef QT_NO_ACCESSIBILITY
        thanSymbolLabel->setAccessibleName(QApplication::translate("AddRuleDialog", "TR00005", 0));
#endif // QT_NO_ACCESSIBILITY
        thanSymbolLabel->setText(QApplication::translate("AddRuleDialog", "Symbol:", 0));
#ifndef QT_NO_ACCESSIBILITY
        thanSymbol->setAccessibleName(QApplication::translate("AddRuleDialog", "SYMBOL", 0));
#endif // QT_NO_ACCESSIBILITY
        thanAmountPercent->setText(QApplication::translate("AddRuleDialog", "%", 0));
        thanAmountPercentButton->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        label_6->setAccessibleName(QApplication::translate("AddRuleDialog", "AMOUNT", 0));
#endif // QT_NO_ACCESSIBILITY
        label_6->setText(QApplication::translate("AddRuleDialog", "Amount:", 0));
        thanAmountFee->clear();
        thanAmountFee->insertItems(0, QStringList()
         << QApplication::translate("AddRuleDialog", "No Fee", 0)
         << QApplication::translate("AddRuleDialog", "+ Fee", 0)
         << QApplication::translate("AddRuleDialog", "- Fee", 0)
        );
#ifndef QT_NO_ACCESSIBILITY
        label_4->setAccessibleName(QApplication::translate("AddRuleDialog", "AT", 0));
#endif // QT_NO_ACCESSIBILITY
        label_4->setText(QApplication::translate("AddRuleDialog", "At:", 0));
        thanPricePlusMinus->clear();
        thanPricePlusMinus->insertItems(0, QStringList()
         << QApplication::translate("AddRuleDialog", "+", 0)
         << QApplication::translate("AddRuleDialog", "-", 0)
         << QApplication::translate("AddRuleDialog", "*", 0)
         << QApplication::translate("AddRuleDialog", "/", 0)
        );
        thanPricePercent->setText(QApplication::translate("AddRuleDialog", "%", 0));
        thanPricePercentButton->setText(QString());
        thanPriceFee->clear();
        thanPriceFee->insertItems(0, QStringList()
         << QApplication::translate("AddRuleDialog", "No Fee", 0)
         << QApplication::translate("AddRuleDialog", "+ Fee", 0)
         << QApplication::translate("AddRuleDialog", "- Fee", 0)
        );
        thanTextBrowse->setText(QString());
        clearTextButton->setText(QApplication::translate("AddRuleDialog", "X", 0));
#ifndef QT_NO_ACCESSIBILITY
        nameLabel->setAccessibleName(QApplication::translate("AddRuleDialog", "NAME", 0));
#endif // QT_NO_ACCESSIBILITY
        nameLabel->setText(QApplication::translate("AddRuleDialog", "Name:", 0));
        playButton->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        sayLabelPlus->setAccessibleName(QApplication::translate("AddRuleDialog", "+", 0));
#endif // QT_NO_ACCESSIBILITY
        sayLabelPlus->setText(QApplication::translate("AddRuleDialog", "+", 0));
#ifndef QT_NO_ACCESSIBILITY
        groupBoxWhen->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        groupBoxWhen->setTitle(QApplication::translate("AddRuleDialog", "When", 0));
#ifndef QT_NO_ACCESSIBILITY
        valueALabel->setAccessibleName(QApplication::translate("AddRuleDialog", "TR00005", 0));
#endif // QT_NO_ACCESSIBILITY
        valueALabel->setText(QApplication::translate("AddRuleDialog", "Symbol:", 0));
#ifndef QT_NO_ACCESSIBILITY
        valueASymbol->setAccessibleName(QApplication::translate("AddRuleDialog", "SYMBOL", 0));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        label->setAccessibleName(QApplication::translate("AddRuleDialog", "TYPE", 0));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("AddRuleDialog", "Type:", 0));
#ifndef QT_NO_ACCESSIBILITY
        delayLabel->setAccessibleName(QApplication::translate("AddRuleDialog", "DELAY", 0));
#endif // QT_NO_ACCESSIBILITY
        delayLabel->setText(QApplication::translate("AddRuleDialog", "Delay:", 0));
#ifndef QT_NO_ACCESSIBILITY
        delayValue->setAccessibleName(QApplication::translate("AddRuleDialog", "TR00113", 0));
#endif // QT_NO_ACCESSIBILITY
        delayValue->setSuffix(QApplication::translate("AddRuleDialog", " sec", 0));
#ifndef QT_NO_ACCESSIBILITY
        codePreview->setAccessibleName(QApplication::translate("AddRuleDialog", "SCRIPT_PREVIEW", 0));
#endif // QT_NO_ACCESSIBILITY
        codePreview->setText(QApplication::translate("AddRuleDialog", "Script code preview", 0));
        comparation->clear();
        comparation->insertItems(0, QStringList()
         << QApplication::translate("AddRuleDialog", "<", 0)
         << QApplication::translate("AddRuleDialog", ">", 0)
         << QApplication::translate("AddRuleDialog", "=", 0)
         << QApplication::translate("AddRuleDialog", "<=", 0)
         << QApplication::translate("AddRuleDialog", ">=", 0)
         << QApplication::translate("AddRuleDialog", "<>", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class AddRuleDialog: public Ui_AddRuleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRULEDIALOG_H
