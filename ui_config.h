/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created: Mon 25. Jan 13:10:23 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_config
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *lstList;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *txtItem;
    QPushButton *btnAdd;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnDel;
    QPushButton *btnClose;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bntOrder;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnDown;
    QLabel *label_3;
    QPushButton *btnUp;

    void setupUi(QDialog *config)
    {
        if (config->objectName().isEmpty())
            config->setObjectName(QString::fromUtf8("config"));
        config->resize(360, 580);
        gridLayout = new QGridLayout(config);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(config);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        lstList = new QListWidget(config);
        lstList->setObjectName(QString::fromUtf8("lstList"));

        verticalLayout->addWidget(lstList);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(config);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        txtItem = new QLineEdit(config);
        txtItem->setObjectName(QString::fromUtf8("txtItem"));

        horizontalLayout_2->addWidget(txtItem);

        btnAdd = new QPushButton(config);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setMaximumSize(QSize(48, 48));
        btnAdd->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon);
        btnAdd->setIconSize(QSize(40, 40));
        btnAdd->setFlat(false);

        horizontalLayout_2->addWidget(btnAdd);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnDel = new QPushButton(config);
        btnDel->setObjectName(QString::fromUtf8("btnDel"));
        btnDel->setMaximumSize(QSize(16777215, 64));
        btnDel->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/editcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDel->setIcon(icon1);
        btnDel->setIconSize(QSize(48, 48));
        btnDel->setFlat(false);

        horizontalLayout->addWidget(btnDel);

        btnClose = new QPushButton(config);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setMaximumSize(QSize(16777215, 64));
        btnClose->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon2);
        btnClose->setIconSize(QSize(48, 48));
        btnClose->setFlat(false);

        horizontalLayout->addWidget(btnClose);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        bntOrder = new QPushButton(config);
        bntOrder->setObjectName(QString::fromUtf8("bntOrder"));
        bntOrder->setCheckable(true);
        bntOrder->setChecked(false);

        horizontalLayout_3->addWidget(bntOrder);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btnDown = new QPushButton(config);
        btnDown->setObjectName(QString::fromUtf8("btnDown"));
        btnDown->setMaximumSize(QSize(48, 48));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDown->setIcon(icon3);
        btnDown->setIconSize(QSize(40, 40));

        horizontalLayout_4->addWidget(btnDown);

        label_3 = new QLabel(config);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_3);

        btnUp = new QPushButton(config);
        btnUp->setObjectName(QString::fromUtf8("btnUp"));
        btnUp->setMaximumSize(QSize(48, 48));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUp->setIcon(icon4);
        btnUp->setIconSize(QSize(40, 40));

        horizontalLayout_4->addWidget(btnUp);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(config);
        QObject::connect(btnClose, SIGNAL(clicked()), config, SLOT(reject()));

        QMetaObject::connectSlotsByName(config);
    } // setupUi

    void retranslateUi(QDialog *config)
    {
        config->setWindowTitle(QApplication::translate("config", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("config", "Objetos para confeccionar la lista", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("config", "Nuevo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnAdd->setToolTip(QApplication::translate("config", "Add", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAdd->setText(QString());
        btnDel->setText(QString());
        btnClose->setText(QString());
        bntOrder->setText(QApplication::translate("config", "Ordenar lista", 0, QApplication::UnicodeUTF8));
        btnDown->setText(QString());
        label_3->setText(QApplication::translate("config", "Fuente", 0, QApplication::UnicodeUTF8));
        btnUp->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class config: public Ui_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
