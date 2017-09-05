/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinClass.h
 * Author: Dell
 *
 * Created on 2 de septiembre de 2017, 17:46
 */

#ifndef BINCLASS_H
#define BINCLASS_H
#include "FetchClass.h"
#include "SortClass.h"
#pragma once
#include <iostream>

class BinClass:FetchClass {
public:
     
    void BinClass();
    int bFecth(int e);
    static int bFecth(int a[],int e);
private:

};

#endif /* BINCLASS_H */

