/****************************************************************************
**
** Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the tools applications of the Qt Toolkit.
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

#ifndef PALETTEEDITORADVANCEDBASE_H
#define PALETTEEDITORADVANCEDBASE_H

#include "ui_paletteeditoradvancedbase.h"
#include <QVariant>

QT_BEGIN_NAMESPACE

class ColorButton;

class PaletteEditorAdvancedBase : public QDialog, public Ui::PaletteEditorAdvancedBase
{
    Q_OBJECT

public:
    PaletteEditorAdvancedBase(QWidget* parent = 0, const char* name = 0, bool modal = false, Qt::WindowFlags fl = 0);
    ~PaletteEditorAdvancedBase();

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();
    virtual void onCentral(int);
    virtual void onChooseCentralColor();
    virtual void onChooseEffectColor();
    virtual void onEffect(int);
    virtual void onToggleBuildDisabled(bool);
    virtual void onToggleBuildEffects(bool);
    virtual void onToggleBuildInactive(bool);
    virtual void paletteSelected(int);

};

QT_END_NAMESPACE

#endif // PALETTEEDITORADVANCEDBASE_H