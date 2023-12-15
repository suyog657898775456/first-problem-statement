 #include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;

int main() {
    
    std::srand(static_cast<unsigned int>(std::time(0)));

    
    int secretNumber = std::rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    
    do {
        
        std::cout << "Enter your guess between 1 and 100: ";
        std::cin >> userGuess;

        
        if (userGuess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number in " << attempts + 1 << " attempts.\n";
        }

        attempts++;

    } while (userGuess != secretNumber);

    return 0;
}
