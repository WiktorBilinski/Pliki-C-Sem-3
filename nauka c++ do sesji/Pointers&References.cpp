#include <iostream>

int x = 12;


 int pX = x;

// int pX = &x;

// int * pX = x;

// int * pX = &x;

int main(){

    std::cout << x << '\n';
    std::cout << pX;

    return 0;
}