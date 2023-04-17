/********************************************************************************
** Form generated from reading UI file 'training.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINING_H
#define UI_TRAINING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_training
{
public:
    QVBoxLayout *verticalLayout_18;
    QStackedWidget *stackedWidget;
    QWidget *mainMenu;
    QVBoxLayout *verticalLayout_19;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QWidget *widget_18;
    QVBoxLayout *verticalLayout_20;
    QLabel *username;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *singleButton;
    QPushButton *rankButton;
    QWidget *select_menu;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_15;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QPushButton *chinese_btn;
    QPushButton *math_btn;
    QPushButton *english_btn;
    QLabel *label_6;
    QLabel *label_8;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout;
    QPushButton *back_to_main;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_10;
    QLabel *label_9;
    QWidget *single_menu;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_8;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_9;
    QPushButton *single_start;
    QPushButton *single_back;
    QWidget *single_running;
    QVBoxLayout *verticalLayout_13;
    QSpacerItem *verticalSpacer_11;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLCDNumber *lcdNumber;
    QSpacerItem *verticalSpacer_12;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *single_question;
    QSpacerItem *verticalSpacer_13;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout;
    QPushButton *single_SelectButton_one;
    QPushButton *single_SelectButton_two;
    QPushButton *single_SelectButton_three;
    QPushButton *single_SelectButton_four;
    QSpacerItem *verticalSpacer_10;
    QWidget *single_score;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_19;
    QGridLayout *gridLayout_2;
    QLabel *single_Result_Score;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_20;
    QGridLayout *gridLayout_3;
    QPushButton *singnal_score_backButton;
    QLabel *single_Result;
    QLabel *single_Result2;
    QWidget *rank_wait;
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer_7;
    QLabel *user_rank;
    QLabel *label_3;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *loading;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancel;
    QSpacerItem *verticalSpacer_9;
    QWidget *rank_running;
    QVBoxLayout *verticalLayout_14;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_15;
    QLabel *enemyScore;
    QLabel *selfScore;
    QLCDNumber *lcdNumber_2;
    QSpacerItem *verticalSpacer_16;
    QTextBrowser *rankQuestion;
    QSpacerItem *verticalSpacer_15;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *rankSelectButton1;
    QPushButton *rankSelectButton2;
    QPushButton *rankSelectButton3;
    QPushButton *rankSelectButton4;
    QSpacerItem *verticalSpacer_14;
    QWidget *rank_Result;
    QVBoxLayout *verticalLayout_17;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_4;
    QLabel *RankResult;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_16;
    QLabel *NewRank;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *training)
    {
        if (training->objectName().isEmpty())
            training->setObjectName(QString::fromUtf8("training"));
        training->resize(549, 729);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(training->sizePolicy().hasHeightForWidth());
        training->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pic/logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        training->setWindowIcon(icon);
        verticalLayout_18 = new QVBoxLayout(training);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        stackedWidget = new QStackedWidget(training);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setEnabled(true);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setLayoutDirection(Qt::LeftToRight);
        mainMenu = new QWidget();
        mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        verticalLayout_19 = new QVBoxLayout(mainMenu);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        widget_4 = new QWidget(mainMenu);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy1);
        verticalLayout_7 = new QVBoxLayout(widget_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/pic/show.png")));
        label_5->setScaledContents(true);

        verticalLayout_7->addWidget(label_5);


        verticalLayout_19->addWidget(widget_4);

        widget_18 = new QWidget(mainMenu);
        widget_18->setObjectName(QString::fromUtf8("widget_18"));
        verticalLayout_20 = new QVBoxLayout(widget_18);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        username = new QLabel(widget_18);
        username->setObjectName(QString::fromUtf8("username"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        username->setFont(font);
        username->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(username);


        verticalLayout_19->addWidget(widget_18);

        widget_3 = new QWidget(mainMenu);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        singleButton = new QPushButton(widget_3);
        singleButton->setObjectName(QString::fromUtf8("singleButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(16);
        singleButton->setFont(font1);

        verticalLayout_5->addWidget(singleButton);

        rankButton = new QPushButton(widget_3);
        rankButton->setObjectName(QString::fromUtf8("rankButton"));
        rankButton->setFont(font1);

        verticalLayout_5->addWidget(rankButton);


        verticalLayout_19->addWidget(widget_3);

        stackedWidget->addWidget(mainMenu);
        select_menu = new QWidget();
        select_menu->setObjectName(QString::fromUtf8("select_menu"));
        verticalLayout_6 = new QVBoxLayout(select_menu);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        widget_15 = new QWidget(select_menu);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        gridLayout = new QGridLayout(widget_15);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(widget_15);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setLayoutDirection(Qt::RightToLeft);
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/pic/math1.png")));
        label_7->setScaledContents(false);

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        chinese_btn = new QPushButton(widget_15);
        chinese_btn->setObjectName(QString::fromUtf8("chinese_btn"));
        chinese_btn->setFont(font1);

        gridLayout->addWidget(chinese_btn, 0, 1, 1, 1);

        math_btn = new QPushButton(widget_15);
        math_btn->setObjectName(QString::fromUtf8("math_btn"));
        math_btn->setFont(font1);

        gridLayout->addWidget(math_btn, 1, 1, 1, 1);

        english_btn = new QPushButton(widget_15);
        english_btn->setObjectName(QString::fromUtf8("english_btn"));
        english_btn->setFont(font1);

        gridLayout->addWidget(english_btn, 2, 1, 1, 1);

        label_6 = new QLabel(widget_15);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/pic/Chinese.png")));
        label_6->setScaledContents(true);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_8 = new QLabel(widget_15);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/pic/Eng1.png")));
        label_8->setScaledContents(true);

        gridLayout->addWidget(label_8, 2, 0, 1, 1);


        verticalLayout_6->addWidget(widget_15);

        widget_10 = new QWidget(select_menu);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        sizePolicy.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget_10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        back_to_main = new QPushButton(widget_10);
        back_to_main->setObjectName(QString::fromUtf8("back_to_main"));
        sizePolicy.setHeightForWidth(back_to_main->sizePolicy().hasHeightForWidth());
        back_to_main->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(10);
        back_to_main->setFont(font2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pic/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        back_to_main->setIcon(icon1);
        back_to_main->setIconSize(QSize(30, 30));
        back_to_main->setAutoDefault(false);
        back_to_main->setFlat(true);

        horizontalLayout->addWidget(back_to_main);

        label_11 = new QLabel(widget_10);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout->addWidget(label_11);

        label_13 = new QLabel(widget_10);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout->addWidget(label_13);

        label_10 = new QLabel(widget_10);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout->addWidget(label_10);

        label_9 = new QLabel(widget_10);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);


        verticalLayout_6->addWidget(widget_10);

        stackedWidget->addWidget(select_menu);
        single_menu = new QWidget();
        single_menu->setObjectName(QString::fromUtf8("single_menu"));
        verticalLayout_10 = new QVBoxLayout(single_menu);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        widget_5 = new QWidget(single_menu);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        verticalLayout_8 = new QVBoxLayout(widget_5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_8);

        label = new QLabel(widget_5);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        label->setFont(font3);

        verticalLayout_8->addWidget(label);

        label_2 = new QLabel(widget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_8->addWidget(label_2);


        verticalLayout_10->addWidget(widget_5);

        widget_6 = new QWidget(single_menu);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        verticalLayout_9 = new QVBoxLayout(widget_6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        single_start = new QPushButton(widget_6);
        single_start->setObjectName(QString::fromUtf8("single_start"));
        single_start->setFont(font1);

        verticalLayout_9->addWidget(single_start);

        single_back = new QPushButton(widget_6);
        single_back->setObjectName(QString::fromUtf8("single_back"));
        single_back->setFont(font1);
        single_back->setIcon(icon1);
        single_back->setIconSize(QSize(33, 27));

        verticalLayout_9->addWidget(single_back);


        verticalLayout_10->addWidget(widget_6);

        stackedWidget->addWidget(single_menu);
        single_running = new QWidget();
        single_running->setObjectName(QString::fromUtf8("single_running"));
        verticalLayout_13 = new QVBoxLayout(single_running);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_11);

        widget_7 = new QWidget(single_running);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(widget_7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(widget_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font4.setPointSize(20);
        label_4->setFont(font4);

        horizontalLayout_2->addWidget(label_4);

        lcdNumber = new QLCDNumber(widget_7);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(100, 100));
        lcdNumber->setMaximumSize(QSize(500, 100));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font5.setPointSize(20);
        lcdNumber->setFont(font5);

        horizontalLayout_2->addWidget(lcdNumber);


        verticalLayout_13->addWidget(widget_7);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_12);

        widget_9 = new QWidget(single_running);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        verticalLayout_11 = new QVBoxLayout(widget_9);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        single_question = new QTextBrowser(widget_9);
        single_question->setObjectName(QString::fromUtf8("single_question"));
        single_question->setFont(font);

        verticalLayout_11->addWidget(single_question);


        verticalLayout_13->addWidget(widget_9);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_13);

        widget_8 = new QWidget(single_running);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        verticalLayout = new QVBoxLayout(widget_8);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        single_SelectButton_one = new QPushButton(widget_8);
        single_SelectButton_one->setObjectName(QString::fromUtf8("single_SelectButton_one"));
        single_SelectButton_one->setFont(font);

        verticalLayout->addWidget(single_SelectButton_one);

        single_SelectButton_two = new QPushButton(widget_8);
        single_SelectButton_two->setObjectName(QString::fromUtf8("single_SelectButton_two"));
        single_SelectButton_two->setFont(font);

        verticalLayout->addWidget(single_SelectButton_two);

        single_SelectButton_three = new QPushButton(widget_8);
        single_SelectButton_three->setObjectName(QString::fromUtf8("single_SelectButton_three"));
        single_SelectButton_three->setFont(font);

        verticalLayout->addWidget(single_SelectButton_three);

        single_SelectButton_four = new QPushButton(widget_8);
        single_SelectButton_four->setObjectName(QString::fromUtf8("single_SelectButton_four"));
        single_SelectButton_four->setFont(font);

        verticalLayout->addWidget(single_SelectButton_four);


        verticalLayout_13->addWidget(widget_8);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_10);

        stackedWidget->addWidget(single_running);
        single_score = new QWidget();
        single_score->setObjectName(QString::fromUtf8("single_score"));
        verticalLayout_2 = new QVBoxLayout(single_score);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_19 = new QWidget(single_score);
        widget_19->setObjectName(QString::fromUtf8("widget_19"));
        gridLayout_2 = new QGridLayout(widget_19);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        single_Result_Score = new QLabel(widget_19);
        single_Result_Score->setObjectName(QString::fromUtf8("single_Result_Score"));
        single_Result_Score->setFont(font1);
        single_Result_Score->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(single_Result_Score, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 6, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 0, 0, 1, 1);

        widget_20 = new QWidget(widget_19);
        widget_20->setObjectName(QString::fromUtf8("widget_20"));
        gridLayout_3 = new QGridLayout(widget_20);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        singnal_score_backButton = new QPushButton(widget_20);
        singnal_score_backButton->setObjectName(QString::fromUtf8("singnal_score_backButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(10);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(singnal_score_backButton->sizePolicy().hasHeightForWidth());
        singnal_score_backButton->setSizePolicy(sizePolicy3);
        singnal_score_backButton->setFont(font1);
        singnal_score_backButton->setLayoutDirection(Qt::LeftToRight);
        singnal_score_backButton->setIcon(icon1);
        singnal_score_backButton->setIconSize(QSize(33, 30));

        gridLayout_3->addWidget(singnal_score_backButton, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_20, 5, 0, 1, 1);

        single_Result = new QLabel(widget_19);
        single_Result->setObjectName(QString::fromUtf8("single_Result"));
        single_Result->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(single_Result, 1, 0, 1, 1);

        single_Result2 = new QLabel(widget_19);
        single_Result2->setObjectName(QString::fromUtf8("single_Result2"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font6.setPointSize(18);
        single_Result2->setFont(font6);
        single_Result2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(single_Result2, 3, 0, 1, 1);


        verticalLayout_2->addWidget(widget_19);

        stackedWidget->addWidget(single_score);
        rank_wait = new QWidget();
        rank_wait->setObjectName(QString::fromUtf8("rank_wait"));
        verticalLayout_12 = new QVBoxLayout(rank_wait);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_7);

        user_rank = new QLabel(rank_wait);
        user_rank->setObjectName(QString::fromUtf8("user_rank"));
        user_rank->setFont(font);
        user_rank->setLayoutDirection(Qt::LeftToRight);
        user_rank->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(user_rank);

        label_3 = new QLabel(rank_wait);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_12->addWidget(label_3);

        widget_16 = new QWidget(rank_wait);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        horizontalLayout_3 = new QHBoxLayout(widget_16);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        loading = new QLabel(widget_16);
        loading->setObjectName(QString::fromUtf8("loading"));
        loading->setPixmap(QPixmap(QString::fromUtf8(":/pic/loading.gif")));
        loading->setScaledContents(false);

        horizontalLayout_3->addWidget(loading);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_12->addWidget(widget_16);

        widget_17 = new QWidget(rank_wait);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        horizontalLayout_7 = new QHBoxLayout(widget_17);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        cancel = new QPushButton(widget_17);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font7.setPointSize(12);
        cancel->setFont(font7);

        horizontalLayout_7->addWidget(cancel);


        verticalLayout_12->addWidget(widget_17);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_9);

        stackedWidget->addWidget(rank_wait);
        rank_running = new QWidget();
        rank_running->setObjectName(QString::fromUtf8("rank_running"));
        verticalLayout_14 = new QVBoxLayout(rank_running);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_14->addItem(verticalSpacer_3);

        widget = new QWidget(rank_running);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget_11 = new QWidget(widget);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(20);
        sizePolicy4.setHeightForWidth(widget_11->sizePolicy().hasHeightForWidth());
        widget_11->setSizePolicy(sizePolicy4);
        verticalLayout_15 = new QVBoxLayout(widget_11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        enemyScore = new QLabel(widget_11);
        enemyScore->setObjectName(QString::fromUtf8("enemyScore"));
        enemyScore->setFont(font2);

        verticalLayout_15->addWidget(enemyScore);

        selfScore = new QLabel(widget_11);
        selfScore->setObjectName(QString::fromUtf8("selfScore"));
        selfScore->setFont(font2);

        verticalLayout_15->addWidget(selfScore);


        horizontalLayout_4->addWidget(widget_11);

        lcdNumber_2 = new QLCDNumber(widget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        horizontalLayout_4->addWidget(lcdNumber_2);


        verticalLayout_14->addWidget(widget);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_16);

        rankQuestion = new QTextBrowser(rank_running);
        rankQuestion->setObjectName(QString::fromUtf8("rankQuestion"));
        rankQuestion->setFont(font);
        rankQuestion->setTabStopWidth(80);

        verticalLayout_14->addWidget(rankQuestion);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_15);

        widget_2 = new QWidget(rank_running);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        rankSelectButton1 = new QPushButton(widget_2);
        rankSelectButton1->setObjectName(QString::fromUtf8("rankSelectButton1"));
        rankSelectButton1->setFont(font);

        verticalLayout_3->addWidget(rankSelectButton1);

        rankSelectButton2 = new QPushButton(widget_2);
        rankSelectButton2->setObjectName(QString::fromUtf8("rankSelectButton2"));
        rankSelectButton2->setFont(font);

        verticalLayout_3->addWidget(rankSelectButton2);

        rankSelectButton3 = new QPushButton(widget_2);
        rankSelectButton3->setObjectName(QString::fromUtf8("rankSelectButton3"));
        rankSelectButton3->setFont(font);

        verticalLayout_3->addWidget(rankSelectButton3);

        rankSelectButton4 = new QPushButton(widget_2);
        rankSelectButton4->setObjectName(QString::fromUtf8("rankSelectButton4"));
        rankSelectButton4->setFont(font);

        verticalLayout_3->addWidget(rankSelectButton4);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_14);


        verticalLayout_14->addWidget(widget_2);

        stackedWidget->addWidget(rank_running);
        rank_Result = new QWidget();
        rank_Result->setObjectName(QString::fromUtf8("rank_Result"));
        verticalLayout_17 = new QVBoxLayout(rank_Result);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalSpacer_4 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_17->addItem(verticalSpacer_4);

        widget_12 = new QWidget(rank_Result);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        verticalLayout_4 = new QVBoxLayout(widget_12);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        RankResult = new QLabel(widget_12);
        RankResult->setObjectName(QString::fromUtf8("RankResult"));

        verticalLayout_4->addWidget(RankResult);


        verticalLayout_17->addWidget(widget_12);

        widget_13 = new QWidget(rank_Result);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        verticalLayout_16 = new QVBoxLayout(widget_13);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        NewRank = new QLabel(widget_13);
        NewRank->setObjectName(QString::fromUtf8("NewRank"));
        NewRank->setFont(font);

        verticalLayout_16->addWidget(NewRank);


        verticalLayout_17->addWidget(widget_13);

        widget_14 = new QWidget(rank_Result);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        horizontalLayout_5 = new QHBoxLayout(widget_14);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton = new QPushButton(widget_14);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy5);
        pushButton->setFont(font1);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(30, 30));

        horizontalLayout_5->addWidget(pushButton);


        verticalLayout_17->addWidget(widget_14);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_17->addItem(verticalSpacer_5);

        stackedWidget->addWidget(rank_Result);

        verticalLayout_18->addWidget(stackedWidget);


        retranslateUi(training);

        stackedWidget->setCurrentIndex(7);
        back_to_main->setDefault(false);


        QMetaObject::connectSlotsByName(training);
    } // setupUi

    void retranslateUi(QDialog *training)
    {
        training->setWindowTitle(QCoreApplication::translate("training", "\346\226\207\345\214\226\350\257\276\351\227\257\345\205\263", nullptr));
        label_5->setText(QString());
        username->setText(QCoreApplication::translate("training", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\347\224\250\346\210\267\345\220\215</span></p></body></html>", nullptr));
        singleButton->setText(QCoreApplication::translate("training", "\344\270\252\344\272\272\346\226\207\345\214\226\347\237\245\350\257\206\351\227\257\345\205\263", nullptr));
        rankButton->setText(QCoreApplication::translate("training", "\345\217\214\344\272\272\345\257\271\346\210\230\346\216\222\344\275\215\350\265\233", nullptr));
        label_7->setText(QString());
        chinese_btn->setText(QCoreApplication::translate("training", "\350\257\255\346\226\207\347\237\245\350\257\206\351\227\257\345\205\263", nullptr));
        math_btn->setText(QCoreApplication::translate("training", "\346\225\260\345\255\246\347\237\245\350\257\206\351\227\257\345\205\263", nullptr));
        english_btn->setText(QCoreApplication::translate("training", "\350\213\261\350\257\255\347\237\245\350\257\206\351\227\257\345\205\263", nullptr));
        label_6->setText(QString());
        label_8->setText(QString());
        back_to_main->setText(QString());
        label_11->setText(QString());
        label_13->setText(QString());
        label_10->setText(QString());
        label_9->setText(QString());
        label->setText(QCoreApplication::translate("training", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt;\">\344\275\240\351\234\200\350\246\201\350\277\236\347\273\255\347\255\224\345\257\2715\351\201\223\351\242\230</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("training", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\347\255\224\351\224\231\347\246\273\345\274\200\357\274\214\347\255\224\345\257\271\347\273\247\347\273\255</span></p></body></html>", nullptr));
        single_start->setText(QCoreApplication::translate("training", "\345\274\200\345\247\213\347\255\224\351\242\230", nullptr));
        single_back->setText(QCoreApplication::translate("training", "\350\277\224\345\233\236", nullptr));
        label_4->setText(QCoreApplication::translate("training", "\344\270\252\344\272\272\351\227\257\345\205\263", nullptr));
        single_SelectButton_one->setText(QCoreApplication::translate("training", "A", nullptr));
        single_SelectButton_two->setText(QCoreApplication::translate("training", "B", nullptr));
        single_SelectButton_three->setText(QCoreApplication::translate("training", "C", nullptr));
        single_SelectButton_four->setText(QCoreApplication::translate("training", "D", nullptr));
        single_Result_Score->setText(QCoreApplication::translate("training", "\345\210\206\346\225\260", nullptr));
        singnal_score_backButton->setText(QCoreApplication::translate("training", "\350\277\224 \345\233\236 \345\210\227 \350\241\250", nullptr));
        single_Result->setText(QCoreApplication::translate("training", "\345\233\276\346\240\207", nullptr));
        single_Result2->setText(QCoreApplication::translate("training", "\346\226\207\345\255\227", nullptr));
        user_rank->setText(QCoreApplication::translate("training", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("training", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; font-weight:600;\">\346\255\243\345\234\250\344\270\272\344\275\240\345\214\271\351\205\215\345\257\271\346\211\213...</span></p></body></html>", nullptr));
        loading->setText(QString());
        cancel->setText(QCoreApplication::translate("training", "\345\217\226\346\266\210\345\214\271\351\205\215", nullptr));
        enemyScore->setText(QCoreApplication::translate("training", "\347\216\213\345\255\220 \346\256\265\344\275\215\357\274\232\351\273\204\351\207\2211 1\351\242\227\346\230\237 160\345\210\206", nullptr));
        selfScore->setText(QCoreApplication::translate("training", "\347\201\260\344\272\214 \346\256\265\344\275\215\357\274\232\347\231\275\351\223\2662 2\351\242\227\346\230\237 100\345\210\206", nullptr));
        rankSelectButton1->setText(QCoreApplication::translate("training", "A", nullptr));
        rankSelectButton2->setText(QCoreApplication::translate("training", "B", nullptr));
        rankSelectButton3->setText(QCoreApplication::translate("training", "C", nullptr));
        rankSelectButton4->setText(QCoreApplication::translate("training", "D", nullptr));
        RankResult->setText(QCoreApplication::translate("training", "<html><head/><body><p align=\"center\">win/lose</p><p align=\"center\"><br/></p></body></html>", nullptr));
        NewRank->setText(QCoreApplication::translate("training", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\351\273\204\351\207\2211 2\351\242\227\346\230\237 --&gt; \351\273\204\351\207\2211 3\351\242\227\346\230\237</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("training", "\350\277\224 \345\233\236 \344\270\273 \351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class training: public Ui_training {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINING_H
