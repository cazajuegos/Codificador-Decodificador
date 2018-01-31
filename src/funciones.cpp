#include <iostream>
#include "funciones.h"

using namespace std;

void codificar(char * cadena, int codigo){
    int i = 0;

    while(*(cadena + i) != '\0'){
        *(cadena + i) = *(cadena + i) + codigo;
        i++;
    }
}

void decodificar(char * cadena, int codigo){
    int i = 0;

    while (*(cadena + i) != '\0'){
        *(cadena + i) = *(cadena + i) - codigo;
        i++;
    }
}