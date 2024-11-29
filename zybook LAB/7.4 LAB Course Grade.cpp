/*7.4 LAB: Course Grade
Write a program that reads the student information from a tab separated values (tsv) file. The program then outputs the course grades of the students. Each row of the tsv file contains the Last Name, First Name, Midterm1 score, Midterm2 score, and the Final score of a student. A sample of the student information is provided in StudentInfo.tsv. Assume the number of students is at least 1 and at most 25. Assume also the last names and first names do not contain whitespaces.

The program performs the following tasks:

Read the file name of the tsv file from the user.
Open the tsv file and read the student information into an array of struct.
Compute the average exam score of each student.
Output the last names and course averages of the students to the screen.
Note:

There is a function provided in the template to perform steps 3 and 4. Your code must do steps 1 and 2 and then call the function.
The Student struct is also provided in the template.
Your code must call this function to perform steps 3 and 4:
void computeAndOutputAverages (Student students[], int size)

Ex: If the input of the program is:

StudentInfo.tsv
and the contents of StudentInfo.tsv are:

Barrett    Edan    70  45  59
Bradshaw    Reagan  96  97  88
Charlton    Caius   73  94  80
Mayo    Tyrese  88  61  36
Stern    Brenda  90  86  45
the output should be

Barrett                 58.0
Bradshaw                93.7
Charlton                82.3
Mayo                    61.7
Stern                   73.7*/

// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 7.4

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int midterm1Score;
    int midterm2Score;
    int finalScore;
};

//****************************************************************************
// computeAndOutputAverages: Calculates course average grades for a class
//    and outputs each student's name and course average in a table.
// students: the array of Student structs
// size: the number of students in the array
//****************************************************************************

void computeAndOutputAverages (Student students[], int size) {
    double average;
    for (int i = 0; i < size; ++i) {
        
        // Compute the letter grade
        average = (students[i].midterm1Score
                   + students[i].midterm2Score
                   + students[i].finalScore) / 3.0;
        
        // Output the last name and average
        cout << left << setw(20) << students[i].lastName
             << right << setw(8) << average << endl;
    }
    
}

int main() {
    // Formatting for averages with one decimal place
    cout << fixed << setprecision(1);

    Student students[25];
    int numStudents = 0;

    string filename;
    cin >> filename;

    ifstream fin;
    fin.open(filename);

    if (!fin.is_open()) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }

    while (!fin.fail()){
        fin >> students[numStudents].lastName
            >> students[numStudents].firstName
            >> students[numStudents].midterm1Score
            >> students[numStudents].midterm2Score 
            >> students[numStudents].finalScore;
        numStudents++;
    }

    fin.close();

    computeAndOutputAverages(students, numStudents);

    return 0;
}
