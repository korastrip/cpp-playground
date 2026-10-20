/*
* Personal Introduction Program
* Created by: Corentin NELHOMME
* Date: 7/10/26
*
* Description: This program displays personal information
* about myself in a formatted way on the console.
*
* My Learning Goals:
*
* Learn an native programming language.
*
*/

#include <iostream>
#include <string>

int main() {

    unsigned int firmSize = 0;
    const char firSymbol = '*';
    const unsigned firMinSize = 5;
    const unsigned firmMaxSize = 25;

    std::cout << "Choose a number between [" << firMinSize << "-" << firmMaxSize << "]: ";
    std::cin >> firmSize;

    if (firmSize > firmMaxSize || firmSize < firMinSize) {
        std::cerr << "The size exceed the rang";
        return -1;
    }

    int whiteSpace = firmSize;
    for (int i = 1; i <= firmSize; i++) {

        for (int t = 1; t <= whiteSpace; t++) {
            std::cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            std::cout << firSymbol << firSymbol;
        }
        std::cout << "\n";
        whiteSpace--;
    }

    return 0;
}
