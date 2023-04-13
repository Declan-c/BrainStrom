/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *UserlineEdit;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *PasswdlineEdit;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *RegisterButton;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *BackButton;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(650, 430);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pic/logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Register->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(Register);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(Register);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(36);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);


        verticalLayout_2->addWidget(widget);

        widget_5 = new QWidget(Register);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        verticalLayout = new QVBoxLayout(widget_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(widget_5);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(16);
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);

        UserlineEdit = new QLineEdit(widget_2);
        UserlineEdit->setObjectName(QString::fromUtf8("UserlineEdit"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(14);
        UserlineEdit->setFont(font2);

        horizontalLayout_2->addWidget(UserlineEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_2);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout_4->addWidget(label_2);

        PasswdlineEdit = new QLineEdit(widget_4);
        PasswdlineEdit->setObjectName(QString::fromUtf8("PasswdlineEdit"));
        PasswdlineEdit->setFont(font2);
        PasswdlineEdit->setEchoMode(QLineEdit::Normal);

        horizontalLayout_4->addWidget(PasswdlineEdit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_4);


        verticalLayout_2->addWidget(widget_5);

        widget_3 = new QWidget(Register);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        RegisterButton = new QPushButton(widget_3);
        RegisterButton->setObjectName(QString::fromUtf8("RegisterButton"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(14);
        RegisterButton->setFont(font3);

        horizontalLayout_3->addWidget(RegisterButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        BackButton = new QPushButton(widget_3);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        BackButton->setFont(font3);

        horizontalLayout_3->addWidget(BackButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_2->addWidget(widget_3);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
        label_3->setText(QCoreApplication::translate("Register", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">\346\254\242\350\277\216\346\263\250\345\206\214</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Register", "<html><head/><body><p align=\"center\">\347\224\250\346\210\267\345\220\215\357\274\232</p></body></html>", nullptr));
        UserlineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("Register", "\345\257\206  \347\240\201\357\274\232", nullptr));
        RegisterButton->setText(QCoreApplication::translate("Register", "\347\253\213\345\215\263\346\263\250\345\206\214", nullptr));
        BackButton->setText(QCoreApplication::translate("Register", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
