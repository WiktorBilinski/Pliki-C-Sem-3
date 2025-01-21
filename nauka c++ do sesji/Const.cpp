#include <iostream>

int main(){

    const double pi = 3.14; //we cant change something that is alredy const
    double radius = 10;
    double circumference = 2 * pi * radius;

    const int light_speed = 299792458;

    const int WIDTH = 1920;
    const int width = 1080;

    std::cout << circumference << "cm" << '\n';
    return 0;
}