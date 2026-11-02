// Diapositiva 50 - Apuntadores y funciones
// Que observar: las dos funciones modifican la variable original.
// Con apuntador se envia la direccion (&n); con referencia se envia la variable.
// Experimento: llama a duplicarPtr(nullptr). Que pasa? Puede pasar con la referencia?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

// Recibe una direccion; *p es la variable que esta en esa direccion
void duplicarPtr(int* p) { *p = *p * 2; } // estilo C
// Recibe la variable original con otro nombre (r); no hace falta *
void duplicarRef(int& r) { r = r * 2; }   // estilo C++

int main() {
    int n = 5;

    duplicarPtr(&n); // se envia la direccion: n vale 10
    cout << "Despues de duplicarPtr: " << n << endl;

    duplicarRef(n);  // se envia la variable:  n vale 20
    cout << "Despues de duplicarRef: " << n << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
