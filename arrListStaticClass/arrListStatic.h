/* 
 * File:   arrListStatic.h
 * Author: david
 *
 * Created on March 29, 2011, 10:57 PM
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

