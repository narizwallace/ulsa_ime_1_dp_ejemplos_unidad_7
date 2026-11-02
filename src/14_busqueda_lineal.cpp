// Diapositiva 14 - Busqueda lineal
// Que observar: la funcion regresa la posicion, o -1 si el valor no esta.
// Experimento: busca un valor repetido. Que posicion regresa, la primera o la ultima?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int TAM = 5;    // tamano del arreglo; se escribe una sola vez

// Busca valor dentro de arr. Regresa su posicion, o -1 si no lo encuentra.
// arr es const porque la funcion solo lee el arreglo; tam indica cuantos elementos tiene.
int buscar(const int arr[], int tam, int valor) {
    // Revisa los elementos uno por uno, desde el inicio
    for (int i = 0; i < tam; i++) {
        if (arr[i] == valor) { // si el elemento actual es el que buscamos...
            return i;          // ...regresa su posicion y termina la funcion
        }
    }
    return -1; // si el ciclo termino, revisamos todo y no estaba; -1 nunca es un indice valido
}

int main() {
    int numeros[TAM] = {10, 20, 30, 40, 50}; // arreglo donde vamos a buscar

    cout << "Buscar 30: posicion " << buscar(numeros, TAM, 30) << endl; // si esta
    cout << "Buscar 99: posicion " << buscar(numeros, TAM, 99) << endl; // no esta: -1

    int posicion = buscar(numeros, TAM, 40); // guarda el resultado para usarlo despues
    if (posicion != -1) {                    // -1 significa "no encontrado"
        cout << "El 40 esta en la posicion " << posicion << endl;
    } else {
        cout << "El 40 no esta en el arreglo" << endl;
    }

    return 0; // indica al sistema operativo que el programa termino sin errores
}
