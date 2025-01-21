#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

int main(){

    student student1;

    student1.name = "kamil";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;

    student2.name = "olek";
    student2.gpa = 3.7;
    student2.enrolled = false;
    
    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << (bool)student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << (bool)student2.enrolled << '\n';

    return 0;
}