/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SortClass.cpp
 * Author: Dell
 * 
 * Created on 1 de septiembre de 2017, 22:38
 */

#include "SortClass.h"
#include <iostream>

SortClass::selection(int a[]){
    int menor,auxiliar;                   //Variables   
         for(int i =0;i<sizeof(a)-1;i++){  //Primer ciclo for en posición i 
             menor=i;                      //Menor se vuelve la posición i
         for(int j=i+1;j<sizeof(a)-1;j++)  //Segundo ciclo for en posición j
            
         {
             if(a[j]<a[menor]){  //Si la posción en j es menor que la posición menor..
                 menor=j;
             }
         }
         a=a[i];   //Auxiliar guarda la posición de i
         a[i]=a[menor];  //La posición de i se vuelve la posición menor
         a[menor]=auxiliar;   //La posición menor se guarda en auxiliar
    }
   //Se regresa el array
 
       }

SortClass::insertion(int a[]) {
    
    int temporal;
          int j = 0;
          
          //Variables   
         for(int i =1;i<sizeof(a)-1;i++){ //Se corre el arreglo
            temporal=a[i];  //En temporal se guarda el valor de i 
            i--;      
        while((j>=0)&&(a[j]>temporal)){  //Mientras j sea igual  a cero y mayot al temporal
            a[j+1]=a[j]; //Se hara el intercambio con el de la izauierda
            j--;
        }
        a[j+1]=temporal;  
    }
    //Se regresa el array
}
SortClass::bubble(int a[]) {
    int auxiliar;
        for(int i =0;i<sizeof(a)-1;i++) //Se corre el arreglo en la posición i
        {
            for(int j =0;j<sizeof(a)-1;j++){  //Se corre el arreglo en la posición j
                if(a[j]>a[j+1]){  //Si el valor actual es mayor que el de la derecha se hace el intercambio
                auxiliar=a[j];  
         a[j]=a[j+1];  
         a[j+1]=auxiliar;  
                }
                
            }
        }
            
  
}

SortClass::quickSort(int a[],int i,int f) {
    
    int i,j,pivote,auxiliar;
    i=i;
    j=f;
    pivote = a[(i+f)/2];  //Se  saca el pivotr sumando el inicio más el f y diviendo entre 2
    do{ 
    while (a[i] < pivote)  //Mientras el valor en i sea menor al pivote
    {
    i++; //Se suma en i
    }
      while (a[j] > pivote) 
      {
     j--;   //Mientras la posción en j sea mayor al pivote se resta en j
    }
   if (i <= j)   //Si  la el vlaor en j es menor que el j se llama al metódo de intercmabio
   {
     auxiliar=a[i];     
       a[i]=a[j];
        a[j]=auxiliar;
    }
                
   } while (i<=j);    //Mientras i sea menor o igual que j se utiliza la recursividad haciendo a j el f
   if (i < j)
   {
   quickSort(i,j);
   }
   if (i < f)   //SI i es menor que el f  se utiliza la recursividad haciendo a i el i
   {
    quickSort(i,f);                   

   }
}
SortClass::mergeSort(int a[],int a,int b) {
    int medio;
if(a[]<b){
     medio=(a+b)/2; //Se divide en 2
            mergeSort(a[],a, medio); //Se vuelve a ordenar usando recursividad 
            mergeSort(a[],medio+1, b);  //Para los dos mitades
            merge(a[],a, medio, b);//   Ya ordenados se llama ala funciòn merge

}  
}
SortClass::merge(int a[],int a, int medio, int b) {
    int i,j,k;
    int auxiliar[];
       for (i=a; i<=b; i++) //Se recorre de izquierda derecha
             auxiliar[i]=a[i];  //En array auxiliar se guarda el valor  de i

             i=a; j=medio+1; k=a; 
             //Se etablecen posiciones
             while (i<=medio && j<=b){  //Mientras que la posiciòn de la izquierda se menor que el  de en medio y la posici``on de enmedio se menor que derecha
             if (auxiliar[i]<= auxiliar [j]){ //Se accede y se pregunta si el valor de i es  menor que el j
                     a[k++]= auxiliar [i++]; //Medio se vueleve izquierda
             }
             else{
                     a[k++]= auxiliar [j++]; //Si no medio se vuelve derecha 
             }
             }
                     while (i<=medio) {
                           a [k++]= auxiliar [i++]; //Mientras i es menor o igual al valro de enmedio,posción en medio es igual a posición la posición de inicio
 
             }
}


