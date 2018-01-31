#include <iostream>
#include <windows.h>
#include "funciones.h"

using namespace std;

int main(){
    const int TAM = 100;
    cout << "CODIFICADOR - DECODIFICADOR" << endl;

    char cadena[TAM];

    cout << "Introduce una cadena: ";
    cin.getline(cadena, TAM);

    cout << cadena << endl;

    codificar(cadena, 5);

    cout << cadena << endl;

    decodificar(cadena, 5);

    cout << cadena << endl;


    system("pause");
    return 0;
}