// Diapositivas 37 y 38 - Que es un registro / Crear y usar un registro
// Que observar: struct define un tipo nuevo; a y b son variables de ese tipo.
// Cada campo se usa con el operador punto.
// Experimento: agrega un campo matricula de tipo int y muestralo.

#include <iostream>   // libreria para usar cout (salida a pantalla)
#include <string>     // libreria para usar el tipo string
using namespace std;  // permite escribir cout y string en lugar de std::cout y std::string

// Define el tipo Alumno: agrupa datos de distinto tipo que describen a una persona.
// Esto todavia no crea ninguna variable; solo describe como es un Alumno.
struct Alumno {
    string nombre;    // campo 1
    int edad;         // campo 2
    double promedio;  // campo 3
}; // no olvides el punto y coma

int main() {
    Alumno a;           // variable del tipo Alumno, con sus campos sin valor
    a.nombre = "Luis";  // el punto accede a cada campo
    a.edad = 18;
    a.promedio = 8.7;

    Alumno b{"Ana", 19, 9.5}; // se inicializa con llaves, en el orden de los campos

    cout << a.nombre << ", " << a.edad << " anios, promedio " << a.promedio << endl;
    cout << b.nombre << ", " << b.edad << " anios, promedio " << b.promedio << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
