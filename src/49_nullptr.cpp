// Diapositiva 49 - nullptr: el apuntador que no apunta a nada
// Que observar: antes de usar *p se revisa que p no sea nullptr.
// Experimento: quita el if y desreferencia el nullptr. Que pasa al ejecutar?

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

int main() {
    int* p = nullptr; // inicializado: deja claro que todavia no apunta a nada

    // Antes de usar *p, verificamos que si apunte a algo
    if (p != nullptr) {
        cout << "p apunta a " << *p << endl;
    } else {
        cout << "p no apunta a nada" << endl;
    }

    int x = 5;
    p = &x; // ahora p guarda la direccion de x

    if (p != nullptr) {
        cout << "Ahora p apunta a " << *p << endl; // es seguro desreferenciar
    }

    return 0; // indica al sistema operativo que el programa termino sin errores
}
