#include <iostream>



int main(){

    int x = 4;
    int* px = &x;
    int* y = px;

    std::cout << "wartość x wyciągnięta przez dereferencję wskaźnika y: " << *y << std::endl; // * DEREFERENCJA - gwizdka poza deklaracją wyciąga to co  jest pod adresem danej rzeczy. W tym przypadku pod adresem wskaznika y jest adrs innego wskanika i z tej racji * przechodzi pod ten adres
    // wychodzi z niego do wartości. W wartości jest adres x przez co znowu idzie pod ten adres (* w swojej wędrówce nie moze zostać w adresie), wychodzi z niego i bierze wartość którą jest 4. 
    std::cout << "wartość zapisana w wskaźniku px(adres x) wyciągnięta przez wskaźnik y: " << y << std::endl; //referencja do adresu wyciagajaca wartosc tego adresu: W tym przypadku adres x zapisany jako wartosc adresu wskaznika px
    std::cout << "Adres wskaźnika y: " << &y << std::endl;
    std::cout << "Adres wskaźnika px: " << &px << std::endl;
    return 0;
}