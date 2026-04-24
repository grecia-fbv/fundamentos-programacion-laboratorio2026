#include <iostream>
using namespace std;

int calculo_suma(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}

int main() {

    int n;
    cout << "Escriba un numero entero positivo (N): ";
    cin >> n;

    if (n>0) {
        int resultado = calculo_suma(n);
        cout << "La suma desde 1 hasta " <<n<< " es: " <<resultado<<endl;
    } else {
    cout <<"Ingrese numeros positivos."<<endl;
    }
    return 0;
}
