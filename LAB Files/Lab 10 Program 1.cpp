//Samyog Shrestha ytx16@txstate.edu
//11/14/2024
//CS1428 Lab
//Lab 10
//Description: this program will drop the lowest of 5 grades.

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
#include <iomanip>
using namespace std;

void getGrades(double g[], const int SIZE)
{
    cout << "Please enter " << SIZE << " grades:" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cin >> g[i];
    }
}

double getAverage(double g[], const int SIZE)
{
    double total = 0;
    for(int i = 0; i < SIZE; i++)
    {
        total += g[i];
    }
    return total/SIZE;
}

// TODO: Complete the function definitions
void findDropInfo(double grades[], const int SIZE, int &lowest, double &average)
{
    double lowestGrade = grades[0];
    for(int i = 1; i < SIZE; i++)
    {
        if(grades[i] < lowestGrade)
        {
            lowest = i;
        }
    }

    double total = 0;
    for(int i = 0; i < SIZE; i++)
    {   
        if (i != lowest)
        {
            total += grades[i];
        }
    }
    average = total/(SIZE-1);
}

void printData(double grades[], const int SIZE, int lowest, double average, double avg_before)
{
    cout << "The " << SIZE << " grades entered by the user are: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << grades[i] << endl;
    }
    cout << "Grade dropped: " << grades[lowest] << endl;
    cout << "Final Average: " << fixed << setprecision(2) << average << endl;
    cout << "Average Before Dropped Grade: " << fixed << setprecision(2) << avg_before << endl;
}

int main()
{
    const int SIZE = 5;
    double grades[SIZE];
    int lowest;
    double avg,
           avgBeforeDrop;

    // TODO: Add function calls
    getGrades(grades, SIZE);
    
    findDropInfo(grades, SIZE, lowest, avg);

    avgBeforeDrop = getAverage(grades, SIZE);

    printData(grades, SIZE, lowest, avg, avgBeforeDrop);

    return 0;
}

