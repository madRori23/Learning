//A bartender is writing a simple program to determine whether he should serve drinks to someone. He only serves drinks to people 18 and older and when he's not on break.
//Given the person's age, and whether break time is in session, create a function which returns whether he should serve drinks.

#include <iostream>
#include <iomanip>
using namespace std;

bool shouldServeDrinks(int age, bool onBreak) {
  if (onBreak == false && age > 18) {
    return true;
  } 
  else {
    return false;
  }
}

int main() {
  int age;
  bool onBreak;

  cout << "Enter your age" << endl;
  cin >> age;
  cout << "Is the student on a break?" << endl;
  cin >> onBreak;

  bool ServeDrinks = shouldServeDrinks(age, onBreak);
  cout << boolalpha << ServeDrinks << endl;

  return 0;
}