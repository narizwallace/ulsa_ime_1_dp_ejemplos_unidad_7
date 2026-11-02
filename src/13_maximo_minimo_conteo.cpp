// Diapositiva 13 - Patrones de recorrido: maximo, minimo y conteo
// Que observar: el maximo y el minimo empiezan con el primer elemento, no con 0.
// Experimento: cambia todos los numeros a negativos e inicializa mayor en 0.
// Que valor sale como maximo? Por que esta mal?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int TAM = 5;    // tamano del arreglo; se escribe una sola vez

int main() {
    int numeros[TAM] = {30, 10, 50, 20, 40}; // numeros desordenados

    // MAXIMO: suponemos que el primero es el mayor
    int mayor = numeros[0];
    // Empezamos en 1 porque el elemento 0 ya esta en mayor
    for (int i = 1; i < TAM; i++) {
        if (numeros[i] > mayor) { // si el actual es mas grande que el mayor conocido...
            mayor = numeros[i];   // ...se convierte en el nuevo mayor
        }
    }

    // MINIMO: mismo patron, solo cambia > por <
    int menor = numeros[0];
    for (int i = 1; i < TAM; i++) {
        if (numeros[i] < menor) { // si el actual es mas chico que el menor conocido...
            menor = numeros[i];   // ...se convierte en el nuevo menor
        }
    }

    // CONTEO: cuantos elementos cumplen una condicion
    int mayoresA25 = 0; // contador: empieza en 0
    for (int i = 0; i < TAM; i++) {
        if (numeros[i] > 25) { // condicion a contar
            mayoresA25++;      // suma 1 al contador cada vez que se cumple
        }
    }

    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
    cout << "Numeros mayores a 25: " << mayoresA25 << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
