# Ejemplos de la Unidad VII: Estructuras de datos simples

Diseño de Programas · Ingeniería en Mecatrónica · La Salle Saltillo

Este repositorio contiene un programa por tema de la presentación de la Unidad VII. Cada archivo lleva al inicio el número de diapositiva a la que corresponde, así que en la carpeta `src` aparecen en el mismo orden que en la presentación.

Cada programa es completo e independiente: tiene su propio `main` y se compila solo. Al inicio de cada archivo encontrarás un comentario con:

- **Diapositiva:** el tema que acompaña.
- **Qué observar:** en qué fijarte cuando lo ejecutes.
- **Experimento:** un cambio para que lo pruebes tú. Rompe el programa a propósito, observa qué pasa y entiende por qué.

Además, cada línea de código lleva un comentario que explica qué hace.

> **Sobre los comentarios:** en estos ejemplos se comenta cada línea como apoyo para aprender a leer código. En un programa real no se hace así: los buenos nombres de variables y funciones explican *qué* hace el código, y los comentarios se reservan para explicar *por qué* se hizo de esa forma.

## Cómo ejecutar un ejemplo

### Opción 1: desde VSCode (la más rápida)

1. Abre la carpeta del repositorio en VSCode.
2. Abre el archivo del ejemplo que quieres ejecutar.
3. Presiona `Cmd + Shift + B` en macOS o `Ctrl + Shift + B` en Windows.

La tarea **Compilar y ejecutar ejemplo** crea la carpeta `build` si no existe, compila el archivo que tienes abierto y lo ejecuta en la terminal de VSCode.

> En Windows, la tarea está pensada para la terminal de PowerShell, que es la que VSCode usa por defecto.

### Opción 2: desde la terminal

Desde la carpeta del repositorio:

**macOS**
```bash
mkdir -p build
g++ -Wall -Wextra -std=c++17 src/10_tamano_constante.cpp -o build/ejemplo
./build/ejemplo
```

**Windows (PowerShell)**
```powershell
New-Item -ItemType Directory -Force build | Out-Null
g++ -Wall -Wextra -std=c++17 src/10_tamano_constante.cpp -o build/ejemplo.exe
.\build\ejemplo.exe
```

Cambia `10_tamano_constante.cpp` por el archivo que quieras ejecutar. La primera línea crea la carpeta `build` (solo hace falta la primera vez). El ejecutable `ejemplo` se guarda ahí, se reemplaza cada vez y no se sube al repositorio.

## Ejemplos con errores a propósito

Estos programas muestran errores comunes. Compilan, pero tienen un problema que debes identificar:

| Archivo | Qué pasa |
|---|---|
| `11_fuera_de_rango.cpp` | El ciclo con `<=` lee un elemento que no existe: comportamiento indefinido. |
| `28_peligros_cadena_c.cpp` | Compara cadenas estilo C con `==`. El compilador muestra una advertencia. |
| `55_apuntador_colgante.cpp` | Regresa la dirección de una variable local. El compilador muestra una advertencia. |

**Lee siempre las advertencias del compilador:** casi siempre señalan un error real.

## Índice de ejemplos

### Bloque A: Conceptos generales

| Diapositiva | Archivo | Tema |
|---|---|---|
| 3 | `03_sizeof_tipos.cpp` | Estructuras primitivas y `sizeof` |

### Bloque B: Arreglos

| Diapositiva | Archivo | Tema |
|---|---|---|
| 8 | `08_arreglo_basico.cpp` | Repaso: el arreglo |
| 9 | `09_direcciones_arreglo.cpp` | El arreglo en memoria |
| 10 | `10_tamano_constante.cpp` | El tamaño con una constante |
| 11 | `11_fuera_de_rango.cpp` | Salirse del arreglo |
| 12 | `12_suma_recorrido.cpp` | Recorrido: suma de un conjunto de números |
| 13 | `13_maximo_minimo_conteo.cpp` | Máximo, mínimo y conteo |
| 14 | `14_busqueda_lineal.cpp` | Búsqueda lineal |
| 15 | `15_arreglos_funciones.cpp` | Arreglos y funciones |
| 16 | `16_intercambio.cpp` | Intercambio de dos elementos |
| 17 | `17_burbuja.cpp` | Ordenamiento burbuja |
| 18 | `18_matriz_declaracion.cpp` | Matrices |
| 19 | `19_matriz_en_memoria.cpp` | La matriz en memoria |
| 20 | `20_recorrido_matriz.cpp` | Recorrido de una matriz |
| 21 | `21_matriz_funciones.cpp` | Matrices y funciones |
| 22 | `22_arreglo_3d.cpp` | Arreglos N-dimensionales |

### Bloque C: Cadenas

| Diapositiva | Archivo | Tema |
|---|---|---|
| 25 | `25_char_ascii.cpp` | El tipo `char` por dentro |
| 26 | `26_cadena_estilo_c.cpp` | Cadena estilo C |
| 27 | `27_longitud_manual.cpp` | Implantación de cadenas con arreglos |
| 28 | `28_peligros_cadena_c.cpp` | Los peligros de la cadena estilo C |
| 29 | `29_string_basico.cpp` | `std::string` |
| 30 | `30_operaciones_string.cpp` | Operaciones con cadenas |
| 31 | `31_getline.cpp` | Leer cadenas del teclado |
| 32 | `32_contar_vocales.cpp` | Recorrer una cadena |
| 33 | `33_conversiones.cpp` | Conversión entre números y cadenas |
| 34 | `34_arreglos_cadenas.cpp` | Arreglos de cadenas |

### Bloque D: Registros

| Diapositiva | Archivo | Tema |
|---|---|---|
| 37 y 38 | `38_struct_crear_usar.cpp` | Qué es un registro y cómo se usa |
| 39 | `39_struct_memoria.cpp` | El registro en memoria |
| 40 | `40_asignar_comparar.cpp` | Asignar y comparar registros |
| 41 | `41_struct_funciones.cpp` | Registros y funciones |
| 42 | `42_arreglo_structs.cpp` | Arreglos de registros |
| 43 | `43_struct_anidado.cpp` | Registros anidados |
| 44 | `44_tda_contador.cpp` | Del TDA al código |

### Bloque E: Apuntadores

| Diapositiva | Archivo | Tema |
|---|---|---|
| 46 | `46_direcciones.cpp` | Memoria y direcciones |
| 47 y 48 | `48_desreferenciar.cpp` | Qué es un apuntador y cómo desreferenciarlo |
| 49 | `49_nullptr.cpp` | `nullptr` |
| 50 | `50_apuntador_vs_referencia.cpp` | Apuntadores y funciones |
| 51 | `51_apuntadores_arreglos.cpp` | Apuntadores y arreglos |
| 52 | `52_aritmetica_apuntadores.cpp` | Aritmética de apuntadores |
| 53 | `53_apuntador_struct.cpp` | Apuntadores a registros |
| 54 | `54_const_char_ptr.cpp` | Apuntadores y cadenas estilo C |
| 55 | `55_apuntador_colgante.cpp` | Errores comunes con apuntadores |
