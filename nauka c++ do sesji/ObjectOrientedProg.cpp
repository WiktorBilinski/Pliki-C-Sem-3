#include <iostream>
#include <string>

class Person{
    private:
    std::string first;
    std::string last;
    public:
    
    
    
    /*Person(std::string first, std::string last) { // different way of writing constructor
        this->first = first; // this-> wskazuje na to ze ta zmienna z klasy przyjmie wartosc wpisana w () podczas inicjalizowania obiektu
        this->last = last; // lista inicjalizacyjna robi to smao co ten konstruktor
    }*/

    Person(std::string Infirst, std::string Inlast) : first/*ten first jest zmienną zadeklarowaną w klasie */(Infirst)/*za to ten tą podaną wartością/stringiem podczas inicjalizacji*/, last(Inlast) {} //constructor initialization list
    Person() = default; // pozwala na pozniejsze wykorzystywane konstruktora np. przez call base construktor z klasy dziedzicznej
    void setFirstName(const std::string& FirstName){ 
        first = FirstName;
    }

    void setLastName(const std::string& last){ // wersja z ->
        this->last = last; 
    }

    std::string getFirstName() const {
        return first;
    }

    std::string getLastName() const {
        return last;
    }

    std::string getName() const {
        return first + " " + last;
    }

    void printFullName() {
        std::cout << getFirstName() << " " << getLastName() << std::endl;
    }

    void printFullName2() {
        std::cout << getName() << std::endl;
    }
};

class Employee : public Person {
private:
std::string department;
public:
     Employee(std::string FirstName, std::string LastName, std::string Indepartment) : Person(FirstName, LastName), department(Indepartment){} //dodaje przedstrotek i zebym wiedzial ze to jest input

    std::string getDepartment() const{
        return department;
    }

    void setDepartment(const std::string& Sdepartment){
        this->department = Sdepartment;
    }

    void DisplayDepartment(){
        std::cout << getDepartment() << std::endl;
    }

    void InputDepartment(){
        std::cout << "Enter department: ";
        std::getline(std::cin, department);
    } 

    void printInfo(){
        std::cout << getName() <<" "<< getDepartment()  << std::endl;
    }
};



int main(){

    // Person p;

    // p.first = "Chleb";
    // p.last = "Suchy";

    // p.printFullName();

    // p.setFirstName("Kamil"); // set-ujemy imie
    // p.setLastName("Bednarek"); //set-ujemy nazwisko

    // p.printFullName(); // uzylem getterów w princie


    // Person p2;
    // p2.setFirstName("andrej");
    // p2.setLastName("Golowinw");
    // p2.first = "Siomon";
    // p2.last = "Says";

    //  p2.printFullName2();

     Person p3("WiemCoToKonstruktor", "AcoToListaInicjalizacyja");

     p3.printFullName2();

     Employee e("Bartek", "", "kurwidołek");
     e.printFullName();
     e.setLastName("Polak");
     e.printFullName2();
     e.DisplayDepartment();
     e.InputDepartment();  
     std::cout << " " << std::endl;
     e.printInfo();


    return 0;
}

