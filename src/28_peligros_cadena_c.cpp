// Diapositiva 28 - Los peligros de la cadena estilo C
// Que observar: == compara direcciones, no el texto, por eso dice "diferentes"
// aunque las dos digan "Hola". El compilador incluso advierte el problema.
// strcmp si compara el texto: regresa 0 cuando son iguales.
// Experimento: copia un texto mas largo que destino con strcpy. Que pasa?

#include <iostream>   // libreria para usar cout (salida a pantalla)
#include <cstring>    // libreria con funciones para cadenas estilo C: strcmp, strcpy, strlen
using namespace std;  // permite escribir cout en lugar de std::cout

const int TAM = 10;   // espacio para cada cadena

int main() {
    char a[TAM] = "Hola"; // dos arreglos distintos con el mismo texto
    char b[TAM] = "Hola";

    // a y b son arreglos en lugares distintos de memoria: == compara esos lugares
    if (a == b) { // compara direcciones: el compilador lo advierte
        cout << "Con == : iguales" << endl;
    } else {
        cout << "Con == : diferentes" << endl;
    }

    // strcmp compara letra por letra; regresa 0 si los textos son iguales
    if (strcmp(a, b) == 0) {
        cout << "Con strcmp: iguales" << endl;
    }

    char destino[TAM];   // arreglo vacio para recibir la copia
    strcpy(destino, a);  // no se puede hacer destino = a;
    // strlen cuenta los caracteres antes del '\0'
    cout << "Copia: " << destino << ", longitud " << strlen(destino) << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
