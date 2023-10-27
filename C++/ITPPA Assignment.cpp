#include <iostream>

using namespace std;

 //Question 1
int main() {
  int a = 5.0;
  int b = 7;
  double c = 3.7;
  double d = 8.0;

  cout << "Addition" << endl;
  cout << a << " + " << b << " = " << a + b << endl;
  cout << c << " + " << d << " = " << c + d << endl;
  cout << a << " + " << d << " = " << a + d << endl;

  cout << endl;

  cout << "Subtraction" << endl;
  cout << a << " - " << b << " = " << a - b << endl;
  cout << c << " - " << d << " = " << c - d << endl;
  cout << a << " - " << d << " = " << a - d << endl;

  cout << endl;

  cout << "Multiplication" << endl;
  cout << a << " * " << b << " = " << a * b << endl;
  cout << c << " * " << d << " = " << c * d << endl;
  cout << a << " * " << d << " = " << a * d << endl;

  cout << endl;

  cout << "Division" << endl;
  cout << a << " / " << b << " = " << a / b << endl;
  cout << c << " / " << d << " = " << c / d << endl;
  cout << a << " / " << d << " = " << a / d << endl;

  return 0;
} 

//Question 2.1
#include <iostream>

using namespace std;

int main() {
  int total = 0;
  int counter = 0;
  double grade;
  double average;

  cout << "Enter the first grade" << endl;
  cin >> grade;

  while (grade != -1) {
    total += grade;
    counter++;

    cout << "Enter a grade (enter -1 to stop): ";
    cin >> grade;
  }

  if (counter != 0) {
     average = total / counter;
    cout << "The average grade is " << average << endl;
  } else {
    cout << "No grades were entered" << endl;
  }

  return 0;
} 

/*#include <iostream>

using namespace std;

int main() {
  char mpass[20], pass[20];
  int numOne, numTwo, sum;

  cout << "Create a password: ";
  cin >> mpass;

  cout << "Enter two numbers to add: ";
  cin >> numOne >> numTwo;

  cout << "Enter the password to see the result: ";
  cin >> pass;

  if (strcmp(mpass, pass) == 0) {
    sum = numOne + numTwo;
    cout << endl << numOne << " + " << numTwo << " = " << sum;
  } else {
    cout << "Sorry! You've entered a wrong password!" << endl;
  }

  return 0;
}*/