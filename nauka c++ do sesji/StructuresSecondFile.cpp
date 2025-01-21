#include <iostream>
#include <string>
#include <sstream> //obsługa iss

struct League{ //Szablon dla tworzonych struktur

    std::string Club;
    int HowMuchClubs;
    std::string Leader;
    std::string TopScorer;
    std::string TopAssistant;
    int HowMuchGoals;
    int HowMuchAssists;
};

    void cutletters(League sleague){ //dziala na kopii.
        sleague.Club.erase(0,2);
        std::cout<<sleague.Club;
    }; 
    
    void printLeague(const League& sleague){ //Dodano parametr const League& league, aby wyświetlać dane ligi przekazywane jako referencja bez modyfikacji. Dziala na oryginale.
        std::cout << "\nLiga: " << sleague.Club << std::endl;
        std::cout << "ilość klubów: " << sleague.HowMuchClubs << std::endl;
        std::cout << "1-szy zespół w tabeli: " << sleague.Leader << std::endl;
        std::cout << "Król strzelców + ilość bramek: " << sleague.TopScorer << " + " << sleague.HowMuchGoals << std::endl;
        std::cout << "Król asyst + ilość asyst: " << sleague.TopAssistant << " + " << sleague.HowMuchAssists << std::endl;
    };

    void setLeague(League& sleague) {
    std::cout << "Podaj nazwę ligi: ";
    std::getline(std::cin >> std::ws, sleague.Club); // Pobierz nazwę ligi

    std::cout << "Podaj ilość klubów: ";
    std::cin >> sleague.HowMuchClubs;
    std::cin.ignore(); // Ignoruje pozostały znak nowej linii powstały przez std::cin >>, aby getline działał poprawnie

    std::cout << "Podaj lidera: ";
    std::getline(std::cin, sleague.Leader); // Pobierz nazwę lidera

    std::cout << "Podaj króla strzelców (imię i nazwisko): ";
    std::getline(std::cin, sleague.TopScorer); // Pobierz imię i nazwisko króla strzelców (z obsługą spacji)

    std::cout << "Podaj liczbę bramek króla strzelców: ";
    std::cin >> sleague.HowMuchGoals;
    std::cin.ignore(); // Ignoruje pozostały znak nowej linii powstały przez std::cin >>, aby getline działał poprawnie

    std::cout << "Podaj króla asyst (imię i nazwisko): ";
    std::getline(std::cin, sleague.TopAssistant); // Pobierz imię i nazwisko króla asyst

    std::cout << "Podaj liczbę asyst króla asyst: ";
    std::cin >> sleague.HowMuchAssists; 
    std::cin.ignore(); // Ignoruje pozostały znak nowej linii
}



int main(){

    League league1;
    setLeague(league1);
    cutletters(league1);
    printLeague(league1);


    

    return 0;
}
/* Godzina zakończenia 23:35 Godzina rozpoczęcia: 20:35. Całą godzinę zajeło mi dowiedzenie się że std::cin powoduje znak nowej lini buforze wejściowym po wczytaniu danych.
EDIT: Godzina zakończenia 00:01. Sprawdzałem  działanie  na oryginałach i na kopiach stringów przekazywanych do funkcji. */