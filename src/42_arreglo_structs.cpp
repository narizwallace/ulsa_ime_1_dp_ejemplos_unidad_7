// Diapositiva 42 - Arreglos de registros
// Que observar: grupo[i].nombre combina el indice del arreglo con el campo.
// Cada elemento es un alumno completo: ya no hay arreglos paralelos.
// Experimento: busca tambien al alumno con el promedio mas bajo.

#include <iostream>   // libreria para usar cout (salida a pantalla)
#include <string>     // libreria para usar el tipo string
using namespace std;  // permite escribir cout y string en lugar de std::cout y std::string

// Tipo Alumno con tres campos
struct Alumno {
    string nombre;
    int edad;
    double promedio;
};

const int TAM_GRUPO = 3; // numero de alumnos del grupo

int main() {
    // Arreglo de registros: cada {} es un alumno completo
    Alumno grupo[TAM_GRUPO] = {
        {"Ana", 19, 9.5},
        {"Luis", 18, 8.7},
        {"Sofia", 18, 9.1}
    };

    // Guardamos la POSICION del mejor, no solo su promedio, para poder mostrar su nombre
    int mejor = 0; // suponemos que el mejor es el primero
    for (int i = 1; i < TAM_GRUPO; i++) {
        // grupo[i] es un alumno; .promedio es su campo
        if (grupo[i].promedio > grupo[mejor].promedio) {
            mejor = i; // encontramos uno con mejor promedio
        }
    }

    // Muestra a todos los alumnos
    for (int i = 0; i < TAM_GRUPO; i++) {
        cout << grupo[i].nombre << ": " << grupo[i].promedio << endl;
    }
    cout << "Mejor: " << grupo[mejor].nombre << endl; // con la posicion obtenemos todo su registro

    return 0; // indica al sistema operativo que el programa termino sin errores
}
