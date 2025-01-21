#include <iostream>
#include <fstream>
#include <string>

// Definicja funkcji writeSomeContent
void writeSomeContent(const std::string& filePath, const std::string& content) {
    // Otwieranie pliku w trybie dopisywania (append)
    std::ofstream outFile(filePath, std::ios::out | std::ios::app); //ios out do zapisu | is app dopisanie od konca pliku

    if (!outFile.is_open()) {
        std::cerr << "Error opening file: " << filePath << std::endl;
        return;
    }

    // Zapis do pliku
    outFile << content << std::endl;

    // Zamknięcie pliku
    outFile.close();
}

int main() {
    std::string filePath = "file.txt"; // Ścieżka do pliku

    // Wywołanie funkcji writeSomeContent
    writeSomeContent(filePath, "Reporter: Co się słucha wykonawca i tytul?");
    writeSomeContent(filePath, "Bambi: Kurwaaaaa<Lamętujący głos żula z przepitymi strunami>");

    return 0;
}