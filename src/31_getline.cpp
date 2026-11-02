// Diapositiva 31 - Leer cadenas del teclado
// Que observar: cin >> lee solo hasta el primer espacio; getline lee la linea completa.
// cin.ignore limpia el salto de linea que deja cin >> antes de usar getline.
// Experimento: comenta la linea de cin.ignore y ejecuta. Que pasa con el nombre?

#include <iostream>   // libreria para usar cin y cout (entrada y salida)
#include <string>     // libreria para usar el tipo string y getline
#include <limits>     // libreria para usar numeric_limits
using namespace std;  // permite escribir cout, cin y string sin std::

int main() {
    int edad;       // aqui se guarda la edad que escriba el usuario
    string nombre;  // aqui se guarda el nombre completo

    cout << "Edad: ";
    cin >> edad; // lee el numero, pero deja en la entrada el Enter que presiono el usuario

    // Descarta todo lo que quedo en la entrada hasta el Enter ('\n'), incluido el Enter
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Nombre completo: ";
    getline(cin, nombre); // lee toda la linea, con espacios, hasta el Enter

    cout << "Hola, " << nombre << ". Tienes " << edad << " anios." << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
