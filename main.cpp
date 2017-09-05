/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Dell
 *
 * Created on 31 de agosto de 2017, 9:01
 */

#include <cstdlib>


#include <iostream> 
#include "SecClass.h"
#include "BinClass.h"
#include "FetchClass.h"
#include "SortClass.h"
using namespace std;

using namespace std;


/*
 * 
 */
int main(int argc, char *argv[]) {
char ASN;
int item,method;
printf("Would you like to create a array: [Y]/[N]?: ");
  scanf("%c",&ASN);
  if(ASN='Y'||ASN='y'){
      printf("How much items would you like to add?: ");
      scanf("%i",&item);
      int x [item];
      FetchClass V;
      V.setArray(x);
      
      printf("What method to organized the array do you prefer: selection[1] insertion[2] bubble[3] quickSort[4] mergeSort[5]":);
      scanf("%i",&method);
      switch ( method )  
      {  
         case 1:  
            
            break;  
         case 2:  
             
            break;
            case 3:  
             
            break;
            case 4:  
             
            break;
            case 5:  
             
            break;
         default:  
             
      }  
      
  }
  else
  {
    printf("Try again");  
  }
 * */
  
	int fofo[] = {2,3,4};

	SecClass re;
        
	re.setArray(fofo);
	re.showArray();
	//re.showFetch(re.sFetch(7));
		cout << "\n---------------" << endl;
	/*int fafa[] = {1,2,3,4};
	int fefe[] = {2,3,4,1};
	BinClass abc;
	abc.setArray(fefe);
	abc.selection(fefe);
	abc.showArray();
	abc.showFetch(abc.bFetch(4));
		cout << "\n---------------" << endl;*/
	cin.get();
}
