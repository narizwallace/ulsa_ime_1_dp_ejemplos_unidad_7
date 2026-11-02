// Diapositiva 15 - Arreglos y funciones (repaso)
// Que observar: duplicar modifica el arreglo ORIGINAL; no se hizo una copia.
// imprimirArreglo recibe el arreglo como const porque solo lo lee.
// Experimento: dentro de imprimirArreglo intenta hacer arr[0] = 0. Que dice el compilador?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int TAM = 5;    // tamano del arreglo; se escribe una sola vez

// Muestra los elementos del arreglo. const impide modificarlo por accidente.
// La funcion no sabe el tamano del arreglo: por eso se recibe tam.
void imprimirArreglo(const int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " "; // muestra cada elemento separado por un espacio
    }
    cout << endl;
}

// Multiplica por 2 cada elemento. Sin const: la funcion SI cambia el arreglo original.
void duplicar(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        arr[i] = arr[i] * 2; // reemplaza cada elemento por su doble
    }
}

int main() {
    int numeros[TAM] = {1, 2, 3, 4, 5}; // arreglo original

    cout << "Antes:   ";
    imprimirArreglo(numeros, TAM); // se envia el arreglo y su tamano

    duplicar(numeros, TAM); // modifica directamente numeros

    cout << "Despues: ";
    imprimirArreglo(numeros, TAM); // muestra que el original cambio

    return 0; // indica al sistema operativo que el programa termino sin errores
}
