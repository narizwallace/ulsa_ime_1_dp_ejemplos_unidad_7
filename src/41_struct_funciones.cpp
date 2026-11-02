// Diapositiva 41 - Registros y funciones
// Que observar: subirPunto recibe una referencia y modifica el original.
// imprimirAlumno usa const & : no copia y no permite modificar.
// Experimento: quita el & de subirPunto. Cambia el promedio de luis?

#include <iostream>   // libreria para usar cout (salida a pantalla)
#include <string>     // libreria para usar el tipo string
using namespace std;  // permite escribir cout y string en lugar de std::cout y std::string

// Tipo Alumno con tres campos
struct Alumno {
    string nombre;
    int edad;
    double promedio;
};

// const Alumno& : recibe el original sin copiarlo y sin poder modificarlo (solo lectura)
void imprimirAlumno(const Alumno& a) {
    cout << a.nombre << " - " << a.promedio << endl;
}

// Alumno& : recibe el original y SI puede modificarlo
void subirPunto(Alumno& a) {
    a.promedio += 1; // cambia el promedio del alumno original
}

int main() {
    Alumno luis{"Luis", 18, 8.5};

    imprimirAlumno(luis); // muestra 8.5
    subirPunto(luis);     // modifica a luis directamente
    imprimirAlumno(luis); // muestra 9.5

    return 0; // indica al sistema operativo que el programa termino sin errores
}
