/* 
 * File:   arrListStatic.cpp
 * Author: david
 * 
 * Created on March 29, 2011, 10:57 PM
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