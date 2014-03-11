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

#ifndef EDITLIST_H
#define EDITLIST_H

#include "basket.h"

#include <QtGui/QDialog>
#include <QListWidgetItem>

namespace Ui {
  class editList;
}

class editList : public QDialog {
  Q_OBJECT

public:
  editList(QWidget *parent = 0);
  editList(basket *basketFrm, QWidget *parent = 0);
  ~editList();

protected:
  void changeEvent(QEvent *e);

private:
  Ui::editList *m_ui;

  void readSettings();

private slots:
  void on_btnOk_clicked();
  void on_lstList_itemClicked(QListWidgetItem* item);
};

#endif // EDITLIST_H
