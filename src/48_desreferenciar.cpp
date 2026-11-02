// Diapositivas 47 y 48 - Que es un apuntador / Desreferenciar
// Que observar: p guarda la direccion de x; *p es el valor que esta en esa direccion.
// Al cambiar *p se cambia x.
// Experimento: imprime &p. Es la misma direccion que &x? Por que?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

int main() {
    int x = 7;   // variable normal
    int* p = &x; // p guarda la direccion de x

    cout << "&x = " << &x << endl; // direccion de x
    cout << "p  = " << p << endl;  // lo que guarda p: la misma direccion
    cout << "*p = " << *p << endl; // * "va" a esa direccion y lee el valor: 7

    *p = 10; // escribe 10 en la direccion que guarda p, es decir, en x
    cout << "Despues de *p = 10, x vale " << x << endl;

    return 0; // indica al sistema operativo que el programa termino sin errores
}
