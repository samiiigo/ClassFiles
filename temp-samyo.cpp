#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    double previousOdometerReading, currentOdometerReading, fuelRefill, driveHours;
    double fuelEfficiency, averageSpeed;

    ifstream inputFile;
    inputFile.open("DrivingInfo1.txt");

    inputFile >> previousOdometerReading >> currentOdometerReading >> fuelRefill >> driveHours;

    fuelEfficiency = (currentOdometerReading - previousOdometerReading) / fuelRefill;
    averageSpeed = (currentOdometerReading - previousOdometerReading) / driveHours;

    ofstream outputFile;
    outputFile.open("DrivingStats.txt");

    outputFile << fixed << setprecision(1);
    outputFile << "The fuel efficiency is " << fuelEfficiency << " miles per gallon." << endl;
    outputFile << "The average speed is " << averageSpeed << " miles per hour.";

    inputFile.close();
    outputFile.close();

    return 0;
}