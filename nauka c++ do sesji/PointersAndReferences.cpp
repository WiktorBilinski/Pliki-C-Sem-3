#include <iostream>

int x = 12;


// int pX = x;  12

// int pX = &x; ERROR: invalid conversion from 'int*' to 'int'

// int * pX = x; error: invalid conversion from 'int' to 'int*'

 int * pX = &x;  // 0x7ff6b8463000

// int y = pX; error: invalid conversion from 'int*' to 'int'

int y = *pX;  // 12

int main(){

    std::cout << x << '\n';
    std::cout << pX << '\n';
    std::cout << y;

    return 0;
}