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

#include "basket.h"
#include "ui_basket.h"

// My own forms
#include "config.h"
#include "editlist.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream.h>
#include <QSettings>

// Filename for list of user selected items
const QString FILENAME_USERLIST = "ListMe_userlist.dat";

// Constructor (automatically added from QT Creator)
// Read items from user list and show it on list
basket::basket(QWidget *parent) : QDialog(parent), ui(new Ui::basketClass)
{
  ui->setupUi(this);

  readSettings();

  loadData();
}

// Destructor (automatically added from QT Creator)
basket::~basket()
{
  delete ui;
}

// Method to read settings
void basket::readSettings() {
  QSettings settings;
  int cfgFontSize = settings.value("fontSize", 8).toInt();

  // Set the font
  QFont myFont(ui->lstList->font().family(), cfgFontSize);
  ui->lstList->setFont(myFont);
}

// Read items from user list and show it on list
void basket::loadData()
{
  // Prepare the file to use
  QString fileName = "C://" + FILENAME_USERLIST;
  QFile file(fileName);

  // Clear possible data
  ui->lstList->clear();

  // Test if file can be open for read
  if (file.open(QIODevice::ReadOnly)) {
    // Read data on the file and load into the list
    QTextStream in(&file);
    while (!in.atEnd()) {
      // We read line-to-line
      QString line = in.readLine();

      // Create an item so we can set properties
      QListWidgetItem *item = new QListWidgetItem;
      item->setText(QString(line));
      item->setCheckState(Qt::Unchecked);

      // Add item to list
      ui->lstList->addItem(item);
    }
    file.close();
  }
}

// (slot automatically added from QT Creator with menu "go to slot...")
void basket::on_btnEditar_clicked()
{
  // My code here
  // Call edit list dialog, passing a reference to basket so we can send a signal
  editList dlg(this);
#ifdef Q_WS_S60
  dlg.showFullScreen();
#else
  dlg.showNormal();
#endif
  dlg.exec();

  // Reload data
  //loadData();
}

// (slot automatically added from QT Creator with menu "go to slot...")
void basket::on_btnConfig_clicked()
{
  // My code here
  // Call configuration dialog
  config dlg;
#ifdef Q_WS_S60
  dlg.showFullScreen();
#else
  dlg.showNormal();
#endif
  dlg.exec();
}

// Just make an empty list
void basket::on_btnVaciar_clicked()
{
  // Prepare the file to use
  QString fileName = "C://" + FILENAME_USERLIST;
  QFile file(fileName);

  // Test if file can be open for save
  if (!file.open(QIODevice::WriteOnly)) {
    QMessageBox::information(this, tr("Unable to open file for save"), tr("Cannot open the file for save the items: ") + file.errorString());

  } else {
    file.close();

    // Clear possible data
    ui->lstList->clear();
  }
}

// Re-save list only with unchecked items
void basket::on_btnVaciarChk_clicked()
{
  // Prepare the file to use
  QString fileName = "C://" + FILENAME_USERLIST;
  QFile file(fileName);

  // Test if file can be open for save
  if (!file.open(QIODevice::WriteOnly)) {
    QMessageBox::information(this, tr("Unable to open file for save"), tr("Cannot open the file for save the items: ") + file.errorString());

  } else {
    // Save data on the list with unchecked items
    QTextStream out(&file);
    for (int i = 0; i < ui->lstList->count(); i++) {
      // Save only unchecked items
      if (ui->lstList->item(i)->checkState() == Qt::Unchecked) {
        out << ui->lstList->item(i)->text() << endl;
      }
    }
    file.close();

    // Reload data
    loadData();
  }
}

// Hide/Show checked items from user
void basket::on_btnShow_toggled(bool checked)
{
  if (checked) {
    // Checked, show all items
    for (int i = 0; i < ui->lstList->count(); i++) {
      ui->lstList->item(i)->setHidden(false);
    }
  } else {
    // Unchecked, show only unchecked (pending) items
    for (int i = 0; i < ui->lstList->count(); i++) {
      ui->lstList->item(i)->setHidden(ui->lstList->item(i)->checkState());
    }
  }
}

// To reproduce auto-check with one click on item instead on checkbox area
void basket::on_lstList_itemClicked(QListWidgetItem* item)
{
  item->setCheckState( item->checkState() == Qt::Checked ? Qt::Unchecked : Qt::Checked );
}

// When the user checks an item, hide it automatically, unless user wants to see all.
void basket::on_lstList_itemChanged(QListWidgetItem* item)
{
  if (!ui->btnShow->isChecked() && item->checkState() == Qt::Checked) {
    item->setHidden(true);
  }
}
