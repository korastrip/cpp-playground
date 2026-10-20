//
// Created by Corentin on 20/10/2026.
//

#include <iostream>
#include <limits>
#include <ctime>

int main() {

    std::srand(time(nullptr));

    unsigned numberToGuess = std::rand() % 100 + 1;
    int maxTry{6};
    unsigned minRange{1};
    unsigned maxRange{100};

    unsigned guess{};

    while (guess != numberToGuess) {

        if (maxTry == 0) {
            std::cerr << "You loose all your life bye bye\n";
            std::cerr << "The guess number was " << numberToGuess;
            return -1;
        }

        std::cout << "Enter a number between " << minRange << " & " << maxRange << ": ";
        std::cin >> guess;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            guess = 0;
            continue;
        }


        if (guess < minRange || guess > maxRange) {
            std::cerr << "The number has to be between [" << minRange << " and " << maxRange << "]\n";
            continue;
        }

        if (guess == numberToGuess) {
            std::cout << "You guess the good number : " << numberToGuess;
            break;
        }

        std::cout << "Wrong number, try again\n";
        if (numberToGuess > guess) {
            std::cout << "The number is too small\n";
        } else {
            std::cout << "The number is too big\n";
        }


        maxTry--;
    }

    return 0;
}
