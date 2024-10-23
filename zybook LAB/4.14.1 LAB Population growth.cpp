/*Write a program that will predict the number of days required for a growing population to reach a given size. The program inputs the starting number of organisms, their average daily population increase (as a percentage), and the goal population size. The percentage could have a fractional amount (like 20.5). A loop should display the size of the new population for each day, stopping when the population reaches the goal size (or higher). The program should then output the number of days it took to get to that size. Assume the start value is at least 2 and that the start value is less than the goal (do not check for this). Your code must work for any valid input.

Ex: If the input is:

100 50 750
The expected output is:

100
150
225
337
505
757
The goal was achieved in 5 days.*/

// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 4.14.1

#include <iostream>
using namespace std;

int main() {

    int initialPopulation, goalPopulation;
    double dailyIncrease;
    
    int days = 0;

    cin >> initialPopulation >> dailyIncrease >> goalPopulation;

    int currentPopulation = initialPopulation;

    while (true) {
        if (goalPopulation > currentPopulation){
            cout << currentPopulation << endl;
            currentPopulation += currentPopulation * (dailyIncrease / 100.0);
            days++;
        } else {
            cout << currentPopulation << endl;
            break;
        }
        
    }

    cout << "The goal was achieved in " << days << " days." << endl;
    
    return 0;
}