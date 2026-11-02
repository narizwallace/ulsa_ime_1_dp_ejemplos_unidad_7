// Diapositiva 54 - Apuntadores y cadenas estilo C
// Que observar: el texto entre comillas es de solo lectura; por eso const char*.
// Experimento: escribe saludo[0] = 'J'; Que dice el compilador?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

int main() {
    const char* saludo = "Hola"; // apunta al primer caracter de un texto que no se puede modificar

    cout << saludo << endl;        // cout imprime desde esa direccion hasta el '\0'
    cout << saludo[0] << endl;     // se puede usar indice como en un arreglo: 'H'
    cout << *(saludo + 1) << endl; // o aritmetica de apuntadores: 'o'

    return 0; // indica al sistema operativo que el programa termino sin errores
}
