#include <iostream>
#include <string>
#include <chrono>

class Student{
    public:
    std::string name;

    Student(std::string name) : name(name) {};

    virtual void print(){
        std::cout << name << std::endl;
    }
    virtual ~Student(){}
    

};

class MedicalStudent : public Student{
    public:
    std::string speciality;

    MedicalStudent(std::string speciality, std::string name) : speciality(speciality), Student(name) {}// call base class constructor to set medical student name

     void print() {
        std::cout << name << " specialization: " << speciality << std::endl;
    }
};  



int main(){

    MedicalStudent Med("kardiologia", "wojtek");
    Med.print();

    Student *students[] ={
        new Student("Kamil"), // obiekt z std::string name
        new Student("Oskar"),
        new Student("Alina"),
        new MedicalStudent("Toksykologia", "Julia"),
        new MedicalStudent("Stomatologia", "pawel"),
        new MedicalStudent("Fizjoterapia", "Ania")
    };

    // for (int i = 0; i < 3; i++){
    //     std::cout << students[i] << std::endl; // wypisuje adresy bo *students[] ma logike wskaznika
    // }
    for (int i = 0; i < 6; i++){
        students[i]->print(); //aby wyświetlać dane, a nie adresy wskaźników.Należy użyć operatora -> do uzyskania dostępu do danych obiektu.
    //w tym prtdyzpadku funkcja printujaca ma w cout name ktore jset pobierane z obiektu utworzonego w danym miejscu dynamicznej tablicy wskaznikow
    }

    for (int i = 9; i<6; i++){ // dzieki stworzeniu destrukotra virtualnego  w kalsie bazowej taka petal ejst mozliwa
        delete students[i]; // zwalnia miesjce wartosc w danych szyufladkach tabeli po kazdym przejscu petli.
    }


     

    return 0;
};