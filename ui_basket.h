/********************************************************************************
** Form generated from reading UI file 'basket.ui'
**
** Created: Mon 25. Jan 11:57:23 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASKET_H
#define UI_BASKET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_basketClass
{
public:
    QGridLayout *gridLayout;
    QListWidget *lstList;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnEditar;
    QPushButton *btnShow;
    QPushButton *btnConfig;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnVaciarChk;
    QPushButton *btnVaciar;
    QPushButton *btnExit;

    void setupUi(QDialog *basketClass)
    {
        if (basketClass->objectName().isEmpty())
            basketClass->setObjectName(QString::fromUtf8("basketClass"));
        basketClass->resize(360, 580);
        gridLayout = new QGridLayout(basketClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lstList = new QListWidget(basketClass);
        lstList->setObjectName(QString::fromUtf8("lstList"));
        QFont font;
        font.setPointSize(8);
        lstList->setFont(font);
        lstList->setSortingEnabled(false);

        gridLayout->addWidget(lstList, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnEditar = new QPushButton(basketClass);
        btnEditar->setObjectName(QString::fromUtf8("btnEditar"));
        btnEditar->setMaximumSize(QSize(16777215, 64));
        btnEditar->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditar->setIcon(icon);
        btnEditar->setIconSize(QSize(64, 64));
        btnEditar->setFlat(false);

        horizontalLayout->addWidget(btnEditar);

        btnShow = new QPushButton(basketClass);
        btnShow->setObjectName(QString::fromUtf8("btnShow"));
        btnShow->setMaximumSize(QSize(16777215, 64));
        btnShow->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/viewmag+.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/icons/icons/viewmag-.png"), QSize(), QIcon::Normal, QIcon::On);
        btnShow->setIcon(icon1);
        btnShow->setIconSize(QSize(64, 64));
        btnShow->setCheckable(true);
        btnShow->setFlat(false);

        horizontalLayout->addWidget(btnShow);

        btnConfig = new QPushButton(basketClass);
        btnConfig->setObjectName(QString::fromUtf8("btnConfig"));
        btnConfig->setMaximumSize(QSize(16777215, 64));
        btnConfig->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/config.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnConfig->setIcon(icon2);
        btnConfig->setIconSize(QSize(64, 64));
        btnConfig->setFlat(false);

        horizontalLayout->addWidget(btnConfig);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnVaciarChk = new QPushButton(basketClass);
        btnVaciarChk->setObjectName(QString::fromUtf8("btnVaciarChk"));
        btnVaciarChk->setMaximumSize(QSize(16777215, 64));
        btnVaciarChk->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/editcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnVaciarChk->setIcon(icon3);
        btnVaciarChk->setIconSize(QSize(64, 64));
        btnVaciarChk->setFlat(false);

        horizontalLayout_2->addWidget(btnVaciarChk);

        btnVaciar = new QPushButton(basketClass);
        btnVaciar->setObjectName(QString::fromUtf8("btnVaciar"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnVaciar->sizePolicy().hasHeightForWidth());
        btnVaciar->setSizePolicy(sizePolicy);
        btnVaciar->setMaximumSize(QSize(16777215, 64));
        btnVaciar->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/restart.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnVaciar->setIcon(icon4);
        btnVaciar->setIconSize(QSize(64, 64));
        btnVaciar->setCheckable(false);
        btnVaciar->setChecked(false);
        btnVaciar->setFlat(false);

        horizontalLayout_2->addWidget(btnVaciar);

        btnExit = new QPushButton(basketClass);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        sizePolicy.setHeightForWidth(btnExit->sizePolicy().hasHeightForWidth());
        btnExit->setSizePolicy(sizePolicy);
        btnExit->setMaximumSize(QSize(16777215, 64));
        btnExit->setStyleSheet(QString::fromUtf8(""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExit->setIcon(icon5);
        btnExit->setIconSize(QSize(64, 64));
        btnExit->setFlat(false);

        horizontalLayout_2->addWidget(btnExit);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(basketClass);
        QObject::connect(btnExit, SIGNAL(clicked()), basketClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(basketClass);
    } // setupUi

    void retranslateUi(QDialog *basketClass)
    {
        basketClass->setWindowTitle(QApplication::translate("basketClass", "basket", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnEditar->setToolTip(QApplication::translate("basketClass", "Edit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnEditar->setText(QString());
        btnEditar->setShortcut(QApplication::translate("basketClass", "Ctrl+S", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnShow->setToolTip(QApplication::translate("basketClass", "See all", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnShow->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnConfig->setToolTip(QApplication::translate("basketClass", "Config", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnConfig->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnVaciarChk->setToolTip(QApplication::translate("basketClass", "Delete items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnVaciarChk->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnVaciar->setToolTip(QApplication::translate("basketClass", "Restart list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnVaciar->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnExit->setToolTip(QApplication::translate("basketClass", "Exit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnExit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class basketClass: public Ui_basketClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASKET_H
