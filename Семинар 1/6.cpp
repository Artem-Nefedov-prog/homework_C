#include <stdio.h>
#include <iostream>

struct Book {
    char title[100];
    int pages;
    float price;
};

bool isExpensive (const struct Book & link) {
    if (link.price > 1000) {
        return true;
    }
    return false;
}

int main() {
    struct Book a = {"asdf", 100, 10000};
    const struct Book & link = a;
    std::cout << "" << isExpensive(link) << std::endl;
}
