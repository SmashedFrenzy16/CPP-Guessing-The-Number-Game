#include <iostream>
#include <random>

using namespace std;

int main()
{

    int secretNum = (rand() % 100) + 1;
    int guess;
    int count = 0;
    int limit = 5;
    bool outOfGuesses = false;

    while(guess != secretNum && !outOfGuesses){

        if(count < limit){

            cout << "Enter your guess: ";
            cin >> guess;
            count++;

        } else {

            outOfGuesses = true;
        }
    }

    if(outOfGuesses) {
        cout << "You lose!" << endl;
    } else {
        cout << "You win!" << endl;
    }


    return 0;

}