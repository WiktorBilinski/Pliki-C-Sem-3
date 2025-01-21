#include <iostream>



int main(){

    int x = 4;
    int* px = &x;
    int* y = px;

    std::cout << *y << std::endl; // * DEREFERENCJA - gwizdka poza deklaracją wyciąga to co  jest pod adresem danej rzeczy. W tym przypadku pod adresem wskaznika y jest adrs innego wskanika i z tej racji * przechodzi pod ten adres
    // wychodzi z niego do wartości. W wartości jest adres x przez co znowu idzie pod ten adres (* w swojej wędrówce nie moze zostać w adresie), wychodzi z niego i bierze wartość którą jest 4. 
    std::cout << y; //referencja do adresu
    return 0;
}