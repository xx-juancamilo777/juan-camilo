#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int P;
    cout << "CANTIDAD INICIAL : ";
    cin >> P;
    float R;
    cout << "TASA DE INTERES: ";
    cin >> R;
    int N;
    cout << "CUANTAS VECES SE APLICA: ";
    cin >> N;
    int T;
    cout << "NUMERO DE AÑOS: ";
    cin >> T;
    float interes;
    interes = P * pow((1 + (R/N)), N*T);
    cout << fixed;      
    cout.precision(4); 
    cout << "El interes compuesto es: " << interes << endl;
    

    return 0;
}
   