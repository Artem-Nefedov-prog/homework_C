#include <stdio.h>
#include <iostream>

void cubeR(int& n) {
    n = n*n*n;
}

int main() {
    int a = 10;
    int& n = a;
    cubeR(n);
    std::cout << "" << a << std::endl;
}
