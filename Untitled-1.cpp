// Samyog Shrestha, ytx16@txstate.edu
// No collaborators
// LAB 1.21.1

#include <iostream>
using namespace std;

int main()
{
   int lengthRectangle, heightRectangle, sideSquare, area, perimeter;

    cin >> lengthRectangle >> heightRectangle >> sideSquare;

    area = (lengthRectangle * heightRectangle) + (sideSquare * sideSquare);
    perimeter = 2 * (lengthRectangle + heightRectangle) + (sideSquare * 2);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

   return 0;
} 
