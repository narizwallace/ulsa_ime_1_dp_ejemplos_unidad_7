// Diapositiva 46 - Memoria y direcciones
// Que observar: &x es la direccion de x; esta en hexadecimal.
// Experimento: ejecuta el programa dos veces. La direccion es la misma?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

int main() {
    int x = 7;      // variable entera
    double y = 3.5; // variable decimal

    // x es el valor; &x es el lugar de la memoria donde ese valor esta guardado
    cout << "x vale " << x << " y vive en " << &x << endl;
    cout << "y vale " << y << " y vive en " << &y << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
