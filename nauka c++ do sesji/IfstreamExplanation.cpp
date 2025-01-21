#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream inFile;

    inFile.open("file.txt");

    if (inFile.fail()){
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    int number = 0;

    inFile >> number;
    inFile >> number;

    if (inFile.fail()){
        std::cout << "Error file format incorrect." << std::endl;
    }


    std::cout << number << std::endl;

    inFile.close();
    return 0;
}