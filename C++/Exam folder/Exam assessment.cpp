#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

void registerCar(string carRegistration[], string driverLicence[], int carNumber) {
    cout << "Enter Driver License Number: ";
    cin >> driverLicence[carNumber - 1];
    cout << "Enter Car Registration Number: ";
    cin >> carRegistration[carNumber - 1];

}
//Question 5
int main() {
    string carReg[50];
    string driverLicence[50];
    int option;
    int noCars;

    do {
        cout << "Welcome to Route 15 Corporate Office Park." << endl;
        cout << "Please Select an option" << endl;
        cout << "(1) Register a car" << endl;
        cout << "(2) Exit program" << endl;
        cout << endl;
        cin >> option;

        if (option == 1) {
            cout << "How many cars are you registering?: ";
            cin >> noCars;
            for (int i = 0; i < noCars; i++){
                registerCar(carReg, driverLicence, i +1);
            }
            cout << "The cars have been successfully registered!" << endl;
        }
        else if (option ==2) {
            cout << "Exitiong the program" << endl;
        }
        else {
            cout << "Invalid option" << endl;
        }
    } while (option != 2);

    return 0;
}

/*void topThree(int marks[], int marks_size){
    int m1, m2, m3;
    m3 = m2 = m1 = marks[0];
    for(int i = 1; i < marks_size; i++) {
        if (marks[i] > m1) {
            m1 = marks[i];
        }
        else if (marks[i ]> m2) {
            m2 =marks[i];
        }
        else if (marks[i] > m3) {
            m3 = marks[i];
        }
    }

    cout << "The top three marks are:"<< endl;
    cout << m1 << endl << m2 << endl << m3;
}

//Question 4
int main() {
    int finalMarks[10];

    cout << "Welcome to Siyajabula School" << endl;

    for (int i =0; i < 10; i++){
        cout << "Enter mark:  ";
        cin >> finalMarks[i];
    }

    topThree(finalMarks, 10);
    return 0;
}


/*Question 2
#include <iostream>

using namespace std;
const int SECRET = 5;

int main() {
    int x, y, w, z;
    z = 13;
// condition value was not indicated
// x-value was given two values in one line
    if (z < 15) {
        x = 15;
        y = 8;
        w = x + y + SECRET;
    }
    else {
        x = 12;
        y = 8;
        w = x + y + SECRET;
    }
    // The output statement was corrected so that it prints the value of w
    cout << "w = " << w << endl;
    return 0;
}*/

/*Question 3
#include <iostream>

using namespace std;

int main() {
    //intialize variables
    int lenA, lenB, height;
//Prompt user to enter the length of side a
    cout << "Enter the length of side a: ";
    cin >> lenA;
//Prompt user to enter the length of side b
    cout << "Enter the length of side b: ";
    cin >> lenB;
//Prompt user to enter the height
    cout << "Enter the size of the height: ";
    cin >> height;
// Calculate the area of a trapezium
    double area = (0.5 * height) *(lenA + lenB);
    cout << "The area of the trapezium is "<< area << endl;

    return 0;
}*/
