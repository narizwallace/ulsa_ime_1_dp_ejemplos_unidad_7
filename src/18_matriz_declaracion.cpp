// Diapositiva 18 - Matrices: arreglos de dos dimensiones
// Que observar: m[fila][columna]; la primera fila y la primera columna son 0.
// Experimento: asigna un valor en m[2][3]. Que pasaria con m[3][4]?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int FILAS = 3;  // numero de filas
const int COLS = 4;   // numero de columnas

int main() {
    // Matriz de 3 filas por 4 columnas; cada {} interno es una fila
    int m[FILAS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    m[0][2] = 70; // fila 0, columna 2: reemplaza el 3 por 70

    // Ciclo externo: recorre las filas
    for (int f = 0; f < FILAS; f++) {
        // Ciclo interno: recorre las columnas de la fila actual
        for (int c = 0; c < COLS; c++) {
            cout << m[f][c] << "\t"; // \t es un tabulador para alinear las columnas
        }
        cout << endl; // al terminar una fila, salta de linea
    }

    return 0; // indica al sistema operativo que el programa termino sin errores
}
