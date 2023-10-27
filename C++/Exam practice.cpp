#include <iostream>
#include <cmath>
#include <string>

using namespace std;

/*int main() {
  string name[50];
  string pNumber[50];
  int n;
  int option;
  do {
    cout << "Welcome to Baby Life. Please select an option:" << endl;
    cout << "(1) Add Patient "<< endl;
    cout << "(2) Display Patient "<< endl;
    cout << "(3) Exit"<< endl;
    cin >> option ;
     
     if (option == 1){
         cout << "Enter number of patients you are adding: ";
         cin >> n;
         for (int i =0; i < n ; i++){
             cout << "Enter Patient Name: ";
             cin >> name[i];
             cout << "Enter Contact Number: ";
             cin >> pNumber[i];
         }
         cout << "Patients successfully added"<< endl;
     }
     else if (option == 2){
         
         cout << "Enter number of patients you are displaying: ";
         cin >> n;
         
         for (int i = 0; i < n; i++) {
            cout  << name[i] << ", " << pNumber[i] << endl;
        }
        cout << "Patients successfully displayed"<< endl;
     }
     else if (option == 3){
         cout << "Exiting...";
     }
     else {
         cout << "Invalid option" << endl;
     }

    } while (option != 3);
    

    return 0;
}

#include <iostream>
#include <cmath>
#include <string>

using namespace std;
void addPatient(string name[],string pNumber[]);
void displayPatient(string name[],string pNumber[]);

int main() {
  string name[50];
  string pNumber[50];
  int n;
  int option;
  int i;

  do {
    cout << "Welcome to Baby Life. Please select an option:" << endl;
    cout << "(1) Add Patient "<< endl;
    cout << "(2) Display Patient "<< endl;
    cout << "(3) Exit"<< endl;
    cin >> option ;
     
     if (option == 1){
        addPatient(name, pNumber);
     }
     else if (option == 2){
         displayPatient(name, pNumber);
     }
     else if (option == 3){
         cout << "Exiting...";
     }
     else {
         cout << "Invalid option" << endl;
     }

    } while (option != 3);
    
    return 0;
}

void addPatient(string name[],string pNumber[]){
    
    int n;
    
    cout << "Enter number of patients you are adding: ";
    cin >> n;
    
    for (int i =0; i < n ; i++){
        cout << "Enter Patient Name: ";
        cin >> name[i];
        
        cout << "Enter Contact Number: ";
        cin >> pNumber[i];
    }
    cout << "Patients successfully added"<< endl;
}

void displayPatient(string name[],string pNumber[]) {
    
    int n;
    cout << "Enter number of patients you are displaying: ";
    cin >> n;
         
    for (int i = 0; i < n; i++) {
        cout  << name[i] << ", " << pNumber[i] << endl;
    }
    cout << "Patients successfully displayed"<< endl;
}

#include <iostream>
#include <cmath>
#include <string>

using namespace std;
void addPatient(string patientName, string patientContact);
void displayPatient();

int main() {
  string name[50];
  string pNumber[50];
  int n;
  int option;
  int i;

  do {
    cout << "Welcome to Baby Life. Please select an option:" << endl;
    cout << "(1) Add Patient "<< endl;
    cout << "(2) Display Patient "<< endl;
    cout << "(3) Exit"<< endl;
    cin >> option ;
     
     if (option == 1){
        addPatient(name[i], pNumber[i]);
     }
     else if (option == 2){
         displayPatient();
     }
     else if (option == 3){
         cout << "Exiting...";
     }
     else {
         cout << "Invalid option" << endl;
     }

    } while (option != 3);
    

    return 0;
}

void addPatient(string patientName, string patientContact){
    string name[50];
    string pNumber[50];
    int n;
    int i;
    cout << "Enter number of patients you are adding: ";
    cin >> n;
        for (int i =0; i < n ; i++){
            cout << "Enter Patient Name: ";
            cin >> patientName[i];
            cout << "Enter Contact Number: ";
            cin >> patientContact[i];
         }
         cout << "Patients successfully added"<< endl;
    
}

void displayPatient() {
    string patientName; 
    string patientContact;
    string name[50];
    string pNumber[50];
    int n;
    cout << "Enter number of patients you are displaying: ";
    cin >> n;
         
    for (int i = 0; i < n; i++) {
        cout  << name[i] << ", " << pNumber[i] << endl;
    }
    cout << "Patients successfully displayed"<< endl;
    
}*/



#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main() {
    int empName;
    
    ofstream outputFile;
    outputFile.open("employees.out");
    
    cout << "Enter Emplyee name, enter -1 to stop" << endl;
    cin >> empName;
    
    while (empName != -1) {
        outputFile << empName << endl;
        cout << "Enter Emplyee name, enter -1 to stop" << endl;
        cin >> empName;
    }
    outputFile.close();
    
}