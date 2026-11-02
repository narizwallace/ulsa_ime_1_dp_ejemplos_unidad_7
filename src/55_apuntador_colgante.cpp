// Diapositiva 55 - Errores comunes con apuntadores
// ESTE PROGRAMA TIENE UN ERROR A PROPOSITO.
// Que observar: el compilador ADVIERTE el error al compilar:
// "address of local variable 'local' returned". Lee siempre las advertencias.
// local deja de existir al terminar malo(); el apuntador queda colgando.
// Experimento: corrige malo() para que regrese el valor (int) en lugar de la direccion.

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

// Regresa la direccion de una variable que deja de existir al terminar la funcion
int* malo() {
    int local = 5;  // variable local: solo vive mientras malo() se ejecuta
    return &local; // ERROR: local desaparece al terminar la funcion
}

int main() {
    int* p = malo(); // p recibe una direccion que ya no es valida

    // No usamos *p: leer esa memoria es comportamiento indefinido
    if (p == nullptr) {
        cout << "p es nullptr: g++ protegio el programa, pero el codigo sigue mal" << endl;
    } else {
        cout << "p apunta a memoria que ya no existe" << endl;
    }

    return 0; // indica al sistema operativo que el programa termino sin errores
}
