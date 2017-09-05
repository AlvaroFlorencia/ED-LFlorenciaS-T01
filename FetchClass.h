/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FetchClass.h
 * Author: Dell
 *
 * Created on 1 de septiembre de 2017, 20:59
 */

#ifndef FETCHCLASS_H
#define FETCHCLASS_H
#pragma once
#include <iostream>
using namespace std;
class FetchClass {
public:
virtual void fetchClass();  
virtual void setArray(int a []);
virtual int* getArray(); 
virtual void showArray();
virtual void showFetch(int position);
virtual void showArray(int a [] );
protected:
virtual	int*  RandArray(int size);
int myArray[];
};

#endif /* FETCHCLASS_H */

