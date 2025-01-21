#include <iostream>

// template <typename T>


// class InArray
// {
//     public:

//     int array[10];

//     void fillArray(int value){
//         for(int i = 0; i< 10; i++){
//             array[i] = value;
//         }

//     }
//     int& at(int index){//reference. Referencja to alias (inna nazwa) dla zmiennej. Po jej zainicjalizowaniu wskazuje zawsze na tę samą zmienną i nie może być „przełączona” na inną zmienną. 
//         return array[index]; //reference to that element of the array
//     }

// };

// class StringArray
// {
//     public:

//     std::string array[10];

//     void fillArray(int value){
//         for(int i = 0; i< 10; i++){
//             array[i] = value;
//         }

//     }
//     std::string& at(int index){ 
//         return array[index]; 
//     }

// };

//This two classes are indentical exept type of array and values in array so we can use templates to refactor this

template <typename T> //cretaed generic class using this template prefix
class Array
{
    public:

    T array[10];


    void fillArray(T value){
        for(int i = 0; i < 10; i++){
            array[i] = value;
            value ++;
        }

    }
    T& at(T index){ 
        return array[index]; 
    }

};

template<typename T, int lenght>
class Array2
{
    public:

    T array[lenght];

    T i;

    void fillArray(T value){
        for(int i = 0; i < lenght; i++){
            array[i] = value;
        }

    }
    T& at(int index){ 
        return array[index]; 
    }

};

int main(){

    Array<int> intArr;

    intArr.fillArray(2);

    std::cout << "4 element of array: " << intArr.at(6) << std::endl;

    Array2<int, 8> intArr2; // in place of T there is int. In place of lenght there is 8

    intArr2.fillArray(7);

    std::cout << "7 element of array: " << intArr2.at(7) << std::endl;

    Array2<std::string, 5> stringArr;

    stringArr.fillArray("Kolos");

    std::cout << "any element of array: " << stringArr.at(3) << std::endl;


    return 0;
}