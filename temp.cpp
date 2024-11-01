#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

void doubleEven(int value)
{  
   cout << value << " " << (value * 2) << endl; 
} 

void tripleOdd(int value)
{  
   cout << value << " " << (value * 3) << endl; 
} 

int main()
{  
   int num;  
   for (num = 1; num < 7; num++)
   {  
      if(num % 2 == 1)    
            tripleOdd(num);  
      else  
            doubleEven(num);  
   }  
   return 0; 
} 