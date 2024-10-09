// Samyog Shrestha ytx16@txstate.edu
// No Collaborators
// Pre Lab 2

// PreLab 2 Assignment
// Write a program that copies the data in the
// prelab input file to an output file "121_gigawatts"
// so that it is formatted the same in both files.
// Additionally add 60 to the year when you rewrite
// it to the output file to help Marty Mcfly get back to
// his proper time.

#include <iostream>

#include <fstream>

using namespace std;

int main()
{
    // ADD HERE declare variables

    string firstName, lastName;
    int date;

    // declare input file stream variable and open file

    ifstream fin;

    fin.open("prelab_input.txt");

    // Test to see if file correctly opened. If statements will

    // be learned in the future. For now, don't worry about

    // understanding this.

    if (!fin.is_open())
    {
        cout << "ERROR - File failed to open. make sure that " << "the input file and this file are in the"

             << "same directory" << endl;

        return -1;

        // Return statement will terminate the program. We do not want

        // to continue if we do not have a valid input file.
    }

    fin >> firstName;
    fin >> lastName;
    fin >> date;

    // declare output file stream varaible and open file

    ofstream fout;

    fout.open("121_gigawatts.txt");

    fout << firstName << " " << lastName << " " << (date + 60);

    // closing files
    fin.close();

    fout.close();

    return 0;
}