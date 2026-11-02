// Diapositiva 51 - Apuntadores y arreglos
// Que observar: arr y &arr[0] son la misma direccion.
// arr[i] es lo mismo que *(arr + i).
// Experimento: imprime p[2]. Funciona aunque p sea apuntador?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int TAM = 3;    // tamano del arreglo

int main() {
    int arr[TAM] = {10, 20, 30};
    int* p = arr; // el nombre del arreglo se convierte en la direccion de su primer elemento

    cout << "arr     = " << arr << endl;     // direccion del inicio del arreglo
    cout << "&arr[0] = " << &arr[0] << endl; // direccion del primer elemento: la misma

    cout << "*p       = " << *p << endl;       // valor del primer elemento: 10
    cout << "*(p + 1) = " << *(p + 1) << endl; // avanza un elemento y lee: 20
    cout << "arr[1]   = " << arr[1] << endl;   // lo mismo con indice: 20

    return 0; // indica al sistema operativo que el programa termino sin errores
}
