// Diapositiva 10 - El tamano con una constante
// Que observar: TAM se escribe una sola vez; si cambia, solo cambias una linea.
// sizeof(arr) / sizeof(arr[0]) calcula el numero de elementos.
// Experimento: cambia TAM a 8 (y agrega valores). El resto del codigo no cambia.

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int TAM = 5;    // constante: su valor no puede cambiar mientras el programa corre

int main() {
    int numeros[TAM] = {10, 20, 30, 40, 50}; // el tamano viene de la constante, no de un numero suelto

    // El ciclo tambien usa TAM: si el tamano cambia, el ciclo se ajusta solo
    for (int i = 0; i < TAM; i++) {
        cout << numeros[i] << " "; // muestra cada elemento separado por un espacio
    }
    cout << endl; // salto de linea al terminar

    // bytes de todo el arreglo / bytes de un elemento = numero de elementos
    int elementos = sizeof(numeros) / sizeof(numeros[0]);
    cout << "sizeof(numeros)    = " << sizeof(numeros) << " bytes" << endl;    // todo el arreglo
    cout << "sizeof(numeros[0]) = " << sizeof(numeros[0]) << " bytes" << endl; // un solo elemento
    cout << "Elementos          = " << elementos << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
