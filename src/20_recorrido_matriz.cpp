// Diapositiva 20 - Recorrido de una matriz
// Que observar: el ciclo de afuera recorre filas (alumnos) y el de adentro
// columnas (parciales). suma se reinicia para cada alumno.
// Experimento: calcula tambien el promedio de cada parcial (recorrido por columnas).

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int FILAS = 3;  // alumnos
const int COLS = 4;   // parciales por alumno

int main() {
    // Cada fila es un alumno y cada columna un parcial
    double cal[FILAS][COLS] = {
        {8, 9, 7, 10},
        {6, 7, 8, 7},
        {10, 9, 9, 8}
    };

    // Ciclo externo: un alumno a la vez
    for (int f = 0; f < FILAS; f++) {
        double suma = 0; // se reinicia en 0 para cada alumno
        // Ciclo interno: suma los parciales del alumno actual
        for (int c = 0; c < COLS; c++) {
            suma += cal[f][c];
        }
        cout << "Alumno " << f + 1 << ": " << suma / COLS << endl; // promedio = suma / numero de parciales
    }

    return 0; // indica al sistema operativo que el programa termino sin errores
}
