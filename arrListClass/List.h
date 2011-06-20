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
#pragma once
#include <malloc.h>
#include <iostream>
#ifndef LIST_H
#define LIST_H
class List{
	private:
		int *list,size;
	public:
		List(){
			if(!(list = (int *)malloc(sizeof(int)))) std::cout << "No memory!" << std::endl;
			size = 0;
		}
		int insert(int element, int position){
			int i, *tmp;
			if(position < 0 || position > size) return 0;
			if(!(tmp = (int *)realloc(list, sizeof(int) * (size + 1)))){
				std::cout << "No memory!" << std::endl;
				return 0;
			}
			size++;
			for(i = size - 1; i != position && i > 0; i--){
				tmp[i] = tmp[i - 1];
			}
			tmp[position] = element;
			list = tmp;
			return 1;
		}
		int del(int position){
			int i,*tmp;
			if(position < 0 || position > size - 1) return 0;
			for(i = position; i < size - 1; i++){
				list[i] = list[i + 1];
			}
			if(!(tmp = (int *)realloc(list, sizeof(int) * (size - 1)))){
				std::cout << "Error!" << std::endl; return 0;
			}
			list = tmp;
			size--;
			return 1;
		}
		void print(){
			int i;
			for(i = 0; i < size; i++){
				std::cout << list[i] << std::endl;
			}
		}
		int find(int element){
			int i;
			for(i = 0; i < size; i++){
				if(element == list[i]) return i;
			}
			return -1;
		}
		void purge(){
			free(list);
			list = NULL;
			size = 0;
		}
		~List(){
			free(list);
		}
};
#endif
