/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FetchClass.cpp
 * Author: Dell
 * 
 * Created on 1 de septiembre de 2017, 20:59
 */
#include <iostream>
#include <stdio.h>
#include "FetchClass.h"
#include <time.h>
#include <string>

using namespace std;

FetchClass::fetchClass() {
    
}

FetchClass::setArray(int a []) { //Setter
    this->myArray=a;
}

FetchClass::getArray() { //Getter
    return myArray;
}
FetchClass::showArray() {
    showArray(myArray);    //Se llama al metódo show array solo que en este caso ya está predifinido el arreglo
    
}
FetchClass::showFetch(int position) { //Recibe la posción
     if(position==-1)
        {
            printf("El dato no se encuetra dentro del vector");      //Si es igual a -1 se establece que no se encuetra el dato  
        }
        else
        {  //De lo contrario  se rregresa el dato 
            printf("El dato  se encuentra dentro del  vector " + myArray[position] ) ;
        }
}
FetchClass::showArray(int a []) { //Se recibe el array
    int i;
    for(i=0;i<sizeof(a)-1;i++){  //Se corre el for y se van imprimiendo los datos 
        cout<<a[i]<<"\n";
    }
    
}
FetchClass::RandArray(int size){ //Se recibbe el tamaño del arreglo
srand(time(NULL));  
int*newArray= new int[size]; //Se crea un array con el tamño del arreglo
for (int i=0;i<sizeof(newArray);i++){ //Se corre el for
   newArray[i] =(int)( srand() % 100+1);  //Se van rellenado el array
}
    
  return newArray;  //Se regresa el array
    
}
