// Diapositiva 12 - Recorrido: la suma de un conjunto de numeros
// Que observar: como crece suma en cada vuelta.
// Invariante: al iniciar cada vuelta, suma contiene la suma de los elementos 0 a i-1.
// Experimento: calcula tambien el promedio. Cuidado con la division entera.

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int TAM = 5;    // tamano del arreglo; se escribe una sola vez

int main() {
    int numeros[TAM] = {10, 20, 30, 40, 50}; // arreglo de 5 enteros con sus valores iniciales

    int suma = 0; // acumulador: empieza en 0 porque aun no se ha sumado nada

    // Recorre el arreglo: i toma los valores 0, 1, 2, 3 y 4
    for (int i = 0; i < TAM; i++) {
        suma += numeros[i]; // agrega el elemento actual a lo acumulado
        cout << "Vuelta " << i << ": se suma " << numeros[i]
             << ", suma = " << suma << endl; // muestra como va creciendo la suma
    }

    cout << "Suma: " << suma << endl; // al terminar el ciclo, suma tiene el total

    return 0; // indica al sistema operativo que el programa termino sin errores
}
