// Diapositiva 17 - Ordenamiento burbuja
// Que observar: despues de cada pasada, el mayor de los que faltan "sube" al final.
// Experimento: cambia > por < en la comparacion. Como queda ordenado ahora?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int TAM = 5;    // tamano del arreglo; se escribe una sola vez

// Muestra los elementos del arreglo; const porque solo lo lee
void imprimirArreglo(const int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void imprimirLinea(
    int largo, char simbolo) {
  for (int i = 0; i < largo; i++)
    cout << simbolo;
  cout << endl;
}

int main() {
    int numeros[TAM] = {50, 20, 40, 10, 30}; // arreglo desordenado

        imprimirLinea(30, '=');

    cout << "Inicio:    ";
    imprimirArreglo(numeros, TAM);

    imprimirLinea(30, '-');

    int numeroCiclos = 0; // contador de ciclos (comparaciones)
    // Ciclo externo: cada vuelta es una "pasada" completa por el arreglo
    for (int i = 0; i < TAM - 1; i++) {
        // Ciclo interno: compara vecinos. Resta i porque los ultimos i ya estan en su lugar
        for (int j = 0; j < TAM - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) { // si estan en desorden...
                int temp = numeros[j];         // ...se intercambian con una variable temporal
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;

                numeroCiclos++; // cuenta cada comparacion que resulto en intercambio
            }
        }
        cout << "Pasada " << i + 1 << ":  "; // i + 1 para contar desde 1
        imprimirArreglo(numeros, TAM);         // muestra el estado despues de la pasada
    }

    cout << "Numero Ciclos:     " << numeroCiclos << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
