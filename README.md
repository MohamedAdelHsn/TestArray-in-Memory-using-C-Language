# TestArray-in-Memory-using-C-Language
Test Array in Memory using C++ Language.  This program will prove that Array sorted in memory sequential and get the size of data type . The main equation that will define the address of any index at array is : header("the address of the first element in array"))+ index * sizeof data type].  For example arr has five numbers we will search for 3 :	 The address of (3) = header + 2 * 4(byte) . We will prove that using pointer in C++.  
First define array , Second define pointer to iterate the address of all indexes at array (with the same type of array) ,  We will get address of array indexes by Hexadecimal System , you will Convert them to decimal , Then try to subtract the two next addresses together you will get the size of data type ,  but  note that the addresses will be changed every run process.  

For example  Output :

   Address of arr 0  : 012FFA44  ,  Convert to decimal : 19921476             
   Address of arr 1  : 012FFA48  ,  Convert to decimal : 19921480     
   Address of arr 2  :  012FFA4C  ,  Convert to decimal : 19921484             
   Address of arr 3  : 012FFA50  ,  Convert to decimal : 19921488             
   Address of arr 4  : 012FFA54  ,  Convert to decimal : 19921492 .  
   
if we subtract  Address of arr 1 - Address of arr 0  = 19921480 - 19921476 = 4 byte(the size of int data ) , etc..
    


![TestArray](https://user-images.githubusercontent.com/58120325/69501528-7a0f4000-0f0e-11ea-9aa9-089c7ccfe95e.png)

         
      
      
