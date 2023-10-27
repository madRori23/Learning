#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/* Mile per gallon Exercise
int main () {
     int gallons = 0.0;
     int milesGal = 0.0;
     
     cout << "What is the capacity of the fuel tank (in gallons)? " << endl;
     cin >> gallons;
     cout << "What is the miles per gallon of the vehicle?" << endl;
     cin >> milesGal;

    int totalMiles = gallons * milesGal;
     cout << "This vehicle can be driven for " << totalMiles << " miles without refueling" << endl;

     return 0;

} */

/* Price mark up exercise
int main() {
    double price;
    const double markup = 0.02;
    const double salesTax = 0.15;

    cout << "Enter original price of the item" << endl;
    cin >> price;

    double sellingPrice = price +(price * markup);
    cout << "The selling price of the item is $" << sellingPrice << endl;

    double finalPrice = sellingPrice + (sellingPrice * salesTax);
    cout << "The final price of the item is $" << finalPrice << endl;

    return 0;
} */

/* Hard drive Capacity exercise
int main() {
    int size;
    double sBytes;
    double actSize;

    cout << "What is the size specified by the manufacturer?" << endl;
    cin >> size;

    sBytes = size * (1E9);
    actSize = sBytes / 1073741824 ;

    cout << "The actual size of the hard drive is " << actSize << "GB" << endl;

    return 0;

} */

/*Rectangle with information
int main () {
    cout << "**********************************" << endl << "* Programming Assignment 1       *" << endl << "* Computer Programming I         *" << endl << "* Author: Ororiseng Madibela     *"
        << endl << "* Due Date: Thursday, Jan 24     *" << endl << "**********************************" << endl;

    return 0;
} */

/* Milk production exercise
int main() {
    double totalMilk;
    const double cost = 0.38;
    double totalCost;
    const double profit = 0.27;
    double totalProfit;
    int noCarton;

    cout << "Enter the number of litres of milk produced" << endl;
    cin >> totalMilk;

    noCarton = totalMilk / 3.78;
    cout << noCarton << " cartons were produced" << endl;

    totalCost = totalMilk * cost;
    cout << "The cost for producing one litre of milk is $" << totalCost << endl;

    totalProfit = noCarton * profit;
    cout << "The total profit for the produced milk is $" << totalProfit << endl;

    return 0;
} */

/* Salary and spenditure exercise (Question 18)
int main() {
    double income;
    double tax;
    double totalIncome;
    double clothes;
    double schoolSupp;
    double savings;
    int addSavings;

    income = 15.50 * 24 *25;
    cout << "The income before tax is $" << income << endl;

    tax = 0.14;
    totalIncome = income - (income* tax);
    cout << "The income after tax is $" << totalIncome << endl;

    clothes = totalIncome *0.1;
    cout << "The amount spent on clothes and accessories is $" << clothes << endl;

    schoolSupp = totalIncome * 0.01;
    cout << "The amount spent on school supplies is $" << schoolSupp << endl;

    savings = (totalIncome- clothes - schoolSupp)*0.25;
    cout << "The amount spent on savings bonds is $" << savings << endl;

    
    for (addSavings = 1; addSavings <= savings; ++addSavings)
    {   if (addSavings = savings) {
        cout << "The amount spent on additional savings bonds is $" << addSavings * 0.50 << "  ";
    }
    }

    return 0;
} */

/*Newtons law
int main() {
    const double k = 6.67E-8;
    int mass1;
    int mass2;
    int distance;
    double force;
 

    cout << "Enter mass of the first body:" << endl;
    cin >> mass1;

    cout << "Enter mass of the seconf body:" << endl;
    cin >> mass2;

    cout << "Enter mass of the distance between the bodies:" << endl;
    cin >> distance;

    force = k * ( mass1 * mass2 / distance ^ 2);
    cout << "Therefore the force between the two bodies is: "<< force << endl;
    
    return 0;
} */

//Check vowel
bool isVowel( char c);
int main() {

    char c;
    cout << "Enter a character" << endl;
    cin >> c;

    cout << isVowel;

    return 0;
}

bool isVowel( char c) {
    const char vowels = "aeiou";
    for (char v : vowels) {
        if (c == v) {
            return true;
        }
        else {
            return false;
        } 
    }
}