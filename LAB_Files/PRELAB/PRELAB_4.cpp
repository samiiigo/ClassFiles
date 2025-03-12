// Samyog Shrestha ytx16@txstate.edu
// 10/03/2024

// PreLab 4 Assignment

// The following is an extremely scientific personality test that can predict
// how well you will do in this course.
// Fill in the area below with the requested code.

#include <iostream>

using namespace std;

int main()
{
    char answer;
    string message;

    cout << "Is Star Trek better than Star Wars? ('Y' or 'N')" << endl;
    cin >> answer;

    // TODO - Change the following IF-ELSE statement to an
    // equivalent switch statement.    

    switch (answer){
        case 'y':
        case 'Y':
            cout << "You think Star Trek is better than Star Wars..." << endl;
            message = "Wrong!";
            break;

        case  'n':
        case  'N':
            cout << "You do not think think Star Trek is better than Star Wars..." << endl;
            message = "Correct!" ;
            break;

        default:
            message = "Invalid Input.";
    }

    cout << message << endl;

    return 0;
}