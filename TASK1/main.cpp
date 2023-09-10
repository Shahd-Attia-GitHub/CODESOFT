/**********************************************************************************************************************************************************
    Author name : Shahd Mohammed Attia
      Task name : Number Guessing Game
**********************************************************************************************************************************************************/



#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator using current time

    int random_numb = rand() % 100 + 1; // Generate a random number between 1 - 100
    int guess_numb;
    int counter = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        cout << "Enter a number between 1 and 100: " << endl;
        cin >> guess_numb;

        if (guess_numb > random_numb)
            cout << "Too high!" << endl;
         else if (guess_numb < random_numb)
            cout << "Too low!" << endl;


        counter++;
    } while (guess_numb != random_numb);

    cout << "Congratulations! You guessed the correct number in " << counter << " attempts." << endl;

    return 0;
}
