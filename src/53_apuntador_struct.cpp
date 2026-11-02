// Diapositiva 53 - Apuntadores a registros
// Que observar: (*p).nombre y p->nombre hacen lo mismo; la flecha es mas clara.
// Al cambiar p->promedio se cambia a.
// Experimento: escribe *p.nombre (sin parentesis). Que error marca el compilador?

#include <iostream>   // libreria para usar cout (salida a pantalla)
#include <string>     // libreria para usar el tipo string
using namespace std;  // permite escribir cout y string en lugar de std::cout y std::string

// Registro para una fecha
struct Fecha {
    int dia;
    int mes;
    int anio;
};

// Alumno con su fecha de nacimiento (version de la diapositiva 43)
struct Alumno {
    string nombre;
    int edad;
    double promedio;
    Fecha nacimiento;
};

int main() {
    Alumno a{"Ana", 19, 9.5, {3, 5, 2007}}; // las llaves internas llenan la Fecha
    Alumno* p = &a;                         // p guarda la direccion del registro a

    cout << (*p).nombre << endl; // primero *p (el registro), luego .nombre
    cout << p->nombre << endl;   // la flecha hace lo mismo en un solo paso

    p->promedio = 10; // modifica el campo del registro original
    cout << "a.promedio ahora vale " << a.promedio << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
