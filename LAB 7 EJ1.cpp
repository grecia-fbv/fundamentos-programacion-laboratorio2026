#include <iostream>

using namespace std;

int main() {
    int n;
    float total = 0.0, a = 0, b = 1, sig, den = 1;

    cout << "Terminos: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << a << "/" << den;

        // Calculamos la suma usando float
        total = total + (a / den);

        if (i < n - 1) cout << " + ";

        sig = a + b;
        a = b;
        b = sig;
        den = den + 2;
    }

    cout << "\nSuma total: " << total << endl;

    return 0;
}
