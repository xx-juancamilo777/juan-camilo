#include <iostream>
#include <string>
#include <functional>
#include <map>
#include <cstdlib>  // para exit

using namespace std;

// Definimos el tipo de función callback
using Operacion = function<float(float, float)>;

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cerr << "Uso: " << argv[0] << " <operando1> <operador> <operando2>\n";
        return 1;
    }

    try {
        // Convertimos los operandos a float
        float op1 = stof(argv[1]);
        string operador = argv[2];
        float op2 = stof(argv[3]);

        // Definimos las operaciones en un map
        map<string, Operacion> operaciones;
        operaciones["+"] = [](float a, float b) { return a + b; };
        operaciones["-"] = [](float a, float b) { return a - b; };
        operaciones["*"] = [](float a, float b) { return a * b; };
        operaciones["x"] = operaciones["*"];  // alias para multiplicación
        operaciones["/"] = [](float a, float b) {
            if (b == 0) {
                throw runtime_error("Error: División por cero.");
            }
            return a / b;
        };

        // Verificamos si el operador es válido
        if (operaciones.find(operador) == operaciones.end()) {
            cerr << "Error: Operador no válido. Use +, -, *, x o /.\n";
            return 1;
        }

        // Ejecutamos la operación
        float resultado = operaciones[operador](op1, op2);
        cout << "Resultado: " << resultado << endl;
    }
    catch (invalid_argument&) {
        cerr << "Error: Los operandos deben ser números válidos.\n";
        return 1;
    }
    catch (out_of_range&) {
        cerr << "Error: Número fuera de rango.\n";
        return 1;
    }
    catch (runtime_error& e) {
        cerr << e.what() << endl;
        return 1;
    }

    return 0;
}
