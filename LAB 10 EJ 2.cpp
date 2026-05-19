#include <iostream>
using namespace std;

double calculo_promedio(int n) {
    double suma = 0, valor;
    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el valor " << i << ": ";
        cin >> valor;
        suma += valor;
    }
    if (n>0){
        return suma/n;
    } else{
    return 0;}
}
int main(){
    int cantidad;
    cout <<"Valores para promediar: ";
    cin >> cantidad;

    if (cantidad>0){
        double promedio = calculo_promedio(cantidad);
        cout << "El promedio es: "<<promedio<<endl;
    } else{
    cout << "No es posible sacar promedio para un numero negativo."<<endl;
    }
    return 0;
}
