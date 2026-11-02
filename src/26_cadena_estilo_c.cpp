// Diapositiva 26 - Cadena estilo C: un arreglo de char
// Que observar: "Hola" tiene 4 letras pero ocupa 5 lugares por el '\0'.
// Experimento: declara char saludo[4] = "Hola"; Que dice el compilador?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

const int TAM = 5;    // 4 letras + 1 lugar para el terminador '\0'

int main() {
    char saludo[TAM] = "Hola"; // el compilador agrega el '\0' al final automaticamente

    cout << "Texto: " << saludo << endl;                       // cout imprime hasta encontrar el '\0'
    cout << "Lugares en el arreglo: " << sizeof(saludo) << endl; // 5, no 4

    // Recorre las 5 posiciones, incluida la del terminador
    for (int i = 0; i < TAM; i++) {
        cout << "saludo[" << i << "] = ";
        if (saludo[i] == '\0') {   // el terminador no se ve en pantalla...
            cout << "\\0";         // ...asi que mostramos el texto \0 en su lugar
        } else {
            cout << "'" << saludo[i] << "'";
        }
        cout << " (codigo " << int(saludo[i]) << ")" << endl; // su numero ASCII; el '\0' vale 0
    }

    return 0; // indica al sistema operativo que el programa termino sin errores
}
