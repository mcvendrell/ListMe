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

#include <QtGui/QApplication>
#include "basket.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  app.setOrganizationName("SimpleSoft");
  app.setOrganizationDomain("simplesoft.es");
  app.setApplicationName("ListMe");

  basket dlg;
#ifdef Q_WS_S60
  dlg.showFullScreen();
#else
  dlg.showNormal();
#endif
  return app.exec();
}
