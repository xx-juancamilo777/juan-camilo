
#include <iostream>

int main() {
    char userinput = 'y';
    int counter = 0;
    while (userinput != 'q') {
        std::cout << "¿Continua? (y para sí, q para salir): ";
        std::cin >> userinput;
        std::cout << "cont: " << counter << std::endl;
        counter++;
    }
    return 0;
}

    









