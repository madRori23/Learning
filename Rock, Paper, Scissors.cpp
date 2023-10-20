#include <iostream>

using namespace std;

int main()
{
    char playerChoice;
    char computer;
   // Prompt user to select a character
    cout << "Let's play rock, paper, scissors. Choose rock(r), paper(p), or scissors(s)" << endl;
    cin >> playerChoice;

    // Generate a random character for the computer
    int randNum = rand() % 3 ;

    if (randNum == 0){
        computer = 'r';
    } else if (randNum == 1) {
        computer = 'p';
    } else if (randNum == 2){
        computer = 's';
    }

//Check if selected characters are the same or not and who the winner is
    if (playerChoice == computer) {
        cout << "Tie" << endl;
        }
        else if (playerChoice == 'r' && computer == 's') {
            cout << "You win!" << endl;
        }
        else if (playerChoice == 'p' && computer == 'r') {
            cout << "You win!" << endl;
        }
        else if (playerChoice == 's' && computer == 'p') {
            cout << "You win!" << endl;
        }
        else {
            cout << "Computer wins!" <<endl;
        }

    return 0;    
}