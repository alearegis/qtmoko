/****************************************************************************
**
** Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain
** additional rights. These rights are described in the Nokia Qt LGPL
** Exception version 1.0, included in the file LGPL_EXCEPTION.txt in this
** package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at http://www.qtsoftware.com/contact.
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef BASICTOOLSPLUGIN_H
#define BASICTOOLSPLUGIN_H

#include <QRect>
#include <QObject>
#include <QStringList>
#include <QPainterPath>
#include <QImage>

//! [0]
#include <plugandpaint/interfaces.h>

//! [1]
class BasicToolsPlugin : public QObject,
                         public BrushInterface,
                         public ShapeInterface,
                         public FilterInterface
{
    Q_OBJECT
    Q_INTERFACES(BrushInterface ShapeInterface FilterInterface)
//! [0]

//! [2]
public:
//! [1]
    // BrushInterface
    QStringList brushes() const;
    QRect mousePress(const QString &brush, QPainter &painter,
                     const QPoint &pos);
    QRect mouseMove(const QString &brush, QPainter &painter,
                    const QPoint &oldPos, const QPoint &newPos);
    QRect mouseRelease(const QString &brush, QPainter &painter,
                       const QPoint &pos);

    // ShapeInterface
    QStringList shapes() const;
    QPainterPath generateShape(const QString &shape, QWidget *parent);

    // FilterInterface
    QStringList filters() const;
    QImage filterImage(const QString &filter, const QImage &image,
                       QWidget *parent);
//! [3]
};
//! [2] //! [3]

#endif
