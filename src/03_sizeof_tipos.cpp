// Diapositiva 3 - Estructuras primitivas de datos
// Que observar: cuantos bytes ocupa cada tipo primitivo en TU computadora.
// Experimento: agrega sizeof(long long) y sizeof(float). Que tamano tienen?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

int main() {
    // sizeof(tipo) regresa cuantos bytes ocupa ese tipo en memoria
    cout << "sizeof(char)   = " << sizeof(char) << " byte" << endl;   // un caracter
    cout << "sizeof(bool)   = " << sizeof(bool) << " byte" << endl;   // verdadero o falso
    cout << "sizeof(int)    = " << sizeof(int) << " bytes" << endl;   // entero
    cout << "sizeof(double) = " << sizeof(double) << " bytes" << endl; // numero con decimales

    int edad = 18; // variable entera con valor inicial 18
    // sizeof tambien funciona con una variable: mide el tamano de su tipo
    cout << "sizeof(edad)   = " << sizeof(edad) << " bytes (una variable int)" << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
