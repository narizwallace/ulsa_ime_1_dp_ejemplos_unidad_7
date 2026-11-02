// Diapositiva 21 - Matrices y funciones
// Que observar: el parametro necesita el numero de columnas (COLS);
// el numero de filas se pasa aparte.
// Experimento: quita COLS del parametro (deja tablero[][]). Que error marca el compilador?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int FILAS = 3;  // numero de filas del tablero
const int COLS = 3;   // numero de columnas del tablero

// Muestra el tablero. Las columnas son obligatorias en el parametro: sin ellas
// el compilador no puede calcular donde empieza cada fila. Las filas llegan en filas.
void imprimirTablero(const char tablero[][COLS], int filas) {
    for (int f = 0; f < filas; f++) {        // recorre filas
        for (int c = 0; c < COLS; c++) {     // recorre columnas
            cout << tablero[f][c] << " ";
        }
        cout << endl; // salto de linea al terminar cada fila
    }
}

int main() {
    // Tablero de gato: matriz de caracteres de 3 x 3
    char tablero[FILAS][COLS] = {
        {'X', 'O', 'X'},
        {'-', 'X', 'O'},
        {'O', '-', 'X'}
    };

    imprimirTablero(tablero, FILAS); // se envia la matriz y cuantas filas tiene

    return 0; // indica al sistema operativo que el programa termino sin errores
}
