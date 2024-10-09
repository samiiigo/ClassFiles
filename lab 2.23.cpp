// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 2.23

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    string inputFileName;
    double previousOdometerReading, currentOdometerReading, fuelRefill, driveHours;
    double fuelEfficiency, averageSpeed;

    cout << "Enter the name of the input file: ";
    cin >> inputFileName;

    ifstream inputFile;
    inputFile.open(inputFileName);

    inputFile >> previousOdometerReading >> currentOdometerReading >> fuelRefill >> driveHours;

    fuelEfficiency = (currentOdometerReading - previousOdometerReading) / fuelRefill;
    averageSpeed = (currentOdometerReading - previousOdometerReading) / driveHours;

    ofstream outputFile;
    outputFile.open("DrivingStats.txt");

    outputFile << fixed << setprecision(1);
    outputFile << "The fuel efficiency is " << fuelEfficiency << " miles per gallon." << endl;
    outputFile << "The average speed is " << averageSpeed << " miles per hour." << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}