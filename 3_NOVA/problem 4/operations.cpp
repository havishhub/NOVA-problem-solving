#include <iostream>
#include <cstring>
#include <cctype>
#include "operations.h"

void toUpperCase(char userText[]) {
    for (int i = 0; userText[i] != '\0'; i++) {
        userText[i] = toupper(userText[i]);
    }
}

void removeVowels(char userText[]) {
    int writeIndex = 0;
    for (int i = 0; userText[i] != '\0'; i++) {
        char letter = tolower(userText[i]);
        if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u') {
            userText[writeIndex++] = userText[i];
        }
    }
    userText[writeIndex] = '\0';  // Mark end of new string
}

void reverseText(char userText[]) {
    int left = 0;
    int right = strlen(userText) - 1;
    while (left < right) {
        std::swap(userText[left], userText[right]);
        left++;
        right--;
    }
}
