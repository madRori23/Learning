#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    ifstream inData;
    ofstream outData;

    string name, surname, department;
    double grossSalary, bonus, taxes;
    double distance, timeTraveling;
    double noCoffeeCup, costCup;

    inData.open("inData.txt");
    outData.open("outData.txt");
    outData << fixed << showpoint << setprecision(2);
    cout << "Processing data, please wait..." << endl;

    inData >> name >> surname >> department;
    outData << "Name: "<< name << " " << surname << ", Department: " << department << endl;

    inData >> grossSalary >> bonus >> taxes;
    outData << "Monthly Gross Salary: $" << grossSalary << ", Monthly Bonus: " << bonus << "%, Taxes: "<< taxes <<"%" << endl;

    double payCheck = grossSalary + (grossSalary*(bonus/100)) - (grossSalary * (taxes/100));
    outData << "Pay Check: $" << payCheck <<endl;

    inData >> distance >> timeTraveling;
    outData << "Distance Travelled: " << distance << " miles, Traveling Time: " << timeTraveling << " hours" <<endl;

    double aveSpeed = distance / timeTraveling;
    outData << "Average Speed: " << aveSpeed << " miles per hours" <<endl;

    inData >> noCoffeeCup >> costCup;
    outData << "Number of Coffee Cups Sold: " << noCoffeeCup << ", Cost: $" << costCup << " per cup" <<endl;

    double sales = noCoffeeCup * costCup;
    outData << "Sales Amount: $" << sales << endl;

    inData.close();
    outData.close();

    cout << "Data has been processed";

}