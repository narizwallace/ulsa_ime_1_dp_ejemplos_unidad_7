// Diapositiva 39 - El registro en memoria
// Usamos campos simples para ver el relleno; con string, el tamano depende del compilador.
// Que observar: los campos suman 13 bytes, pero el registro ocupa 16.
// offsetof dice en que byte empieza cada campo: edad no empieza en el 1, sino en el 4.
// Experimento: cambia el orden de los campos (double primero). Cambia sizeof?

#include <iostream>   // libreria para usar cout (salida a pantalla)
#include <cstddef>    // libreria para usar offsetof
using namespace std;  // permite escribir cout en lugar de std::cout

// Registro con tres campos de tamanos distintos
struct Ejemplo {
    char inicial;    // 1 byte + 3 de relleno
    int edad;        // 4 bytes
    double promedio; // 8 bytes
};

int main() {
    // Lo que "deberia" ocupar si no hubiera relleno
    cout << "Suma de campos: "
         << sizeof(char) + sizeof(int) + sizeof(double) << " bytes" << endl;
    // Lo que realmente ocupa
    cout << "sizeof(Ejemplo): " << sizeof(Ejemplo) << " bytes" << endl;

    // offsetof(tipo, campo): byte donde empieza el campo, contado desde el inicio del registro
    cout << "inicial empieza en el byte " << offsetof(Ejemplo, inicial) << endl;
    cout << "edad empieza en el byte    " << offsetof(Ejemplo, edad) << endl;     // 4, no 1: hay relleno
    cout << "promedio empieza en el byte " << offsetof(Ejemplo, promedio) << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
