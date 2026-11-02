// Diapositiva 44 - Del TDA al codigo
// Que observar: el struct guarda los datos y las funciones son las operaciones.
// main nunca toca c.valor directamente: solo usa las operaciones del TDA.
// Experimento: agrega la operacion reiniciar(Contador& c).

#include <iostream>   // libreria para usar cout (salida a pantalla)
using namespace std;  // permite escribir cout en lugar de std::cout

// DATOS del TDA: lo que el contador necesita recordar
struct Contador {
    int valor;
};

// OPERACIONES del TDA: lo que se puede hacer con un contador
void iniciar(Contador& c)      { c.valor = 0; }      // modifica: recibe por referencia
void incrementar(Contador& c)  { c.valor++; }        // modifica: recibe por referencia
int obtener(const Contador& c) { return c.valor; }   // solo lee: referencia constante

int main() {
    Contador visitas; // un contador concreto

    iniciar(visitas);      // valor = 0
    incrementar(visitas);  // valor = 1
    incrementar(visitas);  // valor = 2
    incrementar(visitas);  // valor = 3

    cout << "Visitas: " << obtener(visitas) << endl; // se consulta con la operacion, no con .valor

    return 0; // indica al sistema operativo que el programa termino sin errores
}
