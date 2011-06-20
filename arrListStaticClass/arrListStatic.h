/*
    List implemented using static array
    Copyright (C) 2011  David Ćavar

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef ARRLISTSTATIC_H
#define	ARRLISTSTATIC_H
#include <stdio.h>
class arrListStatic {
private:
    int list[5], size, last;
public:
    arrListStatic();
    virtual ~arrListStatic();
    int insert(int element, int position);
    int rm(int position);
    void printAll();
    void flush();
};
#endif	/* ARRLISTSTATIC_H */

