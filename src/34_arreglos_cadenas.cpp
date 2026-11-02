// Diapositiva 34 - Arreglos de cadenas
// Que observar: un arreglo de string y una matriz de char guardan lo mismo.
// En la matriz, cada fila es una cadena estilo C.
// Experimento: imprime nombresC[1][0]. Que caracter sale?

#include <iostream>   // libreria para usar cout (salida a pantalla)
#include <string>     // libreria para usar el tipo string
using namespace std;  // permite escribir cout y string en lugar de std::cout y std::string

const int TAM = 3;    // numero de nombres
const int LARGO = 10; // maximo de caracteres por nombre en la version estilo C (incluye '\0')

int main() {
    string nombres[TAM] = {"Ana", "Luis", "Sofia"};       // cada elemento es un string
    char nombresC[TAM][LARGO] = {"Ana", "Luis", "Sofia"}; // cada fila es un arreglo de char

    for (int i = 0; i < TAM; i++) {
        // nombresC[i] es la fila i completa, que cout imprime como texto
        cout << nombres[i] << " | " << nombresC[i] << endl;
    }

    return 0; // indica al sistema operativo que el programa termino sin errores
}
