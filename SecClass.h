/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SecClass.h
 * Author: Dell
 *
 * Created on 2 de septiembre de 2017, 17:32
 */

#ifndef SECCLASS_H
#define SECCLASS_H
#pragma once
#include<iostream>
#include "FetchClass.h"
class SecClass: public FetchClass  {
public:
  
    void SecClass();
    int SFetch(int e);
    static int SFecth(int a[],int e);
    
private:

};

#endif /* SECCLASS_H */

