#include <iostream>
using namespace std;

bool validate(string txt){
   if (txt.substr(txt.length() - 4) == ".txt" || txt == "EXIT" || txt == "exit"){
      return true;
   }
   return false;
}
int main()
{   
   string txt;
   cout << "Enter the string: ";
   cin >> txt;
   cout << validate(txt);

   return 0;
}