#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <ostream>



class BaseClass{
    public:

    BaseClass(int size){
        x = new int[size];
    } 


    ~BaseClass(){
        std::cout << "BaseData Dynamic Table has just been deleted" << std::endl;
        delete x;
    }
    
    virtual int getSize() const {
        return size;
    }
    virtual int* getX() const{
        return x;  // Zwraca wskaźnik do tablicy x
    }

    //sproboj zronic virtualny getter aby mmoc pobrac dane z pola prywatnego w klasie DerivedClas

    protected:
    int *x;
    int size;

};

class DerivedClass : public BaseClass{
    public:

    int* Extra_Data;

   int* getX() const override{
    return BaseClass::getX();
   }


    DerivedClass(int size, int extra_size) : BaseClass(size){
        Extra_Data = new int[extra_size];
        this->extra_size = extra_size;
    }

    ~DerivedClass(){
        std::cout << "DerivedClass Dynamic allocated table has just been destroyed";
        delete Extra_Data;
    }

    
    private:
    int extra_size;

};


int main() {
    // Przygotowanie tablicy tab[30]
    int tab[30];
    int temp = 0;
    for (int i = 0; i < 30; ++i) {
        tab[i] = temp++;
    }

    // Tworzenie obiektu DerivedClass
    DerivedClass* derived = new DerivedClass(10, 20);

    // Wypełnianie tablicy x w obiekcie
    for (int i = 0; i < 10; ++i) {
        derived->getX()[i] = tab[i]; // Bezpośredni dostęp do x
    }

    // Wypełnianie tablicy Extra_Data w obiekcie
    for (int i = 0; i < 20; ++i) {
        derived->Extra_Data[i] = tab[i % 30]; // Przykład wykorzystania modulo
    }

    // Wyświetlanie danych w x i Extra_Data
    std::cout << "Values in x:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << "x[" << i << "] = " << derived->getX()[i] << std::endl;
    }

    std::cout << "Values in Extra_Data:" << std::endl;
    for (int i = 0; i < 20; ++i) {
        std::cout << "Extra_Data[" << i << "] = " << derived->Extra_Data[i] << std::endl;
    }

    // Usuwanie obiektu
    delete derived;

    return 0;
}