/****************************************************************************
**
** Copyright (C) 2010 Manuel Conde. Spain.
** Contact: Manuel Conde (manu_conde@hotmail.com)
**
** $QT_BEGIN_LICENSE:LGPL$
**
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software Foundation
**
** $QT_END_LICENSE$
**
** This program is made for learn purposes and can be distributed and used freely
** with no cost at all. You only must not remove this text to use this code.
**
** Add you own comments here:
****************************************************************************/

#ifndef BASKET_H
#define BASKET_H

#include <QtGui/QDialog>

#include <QListWidgetItem>

namespace Ui {
  class basketClass;
}

class basket : public QDialog {
  Q_OBJECT

public:
  basket(QWidget *parent = 0);
  ~basket();

private:
  Ui::basketClass *ui;

  void readSettings();

public slots:
  void loadData();

private slots:
  void on_btnEditar_clicked();
  void on_btnConfig_clicked();
  void on_btnVaciarChk_clicked();
  void on_btnVaciar_clicked();
  void on_btnShow_toggled(bool checked);
  void on_lstList_itemClicked(QListWidgetItem* item);
  void on_lstList_itemChanged(QListWidgetItem* item);
};

#endif // BASKET_H
