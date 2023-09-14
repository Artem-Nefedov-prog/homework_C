#include <stdio.h>
#include <iostream>


namespace myspace {
    void printNTimes (const char* str, int n = 10) {
        for (int i = 0; i < n; i++) {
            std::cout << "" << str << std::endl;
        }
    }
}

int main() {
    char s[10];
    scanf("%s", s);
    myspace::printNTimes(s, 10);
}
