// Diapositiva 9 - Como vive un arreglo en memoria
// Que observar: las direcciones van de 4 en 4 (lo que ocupa un int),
// porque los elementos estan uno junto al otro (memoria contigua).
// Las direcciones estan en hexadecimal y cambian cada vez que ejecutas.
// Experimento: cambia el arreglo a double. De cuanto en cuanto avanzan ahora?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int TAM = 5;    // tamano del arreglo; se escribe una sola vez

int main() {
    int numeros[TAM] = {10, 20, 30, 40, 50}; // arreglo de 5 enteros

    cout << "Cada int ocupa " << sizeof(int) << " bytes" << endl; // tamano de cada elemento

    // Recorre el arreglo mostrando cada valor y la direccion donde esta guardado
    for (int i = 0; i < TAM; i++) {
        cout << "numeros[" << i << "] = " << numeros[i]
             << "  direccion: " << &numeros[i] << endl; // & obtiene la direccion del elemento
    }

    return 0; // indica al sistema operativo que el programa termino sin errores
}
