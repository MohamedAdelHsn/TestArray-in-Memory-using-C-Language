// TestArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;

// this program will prove that Array sorted in memory sequential and get the size of data type 

int main()
{
	int arr[5] = {1,2,3,4,5}; 
	/* the main equation that will define the address of any index at array is 
	/[(header("the address of the first element in array"))+ index * sizeof data type].

	 for example arr has five numbers we will search for 3
	 the addrress of (3) = header + 2 * 4(byte)

	 we will prove that using pointer.

	*/
	int size = sizeof(arr) / sizeof(arr[0]);
	int *ptr;   // pointer to iterate the addresses of array    

   for(int i = 0; i< size; i++)
   {
      ptr = &arr[i];
      cout<<"Address of arr "<<i<<"  : "<<ptr<<endl;
   
   }

   // the addresses will be changed every runtime process 

   /* output : 

            Address of arr 0  : 012FFA44  ,  Convert to decimal : 19921476
            Address of arr 1  : 012FFA48  ,  Convert to decimal : 19921480
            Address of arr 2  : 012FFA4C  ,  Convert to decimal : 19921484
            Address of arr 3  : 012FFA50  ,  Convert to decimal : 19921488
            Address of arr 4  : 012FFA54  ,  Convert to decimal : 19921492


	      if we subtract  Address of arr 1 - Address of arr 0  =  
		                                   19921480 - 19921476 = 4 byte(the size of int data )

          if we subtract  Address of arr 2 - Address of arr 1  =  
		                                   19921484 - 19921480 = 4 byte(the size of int data )

	      if we subtract  Address of arr 3 - Address of arr 2  =  
		                                   19921488 - 19921484 = 4 byte(the size of int data )

		 if we subtract  Address of arr 4 - Address of arr 3  =  
		                                  19921492 - 19921488 = 4 byte(the size of int data )

         Then,  Array sorted in memory sequential  & the counter of every address will increase by the size of data type.
		 
		
		                               try this with different data type....  

   */

   return 0;

}

