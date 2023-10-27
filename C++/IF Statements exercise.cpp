#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

void addPatient(string patientName, string conNumber);


int main() {
  int numPatients;
  int option;

  cout << addPatient;


  return 0;
}
void addPatient(string patientName, string conNumber){
  int numPatients;
  cout << "Enter number of patients you are adding: ";
  cin >> numPatients;

  for (int i = 0; i < numPatients; i++){
    cout << "Enter Patient Name: ";
    cin >> patientName;
    cout << "Enter Contact Number: ";
    cin >> conNumber;
  } 
  cout << "Patients successfully added!";

}
