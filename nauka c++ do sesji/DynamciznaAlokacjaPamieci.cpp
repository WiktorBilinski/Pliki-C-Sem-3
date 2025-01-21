#include <iostream>


int main(){

    
    int ile;

    std::cout << "podaj ile liczb w tablicy: " << std::endl;
    std::cin >> ile;

    int* tablica; // wskaźnik (musi przechowywac adres)(w tej deklaracji nic nie przechowuje) //dobulke 8 bajtów
    // int* w;
    tablica = new int [ile];//obszar zarezerwowanej pamięci // po new musi byc ten sam rodzaj danych co w deklaracji wskaznika 
    // w = &tablica; 

    // for (int i=0; i<ile; i++)
    // {
    //     std::cout << tablica << std::endl;
    //     tablica++;
    // }
    
    
    delete [] tablica;
    std::cout << tablica << std::endl;
    return 0;
}