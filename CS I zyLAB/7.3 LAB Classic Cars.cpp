/*7.3 LAB: Classic Cars
Dick's classic cars needs to manage a data base of the cars in its inventory.

First, define a structure called Car to store the following information about each car:

carMake (for example "Ford")
carModel (for example 'Taurus')
yearModel (for example 1999)
cost (for example 22899.95)
In your main program, define an array of 25 of the car structure variables. Initialize the first four elements with the following data:

Make	Model	Year	Cost
Ford	Taurus	1997	$21,000
Honda	Accord	1992	$11,000
Lamborghini	Countach	1997	$200,000
Volkswagen	Beetle	1967	$24,995
Then input the make, model, year, and cost of one additional car into the array. Do not overwrite the first four cars! You can assume the Make and model will not contain more than one word each.

Then output the contents of the array, you may use this code to print the header. Infer the formatting of each row based on this code.

cout << left
     << setw(15) << "Make"
     << setw(15) << "Model"
     << setw(6) << "Year" << right
     << setw(10) << "Cost"
     << endl;
Ex: If the input is:

Ford Mustang 1965 27999.99
the output is:

Make           Model          Year        Cost
Ford           Taurus         1997    21000.00
Honda          Accord         1992    11000.00
Lamborghini    Countach       1997   200000.00
Volkswagen     Beetle         1967    24995.00
Ford           Mustang        1965    27999.99
Hint: Be sure to comment the main sections of your code to avoid losing style guideline points.*/

// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 7.3.1

#include <iostream>
#include <iomanip>
using namespace std;

struct Car {
    string carMake;
    string carModel;
    int yearModel;
    double cost;
};

int main() {
    cout << fixed << setprecision(2);  // to output the cost with 2 digits after the decimal

    // initialize an array of Car structs with values
    Car cars[25];
    cars[0] = {"Ford", "Taurus", 1997, 21000.00};
    cars[1] = {"Honda", "Accord", 1992, 11000.00};
    cars[2] = {"Lamborghini", "Countach", 1997, 200000.00};
    cars[3] = {"Volkswagen", "Beetle", 1967, 24995.00};

    // Read car details from user input and store in the array
    cin >> cars[4].carMake >> cars[4].carModel >> cars[4].yearModel >> cars[4].cost;

    // Output the table header
    cout << left
         << setw(15) << "Make"
         << setw(15) << "Model"
         << setw(6) << "Year" << right
         << setw(10) << "Cost"
         << endl;

    // Output the details of each car in the array
    for (int i = 0; i < 5; i++){
        cout << left
             << setw(15) << cars[i].carMake
             << setw(15) << cars[i].carModel
             << setw(6) << cars[i].yearModel << right
             << setw(10) << cars[i].cost
             << endl;
    }

    return 0;
}
