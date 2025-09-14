#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int a;
    cout<<"digame su primer numero:";
    cin>>a;

    int b;
    cout<<"digame su segundo  numero:";
    cin>>b;
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }

    cout << "el maximo como un divisor es: " << a << endl;



    




    return 0;
}
