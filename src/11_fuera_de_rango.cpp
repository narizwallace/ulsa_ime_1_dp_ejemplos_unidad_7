// Diapositiva 11 - El error clasico: salirse del arreglo
// ESTE PROGRAMA TIENE UN ERROR A PROPOSITO.
// Que observar: el ciclo con <= hace una vuelta de mas y lee numeros[5],
// que no existe. El resultado es comportamiento indefinido: puede salir
// basura, un numero cualquiera o incluso funcionar "bien" por casualidad.
// Experimento: ejecutalo varias veces. Siempre sale lo mismo en la ultima linea?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int TAM = 5;    // el arreglo tiene 5 elementos: indices validos de 0 a 4

int main() {
    int numeros[TAM] = {10, 20, 30, 40, 50}; // arreglo de 5 enteros

    cout << "Ciclo correcto (i < TAM):" << endl;
    // Con < el ultimo valor de i es 4: nunca se sale del arreglo
    for (int i = 0; i < TAM; i++) {
        cout << "  numeros[" << i << "] = " << numeros[i] << endl;
    }

    cout << "Ciclo con error (i <= TAM):" << endl;
    // Con <= el ultimo valor de i es 5: lee una posicion que no pertenece al arreglo
    for (int i = 0; i <= TAM; i++) { // ERROR: la ultima vuelta usa numeros[5]
        cout << "  numeros[" << i << "] = " << numeros[i] << endl;
    }

    return 0; // indica al sistema operativo que el programa termino sin errores
}
