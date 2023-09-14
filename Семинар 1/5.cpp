#include <stdio.h>
#include <iostream>

struct Book {
    char title[100];
    int pages;
    float price;
};

void addPrice(struct Book & link, float x) {
    link.price+=x;
}


int main() {
    struct Book a = {"asdf", 100, 20.7};
    float x = 1.57;
    struct Book & link = a;
    addPrice(link, x);
    std::cout << "" << a.price << std::endl;
}
