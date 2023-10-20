/* Login and registartion system
 1) welcome the user and prompt user to select an option of either logging in or registering
 2) register new user with name and surname and id/ user id
 3) register function
  */

#include <iostream>
#include <string>
using namespace std;
int main() {
  // Create a login and register menu
  int choice;
  cout << "Welcome! Please choose an option\n1. Login\n2. Register\n";
  cin >> choice;
  // Login
  if (choice == 1) {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    // Check if the username and password are correct
    if (username == "admin" && password == "password") {
      cout << "Login successful!\n";
    } else {
      cout << "Login failed!\n";
    }
  }
  // Register
  else if (choice == 2) {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    // Check if the username is already taken
    if (username == "admin") {
      cout << "Username already taken!\n";
    } else {
      // Create a new user account
      cout << "Registration successful!\n";
    }
  }
  // Invalid choice
  else {
    cout << "Invalid choice!\n";
  }
  return 0;
}