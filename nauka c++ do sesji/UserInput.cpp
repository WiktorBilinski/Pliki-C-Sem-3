#include <iostream>

// cout << (insertion operator)
// cin >> (extaraction operator) (character input)

int main(){

    std::string name;
    int age;

    std::cout << "whats tour age: ";
    std::cin >> age;

    std::cout << "whats your full name: "; 
    //std::getline(std::cin, name); // helps write texts with spaces into string variable 
    //but it accepts \n in buffer so in this case cout and cin age happens,
    // than cout asking full name and getline() download cout hello:
    // (bacasue all program happens simultaneously) becasue of \n included in fuction.
    // So becasue of that we have your age:21 and your full name: hello:
    // std::cin >> name; // pobera pojedyncze stringi bez tego co po spacji
    std::getline(std::cin >> std::ws, name); //ws is white spaces
    
    std::cout << "hello: " << name << " u r " << age << " years old" << '\n';

    return 0;
};