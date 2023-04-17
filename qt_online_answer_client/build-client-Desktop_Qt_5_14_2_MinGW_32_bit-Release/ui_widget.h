/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QWidget *widget_5;
    QGridLayout *gridLayout;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *PasswdlineEdit;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *UserlineEdit;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *StartButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *RegisterButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setEnabled(true);
        Widget->resize(650, 430);
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        Widget->setFont(font);
        Widget->setMouseTracking(true);
        Widget->setTabletTracking(true);
        Widget->setContextMenuPolicy(Qt::ActionsContextMenu);
        Widget->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pic/logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setStyleStrategy(QFont::PreferAntialias);
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);


        verticalLayout->addWidget(widget);

        widget_5 = new QWidget(Widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout = new QGridLayout(widget_5);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(16);
        font2.setStyleStrategy(QFont::PreferAntialias);
        label_2->setFont(font2);

        horizontalLayout_4->addWidget(label_2);

        PasswdlineEdit = new QLineEdit(widget_4);
        PasswdlineEdit->setObjectName(QString::fromUtf8("PasswdlineEdit"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(14);
        font3.setStyleStrategy(QFont::PreferAntialias);
        PasswdlineEdit->setFont(font3);
        PasswdlineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        PasswdlineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(PasswdlineEdit);


        gridLayout->addWidget(widget_4, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        widget_2 = new QWidget(widget_5);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font2);

        horizontalLayout_3->addWidget(label);

        UserlineEdit = new QLineEdit(widget_2);
        UserlineEdit->setObjectName(QString::fromUtf8("UserlineEdit"));
        UserlineEdit->setFont(font3);

        horizontalLayout_3->addWidget(UserlineEdit);


        gridLayout->addWidget(widget_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        verticalLayout->addWidget(widget_5);

        widget_3 = new QWidget(Widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        StartButton = new QPushButton(widget_3);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        StartButton->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(20);
        sizePolicy.setHeightForWidth(StartButton->sizePolicy().hasHeightForWidth());
        StartButton->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font4.setPointSize(14);
        font4.setStyleStrategy(QFont::PreferAntialias);
        StartButton->setFont(font4);
        StartButton->setIconSize(QSize(20, 20));
        StartButton->setAutoRepeatDelay(300);
        StartButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(StartButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        RegisterButton = new QPushButton(widget_3);
        RegisterButton->setObjectName(QString::fromUtf8("RegisterButton"));
        RegisterButton->setFont(font4);
        RegisterButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(RegisterButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_3);


        retranslateUi(Widget);

        StartButton->setDefault(false);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt;\">\346\254\242\350\277\216\347\231\273\345\275\225</span></p><p align=\"center\"><span style=\" font-size:22pt;\">\346\226\207\345\214\226\350\257\276\351\227\257\345\205\263\346\270\270\346\210\217</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\257\206  \347\240\201\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\347\224\250\346\210\267\345\220\215\357\274\232</p></body></html>", nullptr));
        UserlineEdit->setText(QString());
        StartButton->setText(QCoreApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        RegisterButton->setText(QCoreApplication::translate("Widget", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
