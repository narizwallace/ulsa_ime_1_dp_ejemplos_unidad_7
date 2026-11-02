// Diapositiva 8 - Repaso rapido: el arreglo
// Que observar: el primer elemento es el indice 0 y el ultimo es el indice 4.
// Experimento: cambia el valor de numeros[2] antes de imprimir el arreglo.

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

int main() {
    int numeros[5] = {10, 20, 30, 40, 50}; // arreglo de 5 enteros con sus valores iniciales

    cout << "numeros[0] = " << numeros[0] << endl; // primer elemento: indice 0
    cout << "numeros[4] = " << numeros[4] << endl; // ultimo elemento: indice 4 (tamano - 1)

    cout << "Arreglo completo:" << endl;
    // Recorre el arreglo: i toma los valores 0, 1, 2, 3 y 4
    for (int i = 0; i < 5; i++) {
        cout << "  numeros[" << i << "] = " << numeros[i] << endl; // muestra el elemento en la posicion i
    }

    return 0; // indica al sistema operativo que el programa termino sin errores
}
