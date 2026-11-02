// Diapositiva 33 - Conversion entre numeros y cadenas
// Que observar: "25" + "1" concatena texto; 25 + 1 suma numeros.
// Experimento: cambia "42" por "hola" en stoi. Que pasa al ejecutar?

#include <iostream>   // libreria para usar cout (salida a pantalla)
#include <string>     // libreria para string, to_string, stoi y stod
using namespace std;  // permite escribir cout y string en lugar de std::cout y std::string

int main() {
    string texto = to_string(25);             // numero -> texto: "25"
    cout << "Como texto:  " << texto + "1" << endl; // + con textos los une: "251"

    int numero = stoi("42");                  // texto -> int: 42
    cout << "Como numero: " << numero + 1 << endl;  // + con numeros los suma: 43

    double decimal = stod("3.5");             // texto -> double: 3.5
    cout << "Decimal:     " << decimal * 2 << endl; // ya se puede operar: 7

    return 0; // indica al sistema operativo que el programa termino sin errores
}
