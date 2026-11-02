// Diapositiva 16 - Intercambio de dos elementos
// Que observar: la variable temporal evita que se pierda el primer valor.
// Experimento: quita temp y escribe numeros[0] = numeros[1]; numeros[1] = numeros[0];
// Que valores quedan? Por que?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int TAM = 2;    // solo necesitamos dos elementos

int main() {
    int numeros[TAM] = {10, 20}; // los dos valores a intercambiar

    cout << "Antes:   " << numeros[0] << " " << numeros[1] << endl;

    int temp = numeros[0];   // 1) guarda el primer valor para no perderlo
    numeros[0] = numeros[1]; // 2) el primero recibe el valor del segundo
    numeros[1] = temp;       // 3) el segundo recibe el valor guardado

    cout << "Despues: " << numeros[0] << " " << numeros[1] << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
