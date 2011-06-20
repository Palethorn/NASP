/*
    List implemented using dynamic array
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
#ifndef ARRAYLIST_H
#define ARRAYLIST_H
	int insert(int **list,int element, int position, int *size);
	int rm(int **list, int position, int *size);
	void delAll(int **list, int *size);
	void print(int *list, int size);
	int find(int *list, int element, int size);
	int allocate(int **list);
#endif
