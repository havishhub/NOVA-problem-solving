#include <iostream>
#include "operations.h"

int main() {
    char userText[200];

    std::cout << "Enter a  string(max 199): ";
    std::cin.getline(userText, 200);

    toUpperCase(userText);
    removeVowels(userText);
    reverseText(userText);

    std::cout << "Processed Text: " << userText << std::endl;

    return 0;
}
