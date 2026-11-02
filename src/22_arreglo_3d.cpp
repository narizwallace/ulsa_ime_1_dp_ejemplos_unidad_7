// Diapositiva 22 - Arreglos N-dimensionales
// Que observar: un indice y un ciclo por cada dimension.
// Total de elementos = GRUPOS x ALUMNOS x PARCIALES.
// Experimento: imprime solo las calificaciones del grupo 1.

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int GRUPOS = 2;     // primera dimension
const int ALUMNOS = 3;    // segunda dimension
const int PARCIALES = 2;  // tercera dimension

int main() {
    // calificaciones[grupo][alumno][parcial]: tres indices, uno por dimension
    double calificaciones[GRUPOS][ALUMNOS][PARCIALES] = {
        { {8, 9}, {7, 6}, {10, 9} },  // grupo 0: tres alumnos con dos parciales
        { {6, 8}, {9, 9}, {7, 8} }    // grupo 1
    };

    cout << "Total de elementos: " << GRUPOS * ALUMNOS * PARCIALES << endl; // producto de los tamanos

    // Un ciclo por dimension: grupos -> alumnos -> parciales
    for (int g = 0; g < GRUPOS; g++) {
        cout << "Grupo " << g << endl;
        for (int a = 0; a < ALUMNOS; a++) {
            cout << "  Alumno " << a << ":";
            for (int p = 0; p < PARCIALES; p++) {
                cout << " " << calificaciones[g][a][p]; // un elemento necesita los tres indices
            }
            cout << endl;
        }
    }

    return 0; // indica al sistema operativo que el programa termino sin errores
}
