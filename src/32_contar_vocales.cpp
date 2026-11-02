// Diapositiva 32 - Recorrer una cadena caracter por caracter
// Que observar: el indice es size_t porque length() regresa un entero sin signo.
// Experimento: cambia size_t por int y compila. Que advertencia aparece?
// Despues, prueba con "PROGRAMACION": por que cuenta 0?

#include <iostream>   // libreria para usar cout (salida a pantalla)
#include <string>     // libreria para usar el tipo string
using namespace std;  // permite escribir cout y string en lugar de std::cout y std::string

int main() {
    string palabra = "programacion"; // texto a revisar
    int vocales = 0;                 // contador: empieza en 0

    // size_t: entero sin signo, el mismo tipo que regresa length()
    for (size_t i = 0; i < palabra.length(); i++) {
        char c = palabra[i]; // toma el caracter en la posicion i
        // || significa "o": basta con que una comparacion sea verdadera
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocales++; // es vocal: suma 1 al contador
        }
    }

    cout << palabra << " tiene " << vocales << " vocales" << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
