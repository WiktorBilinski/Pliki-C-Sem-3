#include <iostream>
#include <chrono>

// globale
int is = 100000000;
int* tablica;

void DynamicAllocation(int is) {

    auto start = std::chrono::high_resolution_clock::now();
    tablica = new int[is];

    for(int i = 0; i < is; i++){  
        tablica[i] = i;
        tablica[i] += 50;
        // std::cout << "szufladka: " << i + 1 << " ma wartość: " << tablica[i] << std::endl;

    };

    delete [] tablica;
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
    std::cout << "Czas wykonania bez wskaznikia: " << duration.count() << " ms" << std::endl;
};
    
void DynamicAlloc2(int is) {
        auto start = std::chrono::high_resolution_clock::now();
        tablica = new int [is];
        int* w = tablica; // wskazuje na zerowy element czyli "zerowy" adres tabeli
        

        for(int i = 0; i < is; i++){  
        
        *w = i;
        *w += 50;
        w++; //iteracja w tablicy. W tabilcy konkretnie zarezerwowanych adresów zwiekszamy o jeden element tabeli(i+1), czyli w pierwszej iteracji zwiekszamy z "zerowego" na "pierwszy" adres
        // i z poprzedniego na kolejny w nastepnych iteracjach
    };

        delete [] tablica;
        auto stop = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
        std::cout << "Czas wykonania z wskaznikiem: " << duration.count() << " ms" << std::endl;
};

int main(){

    DynamicAllocation(is);
    DynamicAlloc2(is); // przekazuejmy is bez podania typu zmiennej!



    // wniosek dynamiczna alokacja pamieci na tablice z wykorzystaniem wskaznikow do zapisu i odczytu jest szybsza!
    return 0;
}