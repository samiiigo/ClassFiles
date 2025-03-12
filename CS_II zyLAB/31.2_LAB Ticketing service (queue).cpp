/*
Given main(), complete the program to add people to a queue. The program should read in a list of people's names including "You" (ending with -1), adding each person to the peopleInQueue queue. Then, remove each person from the queue until "You" is at the head of the queue. Include print statements as shown in the example below.

Ex. If the input is:

Zadie Smith
Tom Sawyer
You
Louisa Alcott
-1
the output is:

Welcome to the ticketing service...
You are number 3 in the queue.
Zadie Smith has purchased a ticket.
You are now number 2
Tom Sawyer has purchased a ticket.
You are now number 1
You can now purchase your ticket!
*/

#include <queue>
#include <iostream>

using namespace std;

int main () {
    string personName = "";
    int counter = 0;
    int youPosition;

    queue<string> peopleInQueue;

    getline(cin, personName);
    while (personName != "-1") {
        // TODO: Add personName to peopleInQueue
        //       determine position of "You" (youPosition)

        getline(cin, personName);
    }

    cout << "Welcome to the ticketing service... " << endl;
    cout << "You are number " << youPosition << " in the queue." << endl;

    // TODO: In a loop, remove head person from peopleInQueue,
    //       output their name and that they have purchased a ticket,
    //       then output your position in the queue. When you are at
    //       the head, output that you can purchase your ticket.


    return 0;
}