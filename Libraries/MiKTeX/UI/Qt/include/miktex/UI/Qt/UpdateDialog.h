/* miktex/UI/Qt/UpdateDialog.h:                         -*- C++ -*-

   Copyright (C) 2008-2018 Christian Schenk

   This file is part of the MiKTeX UI Library.

   The MiKTeX UI Library is free software; you can redistribute it
   and/or modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2, or
   (at your option) any later version.

   The MiKTeX UI Library is distributed in the hope that it will be
   useful, but WITHOUT ANY WARRANTY; without even the implied warranty
   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with the MiKTeX UI Library; if not, write to the Free
   Software Foundation, 59 Temple Place - Suite 330, Boston, MA
   02111-1307, USA. */

#pragma once

#include "Prototypes"

#include <memory>
#include <string>
#include <vector>

#include <miktex/PackageManager/PackageManager>

class QWidget;

MIKTEX_UI_QT_BEGIN_NAMESPACE;

class MIKTEXNOVTABLE UpdateDialog
{
public:
  UpdateDialog() = delete;

public:
  UpdateDialog(const UpdateDialog& other) = delete;

public:
  UpdateDialog& operator=(const UpdateDialog& other) = delete;

public:
  UpdateDialog(UpdateDialog&& other) = delete;

public:
  UpdateDialog& operator=(UpdateDialog&& other) = delete;

public:
  ~UpdateDialog() = delete;

public:
  static MIKTEXUIQTCEEAPI(int) DoModal(QWidget* parent, std::shared_ptr<MiKTeX::Packages::PackageManager> packageManager, const std::vector<std::string>& toBeInstalled, const std::vector<std::string>& toBeRemoved);
};

MIKTEX_UI_QT_END_NAMESPACE;
