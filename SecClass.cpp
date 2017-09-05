/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SecClass.cpp
 * Author: Dell
 * 
 * Created on 2 de septiembre de 2017, 17:32
 */
#include "FetchClass.h"
#include "SecClass.h"
#include <iostream>

SecClass::SecClass() {
}
SecClass::SFetch(int e) {  //Se   Se recibe el  dato por encontrar
    SFetch(myArray,e); //Se llma al métod bFecth pero está ves ya se tiene preestablecido el array
}
SecClass::SFecth(int a[],int e) {  //Se reibe el array y el dato
         for (int i=0;i<sizeof(a);i++){    //Se corre el for 
            if(e==a[i]){    //Si el valor en el puntero i es igual al dato buscado se regresa el valor
                return i;
            }
           
        }
         return -1;   //Si no se regresa-1
    
}




