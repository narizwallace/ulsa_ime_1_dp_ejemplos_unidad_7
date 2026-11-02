// Diapositiva 40 - Asignar y comparar registros
// Que observar: b = a copia todos los campos; despues son independientes.
// Para comparar hay que hacerlo campo por campo.
// Experimento: escribe if (a == b) y compila. Que error aparece?

#include <iostream>   // libreria para usar cout (salida a pantalla)
#include <string>     // libreria para usar el tipo string
using namespace std;  // permite escribir cout y string en lugar de std::cout y std::string

// Tipo Alumno con tres campos
struct Alumno {
    string nombre;
    int edad;
    double promedio;
};

int main() {
    Alumno a{"Ana", 19, 9.5}; // alumno con datos
    Alumno b;                 // alumno sin datos todavia

    b = a; // copia TODOS los campos de a en b, de una sola vez
    cout << "b despues de copiar: " << b.nombre << ", " << b.edad << endl;

    // No existe a == b para registros: se compara campo por campo
    // && significa "y": todas las comparaciones deben ser verdaderas
    if (a.nombre == b.nombre && a.edad == b.edad && a.promedio == b.promedio) {
        cout << "Son iguales" << endl;
    }

    b.edad = 20; // cambiar la copia no afecta al original
    cout << "a.edad = " << a.edad << ", b.edad = " << b.edad << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
