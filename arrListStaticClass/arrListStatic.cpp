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
#include "arrListStatic.h"

arrListStatic::arrListStatic() {
    this->size = 5;
    this->flush();
}
int arrListStatic::insert(int element, int position){
    int i;
    if((position < 0) || (position > this->last + 1) || (this->last + 1 >= this->size)){
        printf("Error! Position value out of bounds or no space available.\n");
        return 0;
    }
    for(i = this->last + 1; i > 0 && i != position; i--){
        this->list[i] = this->list[i-1];
    }
    this->list[position] = element;
    this->last++;
    return 1;
}
int arrListStatic::rm(int position){
    int i;
    if(position > this->last || position < 0){
        printf("Error!\n");
        return 0;
    }
    for(i = position; i < this->last; i++){
        this->list[i] = this->list[i+1];
    }
    this->last--;
}
void arrListStatic::printAll(){
    int i;
    for(i = 0; i <= this->last; i++){
        printf("Element na poziciji %d je %d\n",i,this->list[i]);
    }
}
void arrListStatic::flush(){
    int i;
    for(i = 0; i < this->size; i++){
        this->list[i] = 0;
    }
    this->last = -1;
}
arrListStatic::~arrListStatic() {
    
}