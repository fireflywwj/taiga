/*
** Taiga, a lightweight client for MyAnimeList
** Copyright (C) 2010-2012, Eren Okka
** 
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
** 
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
** 
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ANIME_LIST_USER_H
#define ANIME_LIST_USER_H

#include "base/std.h"

namespace anime {

class Database;

class User {
 public:
  User();
  virtual ~User() {}

  int id;
  wstring name;
};

class ListUser {
 public:
  ListUser();
  virtual ~ListUser() {}

  void Clear();
  
  int GetId() const;
  int GetItemCount(int status, bool check_events = true) const;
  const wstring& GetName() const;

  void SetId(int id);
  void SetName(const wstring& name);

 private:
  User user_;
  static Database* database_;
};

} // namespace anime

#endif // ANIME_LIST_USER_H