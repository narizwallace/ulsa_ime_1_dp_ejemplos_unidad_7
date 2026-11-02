// Diapositiva 52 - Aritmetica de apuntadores
// Que observar: p++ avanza de 4 en 4 bytes (el tamano de un int), no de 1 en 1.
// Experimento: cambia el arreglo a double. De cuanto en cuanto avanza p?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int TAM = 3;    // tamano del arreglo

int main() {
    int arr[TAM] = {10, 20, 30};

    // p empieza en el primer elemento; arr + TAM es la direccion justo despues del ultimo
    // p++ avanza al siguiente elemento (no al siguiente byte)
    for (int* p = arr; p < arr + TAM; p++) {
        cout << "direccion " << p << " -> valor " << *p << endl;
    }

    return 0; // indica al sistema operativo que el programa termino sin errores
}
