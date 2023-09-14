#include <stdio.h>
#include <iostream>
#include <string.h>


void countLetters(const char* str, int& numLetters, int& numDigits, int& numOthers) {
    for (int i = 0; i < strlen(str); i++) {
        if (((int)'a' <= (int)str[i] && (int)str[i] <= (int)'z') || ((int)'A' <= (int)str[i] && (int)str[i] <= (int)'Z')) {
            numLetters++;
        }
        if ((int)'0' <= (int)str[i] && (int)str[i] <= (int)'9') {
            numDigits++;
        }
    }
    numOthers = strlen(str) - numLetters - numDigits;
}

int main() {
    const char s[100] = "abcd__&&??!!qwerty12345-67890a"; //Letters - 11; Digits - 10; Others - 9
    int a = 0, b = 0, c = 0;
    int& numLetters = a;
    int& numDigits = b;
    int& numOthers = c;
    countLetters(s, numLetters, numDigits, numOthers);
    std::cout << "Letters: " << a << std::endl;
    std::cout << "Digits: " << b << std::endl;
    std::cout << "Others: " << c << std::endl;
}
