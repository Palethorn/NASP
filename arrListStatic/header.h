/* 
 * File:   header.h
 * Author: david
 *
 * Created on March 25, 2011, 8:03 PM
 */
#pragma once
#ifndef ARRAYLIST_H
#define ARRAYLIST_H
    int insert(int list[],int element, int position, int *last);
    int rm(int list[], int position, int *last);
    void flush(int list[], int *last);
    void printAll(int list[], int last);
    void print(int list[], int position, int last);
    int find(int list[], int element, int last);
#endif