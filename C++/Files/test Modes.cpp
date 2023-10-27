#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
//Declare variables; Step 1
    ifstream inFile; //input file stream variable
    ofstream outFile; //output file stream variable

    double currentSalary, payIncrease;
    double updatedSalary;

    string firstName;
    string lastName;

    inFile.open("Ch3_Ex5Data.txt"); //Step 2
    outFile.open("Ch3_Ex5out.txt"); //Step 3

    outFile << fixed << showpoint; //Step 4
    outFile << setprecision(2); //Step 4
    
    cout << "Processing data" << endl;

    inFile >> lastName >> firstName >> currentSalary >> payIncrease; //Step 5
    outFile << "Employee name: " << firstName << " " << lastName << endl; //Step 6
    
    updatedSalary = currentSalary + (currentSalary * (payIncrease/100)); //Step 9
    outFile << "Updated Salary: " << updatedSalary << endl; //Step 10
    
    
    inFile.close(); //Step 11
    outFile.close(); //Step 11
return 0;
}