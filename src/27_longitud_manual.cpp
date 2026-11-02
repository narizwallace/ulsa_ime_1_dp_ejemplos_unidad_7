// Diapositiva 27 - Implantacion de cadenas con arreglos
// Que observar: el ciclo no usa un tamano; se detiene al encontrar el '\0'.
// Experimento: escribe una funcion que cuente cuantas veces aparece la letra 'a'.

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

// Cuenta los caracteres de una cadena estilo C (sin contar el '\0')
int longitud(const char texto[]) {
    int i = 0;                  // posicion actual y, a la vez, contador de caracteres
    while (texto[i] != '\0') {  // mientras no lleguemos al terminador...
        i++;                    // ...avanzamos al siguiente caracter
    }
    return i; // al encontrar el '\0', i es el numero de caracteres
}

int main() {
    char palabra[] = "Mecatronica"; // sin tamano: el compilador lo calcula (11 letras + '\0')

    cout << "Texto: " << palabra << endl;
    cout << "Longitud: " << longitud(palabra) << endl;              // 11 caracteres
    cout << "Lugares en el arreglo: " << sizeof(palabra) << endl;   // 12: incluye el '\0'

    return 0; // indica al sistema operativo que el programa termino sin errores
}
