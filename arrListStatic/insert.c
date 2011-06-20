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
#include "additional.h"
int insert(int list[],int element, int position, int *last){
    int i;
    if((position < 0) || (position > (*last + 1)) || ((*last + 1) >= SIZE)){
        printf("Error! Position value out of bounds or no space available.\n");
        return 0;
    }
    for(i = *last + 1; i > 0 && i != position; i--){
        list[i] = list[i-1];
    }
    list[position] = element;
    (*last)++;
    return 1;
}