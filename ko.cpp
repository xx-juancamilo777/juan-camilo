
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename = "archivo.md"; // Cambia por el nombre de tu archivo md
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "No se pudo abrir el archivo: " << filename << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();