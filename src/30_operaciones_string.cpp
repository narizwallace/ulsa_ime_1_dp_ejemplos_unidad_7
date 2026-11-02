// Diapositiva 30 - Operaciones con cadenas
// Que observar: cada operacion de la tabla de la diapositiva con su resultado.
// Experimento: usa s.at(50). Que pasa? Y con s[50]?

#include <iostream>   // libreria para usar cout (salida a pantalla)
#include <string>     // libreria para usar el tipo string
using namespace std;  // permite escribir cout y string en lugar de std::cout y std::string

int main() {
    string s = "Mecatronica"; // cadena de 11 caracteres

    cout << "s               = " << s << endl;
    cout << "s.length()      = " << s.length() << endl;      // numero de caracteres
    cout << "s[0]            = " << s[0] << endl;            // caracter en la posicion 0 (sin validar)
    cout << "s.at(4)         = " << s.at(4) << endl;         // caracter en la posicion 4 (valida el indice)
    cout << "s.substr(0, 4)  = " << s.substr(0, 4) << endl;  // 4 caracteres a partir de la posicion 0
    cout << "s.find(\"tron\")  = " << s.find("tron") << endl; // posicion donde empieza "tron"
    // empty() responde si la cadena esta vacia; cout muestra false como 0
    cout << "s.empty()       = " << s.empty() << " (0 = false)" << endl;

    s += " 1"; // agrega texto al final de s
    cout << "s += \" 1\"       = " << s << endl; // \" permite escribir comillas dentro de un texto

    return 0; // indica al sistema operativo que el programa termino sin errores
}
