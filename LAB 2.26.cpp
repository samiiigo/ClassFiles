// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 2.26.1

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string animal;
    int wholeNumber;
    string householdItem;

    cin >> name >> animal >> wholeNumber;
    getline(cin, householdItem);

    cout << "My pet " << name << " is a " << animal;
    cout << " that weighs " << wholeNumber;
    cout << " pounds, and likes to sleep on my " << householdItem << "." << endl;

    return 0;
}