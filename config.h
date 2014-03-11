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

#ifndef CONFIG_H
#define CONFIG_H

#include <QtGui/QDialog>

#include <QListWidgetItem>

namespace Ui
{
  class config;
}

class config : public QDialog
{
  Q_OBJECT
  Q_DISABLE_COPY(config)

public:
  explicit config(QWidget *parent = 0);
  virtual ~config();

protected:
  virtual void changeEvent(QEvent *e);

private:
  Ui::config *m_ui;

  void readSettings();
  void writeSettings();

private slots:
  void on_btnClose_clicked();
  void on_btnDel_clicked();
  void on_btnAdd_clicked();
  void on_btnUp_clicked();
  void on_btnDown_clicked();
  void on_bntOrder_toggled(bool checked);
  void on_lstList_itemClicked(QListWidgetItem* item);
};

#endif // CONFIG_H
