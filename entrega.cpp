#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "ingrese la cantidad de productos: ";
    cin >> n;
    vector<int> arreglo(n);  
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el precio del producto" << i << ": ";
        cin >> arreglo[i];
    }
    
        int suma = 0;
    
        for (int num : arreglo){
            suma += num;
    }
            cout<< "la suma de los productos sera : " << suma << endl;
        return 0;  
}
  