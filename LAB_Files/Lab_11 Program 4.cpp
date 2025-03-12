//Samyog Shrestha ytx16@txstate.edu
//11/21/2024
//CS1428 Lab
//Lab 11
//Description: this program will keep track of student data

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
#include <iomanip>

using namespace std;

//TODO: Create your struct
struct StudentInfo {
    string name;
    int ID;
    float grades[5];
};

int main()
{
    const int NUM = 3, NUM_GRADES = 5;
	StudentInfo stud [NUM];	//array of Student structs
	
	float average[NUM];
    int highest_avg = 0;


	for(int i = 0; i < NUM; i++)
    {   
        cout << "Student #" << i + 1 << endl;
        cout << "Enter student name: ";
        cin >> stud[i].name;

        //TODO: Prompt/read remaining student information
        cout << "Enter ID: ";
        cin >> stud[i].ID;

        for(int j = 0; j < NUM_GRADES; j++)
        {
            cout << "Enter grade " << j + 1 << ": ";
            cin >> stud[i].grades[j];
        }

        float total = 0;
        //TODO: add all grades of each student
        for(int j = 0; j < NUM_GRADES; j++)
        {
            total += stud[i].grades[j];
        }

        average[i] = total / NUM_GRADES;

        //TODO: Find the index of the student with the highest average
        if (average[i] > average[highest_avg])
        {
            highest_avg = i;
        }

        cout << endl;
    }
    //TODO: output the student with the highest average.
    cout << "The student " << stud[highest_avg].name << " has the highest average of " << average[highest_avg] << endl;

	return 0;
}