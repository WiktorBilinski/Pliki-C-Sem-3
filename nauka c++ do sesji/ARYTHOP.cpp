#include <iostream>

  

namespace FirstAdd{
    int students = 30;
    void addStudents(){
    students = students + 3;
    }
}

namespace SecondAdd{
    int students = 30;
    void addStudents(){
    students += 1;
    }
}

int main(){
    
    int students = 20;

    FirstAdd::addStudents();
    SecondAdd::addStudents();
  
    std::cout << students << '\n' << std::endl;
    std::cout << FirstAdd::students << '\n' << std::endl;
    std::cout << SecondAdd::students << '\n' << std::endl;
    
    
    // students++;
    // students--;

    return 0;
}