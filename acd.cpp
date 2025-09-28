#include <iostream>
using namespace std;

bool palindromo(int x) {
   
    if (x < 0) return false;

    long long inicial = x;
    long long invertido = 0;

    while (x > 0) {
        int digit = x % 10;                                                                                                                                                                
        invertido= invertido * 10 + digit; 
        x /= 10;                    
    }

    return inicial == invertido;
}

int main() {
    int x;
    cout << "Ingrese el numero: ";
    cin >> x;

    if (palindromo(x))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}

