//USANDO substr(inicio, cantidad)

#include <iostream>
#include <string>

using namespace std;

// DECLARACION DE FUNCIONES

void leerDatos(string &cadena, string &subcadena);

int BuscarSubCadena(string subcadena, string cadena);

void mostrarResultado(string cadena, string subcadena, int posicion);

// MAIN

int main() {

    string cadena;
    string subcadena;
    int posicion;

    leerDatos(cadena, subcadena);

    posicion = BuscarSubCadena(subcadena, cadena);

    mostrarResultado(cadena, subcadena, posicion);

    return 0;
}

// DETALLE DE FUNCIONES

void leerDatos(string &cadena, string &subcadena) {

    cout << "Ingrese la cadena principal: ";
    getline(cin, cadena);

    cout << "Ingrese la subcadena a buscar: ";
    getline(cin, subcadena);
}

int BuscarSubCadena(string subcadena, string cadena) {

    int longitudSub;
    int longitudCadena;

    longitudSub  = subcadena.length();
    longitudCadena = cadena.length();

    for(int i=0; i<=longitudCadena-longitudSub; i++){
    if(cadena.substr(i, longitudSub)==cadena){
            return i;
    }
    else {
        return -1;
    }
}

}
void mostrarResultado(string cadena, string subcadena, int posicion) {

    cout << "\n===== RESULTADO =====" << endl;
    cout << "Cadena principal: " << cadena << endl;
    cout << "Subcadena buscada: " << subcadena << endl;

    if(posicion != -1) {
        cout << "La subcadena se encuentra en la posicion: "
             << posicion << endl;
    }
    else {
        cout << "La subcadena no se encuentra en la cadena." << endl;
    }
}
