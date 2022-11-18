#include <iostream>
#include <time.h>
using namespace std;

//Generate Random Number using time.h  library in C++
int randomNumber = time(0) % 10 + 1;
int score = 0;

void guessNumber () {
    int guess;
    cout << "-----------------------------------------";
    cout << "Guess the number between 1 and 10";
    cout << "-----------------------------------------";
    cout << endl;
    cout << "Enter your guess: ";
    cout << endl;
    cin >> guess;
    // --------------------------------------------------------
    if (guess > randomNumber || guess < randomNumber) {
        cout << "Sorry, you guessed wrong! 😔" << endl;
        cout << "Your score is: " << score << endl;
        guessNumber();
    }
    else if (guess == randomNumber) {
        cout << "Congratulations! You guessed right! 😃" << endl;
        score += 1;
        cout << "Your score is: " << score << endl;
    }
    else {
        cout << "Invalid input! Please try again." << endl;
    }

}

int main (){

    
    cout << randomNumber << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Welcome to the Number guessing game! 🎮";
    cout << "_________________________________________";
    cout << endl;
    guessNumber();

    


    return 0;
}