// Diapositiva 43 - Registros anidados
// Que observar: a.nacimiento.anio encadena dos puntos: alumno -> fecha -> anio.
// Experimento: calcula la edad aproximada con 2026 - a.nacimiento.anio.

#include <iostream>   // libreria para usar cout (salida a pantalla)
#include <string>     // libreria para usar el tipo string
using namespace std;  // permite escribir cout y string en lugar de std::cout y std::string

// Registro para una fecha
struct Fecha {
    int dia;
    int mes;
    int anio;
};

// Alumno ahora tiene un campo que es otro registro (Fecha)
// Fecha debe definirse antes de Alumno para poder usarla aqui
struct Alumno {
    string nombre;
    int edad;
    double promedio;
    Fecha nacimiento; // campo nuevo
};

int main() {
    Alumno a;
    a.nombre = "Ana";
    a.edad = 19;
    a.promedio = 9.5;
    a.nacimiento.dia = 3;      // primer punto: campo de Alumno; segundo punto: campo de Fecha
    a.nacimiento.mes = 5;
    a.nacimiento.anio = 2007;

    cout << a.nombre << " nacio el " << a.nacimiento.dia << "/"
         << a.nacimiento.mes << "/" << a.nacimiento.anio << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
