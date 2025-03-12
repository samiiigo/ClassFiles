/*
A contact list is a place where you can store a specific contact with other associated information such as a phone number, email address, birthday, etc. Write a program that first takes as input an integer N that represents the number of word pairs in the list to follow. Word pairs consist of a name and a phone number (both strings), separated by a comma. That list is followed by a name, and your program should output the phone number associated with that name. Output "None" if name is not found.

Ex: If the input is:

3 Joe,123-5432 Linda,983-4123 Frank,867-5309 Frank
the output is:

867-5309
Your program must define and call the following GetPhoneNumber() function. The return value of GetPhoneNumber() is the phone number associated with the specific contact name. GetPhoneNumber() returns "None" if name is not found, and the main program outputs the returned value accordingly.

string GetPhoneNumber(vector<string> nameVec, vector<string> phoneNumberVec, string contactName)

Hint: Use two vectors: One for the string names, and the other for the string phone numbers.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string GetPhoneNumber(vector<string> nameVec, vector<string> phoneNumberVec, string contactName) {
   for (unsigned int i = 0; i < nameVec.size(); ++i) {
      if (nameVec[i] == contactName) {
         return phoneNumberVec[i];
      }
   }
   return "None";
}

int main() {
   int N;
   cin >> N;
   vector<string> names;
   vector<string> phoneNumbers;

   for (int i = 0; i < N; ++i) {
      string name, phoneNumber;
      cin >> ws; // consume any leading whitespace
      getline(cin, name, ',');
      getline(cin, phoneNumber, ' ');
      names.push_back(name);
      phoneNumbers.push_back(phoneNumber);
   }

   cin >> ws; // consume any leading whitespace
   string contactName;
   getline(cin, contactName);

   string result = GetPhoneNumber(names, phoneNumbers, contactName);
   cout << result << endl;

   return 0;
}