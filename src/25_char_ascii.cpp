// Diapositiva 25 - El tipo char por dentro
// Que observar: cada caracter es un numero segun la tabla ASCII.
// El caracter '0' vale 48, no 0.
// Experimento: imprime char(letra + 1). Que letra sale?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

int main() {
    char letra = 'A';      // comillas simples: un solo caracter
    char minuscula = 'a';
    char digito = '0';     // el caracter cero, que no es lo mismo que el numero 0

    // int(...) convierte el caracter a su numero en la tabla ASCII
    cout << letra << " = " << int(letra) << endl;
    cout << minuscula << " = " << int(minuscula) << endl;
    cout << digito << " = " << int(digito) << endl;

    cout << "Las letras de la A a la E:" << endl;
    // Como un char es un numero, se puede usar en un ciclo: c++ avanza a la siguiente letra
    for (char c = 'A'; c <= 'E'; c++) {
        cout << "  " << c << " = " << int(c) << endl;
    }

    return 0; // indica al sistema operativo que el programa termino sin errores
}
