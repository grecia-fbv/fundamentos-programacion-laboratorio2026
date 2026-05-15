#include<iostream>
using namespace std;

float calcularPromedio(float n1, float n2, float n3);
void mostrarResultado(float promedio);

int main()
{
    float nota1, nota2, nota3;
    float promedio; //variable incorrecta, de int a float

    cout<<"Ingrese nota 1: ";
    cin>>nota1;

    cout<<"Ingrese nota 2: ";
    cin>>nota2;

    cout<<"Ingrese nota 3: ";
    cin>>nota3;

    promedio = calcularPromedio(nota1, nota2, nota3); //Faltaba poner la variable de retorno de la funciòn

    mostrarResultado(promedio);

    return 0;
}

float calcularPromedio(float n1, float n2, float n3) {
    float prom;
    prom = (n1 + n2 + n3) / 3.0;//Parentesis y .0 para que muestre decimales

    cout << "Promedio calculado: " << prom << endl;

    return prom;//faltaba

    }

void mostrarResultado(float promedio) {//habia un ;
    if (promedio >= 51) {
        cout << "ESTADO: APROBADO" << endl;
    } else {
        cout << "ESTADO: REPROBADO" << endl;
    }
}
