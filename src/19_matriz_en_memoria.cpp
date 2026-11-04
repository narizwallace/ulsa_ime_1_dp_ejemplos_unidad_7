// Diapositiva 19 - La matriz en memoria
// Que observar: aunque la pensamos como tabla, las direcciones son una sola fila
// continua: termina la fila 0 y enseguida empieza la fila 1.
// La posicion de m[f][c] es f * COLS + c.
// Experimento: compara la direccion de m[0][2] con la de m[1][0]. Cuantos bytes hay?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int FILAS = 2;  // numero de filas
const int COLS = 3;   // numero de columnas

int main() {
    int m[FILAS][COLS] = { {1, 2, 3}, {4, 5, 6} }; // matriz de 2 x 3

    for (int f = 0; f < FILAS; f++) {       // recorre filas
        for (int c = 0; c < COLS; c++) {    // recorre columnas
            cout << "m[" << f << "][" << c << "] = " << m[f][c]
                 << "  posicion " << f * COLS + c    // lugar del elemento en la fila continua de memoria
                 << "  direccion: " << &m[f][c] << endl; // direccion real del elemento
        }
    }

    cout << "Tamanio de la matriz: " << sizeof(m) << " bytes" << endl; // tamanio total en memoria

    return 0; // indica al sistema operativo que el programa termino sin errores
}
