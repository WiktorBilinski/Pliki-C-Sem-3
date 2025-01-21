#include <iostream>
#include <cctype> // i wanted to try tolower()
int main(){

    double x = (int)3.13; // it is example of explicit cast.

    char y = 100; // it is d in ASCI. Its is example of implicit cast(automaic)

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%" << '\n';


    std::cout << x << '\n';
    std::cout << y << '\n';

    std::cout << (char) 123 << '\n' << (int) 'w' << std::endl;

    return 0;
}