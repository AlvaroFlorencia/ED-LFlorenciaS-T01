/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SortClass.h
 * Author: Dell
 *
 * Created on 1 de septiembre de 2017, 22:38
 */

#ifndef SORTCLASS_H
#define SORTCLASS_H

class SortClass {
public:
    void selection(int a[]);
    void insertion(int a[]);
    void bubble(int a[]);
    void quickSort(int a[],int i,int f);
    void mergeSort(int a[],int a,int b);
    void merge(int a[],int a, int medio, int b);
private:

};

#endif /* SORTCLASS_H */

