#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double additionalBonus = 0.0;
    double bonus = 0.0;

    //Enter base salary
    cout << "Enter base salary: ";
    int baseSalary;
    cin >> baseSalary;

    // Number of years in service
    cout << "Enter number of years in service: ";
    int noOfServiceYears;
    cin >> noOfServiceYears;

  //bonus
    if (noOfServiceYears <= 5) {
        double bonus = 10 * noOfServiceYears;
        cout << "Bonus: " << bonus << endl;
    }
    else {
        double bonus = 20 * noOfServiceYears;
        cout << "Bonus: " << bonus << endl;
    }

    // Total sales
    cout << "Enter total sales: ";
    int totalSales;
    cin >> totalSales;

    // Additional bonus
    if ( totalSales < 5000) {
        cout << "Additional Bonus: $0";
    }
    else {if ( totalSales >= 5000 && totalSales <= 10000) {
        double additionalBonus = 0.03 * totalSales;
        cout << "Additional Bonus: $" << additionalBonus << endl;
        }
    if (totalSales > 10000) {
         double additionalBonus = 0.06 * totalSales;
         cout << "Additional Bonus: $" << additionalBonus << endl;
        }
    }
       
    double monPaycheck = baseSalary + bonus + additionalBonus;
    cout <<"Salesperson's monthly paycheck is: " << monPaycheck << endl; 

    return 0;
}