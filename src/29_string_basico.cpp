// Diapositiva 29 - std::string: la cadena de C++
// Que observar: se asigna con =, se compara con == y se concatena con +.
// No hay que preocuparse por el tamano ni por el '\0'.
// Experimento: agrega tu apellido a nombre con += y vuelve a imprimir el saludo.

#include <iostream>   // libreria para usar cout (salida a pantalla)
#include <string>     // libreria para usar el tipo string
using namespace std;  // permite escribir cout y string en lugar de std::cout y std::string

int main() {
    string nombre = "Ana";            // crea una cadena con el texto "Ana"
    string saludo = "Hola, " + nombre; // + une (concatena) dos textos

    cout << saludo << endl;

    if (nombre == "Ana") { // con string, == si compara el texto
        cout << "El nombre es Ana" << endl;
    }

    nombre = "Luis"; // con string se puede asignar con = en cualquier momento
    cout << "Ahora el nombre es " << nombre << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
