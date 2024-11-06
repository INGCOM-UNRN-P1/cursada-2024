# TP7-2024

`struct` y estructuras

El objetivo de esta práctica es desarrollar el conocimiento sobre datos estructurados y estructuras de datos

## Objetivos del Makefile

1. `make` compila el `main.c` y `prueba.c`.
2. `make run` ejecuta `main.c`.
3. `make test` ejecuta `prueba.c`.
4. `make clean` limpia los compilados e intermedios.
5. `make librerias` compila todas las librerías.
6. `make ejercicio1` compila el ejercicio 1 (y el 2 o 3 cambiando el número)

_Luego de que carguen las librerías, no olviden compilarlas antes de darles uso en los ejercicios._

Recuerden no enviar al repositorio los compilados (`.exe`) e intermedios (`.o`/`.a`), para ello usen `make clean` en la
raíz del proyecto.

## Forma de entrega

* No olviden completar con sus datos los archivos.
* Recuerden tener en cuenta las **Cuestiones de Estilo**
* Mantengan separado lo que es entrada, del algoritmo y la salida.
* Siempre que sea posible, los mensajes de confirmación de `git` deben ser descriptivos, evitando los que son como
  “cambios”.

## Ejercicio 1 - Listas Enlazadas

La estructura de datos llamada "lista enlazada" es como un tren con sus vagones, en donde cada uno contiene información y la conexión al siguiente vagon.

Implementar funciones para listas enlazadas de numeros enteros, siguiendo las estructuras vistas en clase.

 - Creación y destrucción de la lista
 - Agregar todos los valores contenidos en un arreglo.
 - Convertir la lista en un arreglo
 - Inserciones en una posición indicada.
 - Recuperar el contenido en una ubicación indicada.
 - Eliminar en una ubicación indicada.
 - Obtener el largo de la lista.
 - Imprimir por pantalla la lista, en un formato similar al de Python, con corchetes.
	`[ 1, 3, 4, 5, 6 ]`
 - Inserción en orden, esta función debe preservar el ordenamiento en cada inserción.

Carguen la librería de arreglos del TP anterior para que quede disponible para los ejercicios que requieren trabajar con ellos.

## Ejercicio 2 - Esta balanceado?

### Implementación de un Stack
Creen un stack basado empleando un arreglo de caracteres de tamaño fijo, no con nodos.

```C
#define MAXIMO 10

typedef struct
{
	char datos[MAXIMO];
	int tope;
	int capacidad;
}stack_t;
```

Este stack debe implementar funciones para las operaciones base vistas en clase, `push`, `pop`, `peek` y `esta_vacio`. Siendo que la estructura debe ser implementada con arreglos, es necesario agregar una función adicional llamada `esta_lleno` que indica si no hay mas lugar disponible para la operación `push`.

Utilicen cadenas seguras en donde se requiera usar una cadena.

No es requisito pero pueden usar memoria dinámica.

### `main` del ejercicio
Luego, creen un programa que verifique si una cadena pasada como argumento al programa, que contiene caracteres `()`, `[]` y `{}`, se encuentran balanceados. Esto es, para cada símbolo de apertura, hay uno de cierre.

```
[]][][[[]]] no esta balanceado
[][[][[]]] esta balanceado
```

### Opcional 1 - Balanceado y estructurado
Tener en cuenta que los caracteres diferentes no pueden 'salir' de otro, por ejemplo `([)]` esta balanceado, pero no esta correctamente estructurado.

### Opcional 2 - Archivos balanceados

Que el programa pueda recibir el nombre de un archivo general y analizar si los paréntesis, llaves y corchetes están balanceados, ignorando todo lo demás.

El programa debiera de mostrar la ubicación en la que se detectó el símbolo.

## Ejercicio 3 - Fracciones

Se te pide desarrollar un programa que permita la manipulación de fracciones del tipo `numerador / denominador`. El programa deberá utilizar `structs` para representar las fracciones y memoria dinámica para gestionar su almacenamiento.

### Operaciones a implementar

#### Manejo de memoria:

* **Crear fracción**: Implementa una función que permita crear una fracción dinámica, inicializando sus valores.
* **Destruir fracción**: Implementa una función para liberar la memoria reservada a una fracción.

#### Aritmética
* **Simplificar fracción**: Implementa una función que simplifique una fracción a su forma más reducida usando el máximo común divisor (MCD).

* **Suma de fracciones**: Implementa una función que reciba dos fracciones y devuelva una nueva fracción que represente la suma.

* **Resta de fracciones**: Implementa una función que reciba dos fracciones y devuelva una nueva fracción que represente la resta.

* **Multiplicación de fracciones**: Implementa una función que reciba dos fracciones y devuelva una nueva fracción que represente el producto.

* **División de fracciones**: Implementa una función que reciba dos fracciones y devuelva una nueva fracción que represente el cociente.

* **Mostrar fracción**: Crea una función que permita imprimir la fracción en el formato `numerador / denominador`.

#### `main` del ejercicio
Para la versión base, el programa debe solicitar al usuario que ingrese dos fracciones, realizar las cuatro operaciones (suma, resta, multiplicación y división), y mostrar los resultados simplificados.

Por ejemplo:
```
Ingrese la primera fracción (numerador y denominador separados por espacio): 2 3
Ingrese la segunda fracción (numerador y denominador separados por espacio): 3 4

Suma: 17/12
Resta: -1/12
Multiplicación: 6/12
División: 8/9
```
