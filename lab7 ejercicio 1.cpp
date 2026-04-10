#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de terminos: ";
    cin >> n;

    int f0 = 0, f1 = 1, f;
    int impar = 1;
    int i = 0;

    double suma = 0.0;

    while (i < n) {
        // mostrar termino
        cout << f0 << "/" << impar;

        // suma del termino
        suma += (double)f0 / impar;

        if (i < n - 1) cout << " + ";

        // aumento del numerador
        f = f0 + f1;
        f0 = f1;
        f1 = f;

        // aumento del denominador
        impar += 2;

        i++;
    }

    cout << endl;
    cout << "Suma = " << suma << endl;

    return 0;
}
