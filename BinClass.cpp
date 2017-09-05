/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinClass.cpp
 * Author: Dell
 * 
 * Created on 2 de septiembre de 2017, 17:46
 */

#include "BinClass.h"

BinClass::BinClass() {
    
}
BinClass::bFecth(int e) { //Se   Se recibe el  dato por encontrar
    bFecth(myArray,e); //Se llma al métod bFecth pero está ves ya se tiene preestablecido el array
}

BinClass::bFecth(int a[],int e) {
 SortClass Ordenamiento; //Se instancia la clase sortClass
	
 int method;
	printf("What method to organized the array do you prefer: selection[1] insertion[2]"); 
        printf("bubble[3] quickSort[4] mergeSort[5]:");  // Pidiando al usuario que ingrese el metódo con el cuál se ordenara el arreglo para que la clase funcione.
      scanf("%i",&method); //Se lee y guarda el resultado 
      switch ( method ) 
	{
	case 1:
	Ordenamiento.selection(a);  
	break;
	case 2:
	Ordenamiento.insertion(a);
	break;
	case 3:
	Ordenamiento.bubble(a);
	break;
	case 4:
	Ordenamiento.quickSort(a,0,sizeof(a)-1);
	break;
	case 5:
	Ordenamiento.mergeSort(a,0,sizeof(a)-1);
	break;
	default:
	break;
	}
    
    
    int inicio=0;   
    int fin=sizeof(a)-1;    //Se incializan variables    
    int centro=(inicio+fin)/2;     //Se saca la posición de en medio sumando el inciio más el final entre 2
    int posicionCentro;
    
       while(inicio < fin) //Mientras incicio se menor que fin 
        {
            posicionCentro=a[centro];  //Se obtine en el valor de en medio
            if(posicionCentro==e){   //Si el valor del centro es igual al valor que se busca  se devuelve el centro
                return centro;
            }
            else
            {
                if(e<posicionCentro){   //SI el valor es menor a que la posisición el fin es igual a centro-  1;
                    fin=centro-1;
                
            }
            else
            {
               
                inicio=centro+1;    //Si no incio se vuelve igual a centro +1   
                    }
   }
}return-1;
}


