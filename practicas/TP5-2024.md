# TP4-2024

El objetivo de esta práctica es desarrollar el conocimiento sobre punteros en C.

## Recordatorios sobre el Makefile
Recuerden completar primero la plantilla antes de darle uso.

Recuerden no enviar al repositorio los compilados (`.exe`) 
e intermedios (`.o`), para ello usen `make clean` en la raíz del
proyecto.

### Objetivos

1. `make` compila el `main.c` y `prueba.c`.
2. `make run` ejecuta `main.c`.
3. `make test` ejecuta `prueba.c`.
4. `make clean` limpia los compilados e intermedios.

## Forma de entrega

* Cada punto debe ser entregado en un archivo independiente.
* El nombre de cada archivo debe ser `ejercicio` seguido del número de ejercicios más `.c`, de esta manera, el primer ejercicio será entonces `ejercicio1.c`.
* Cada archivo debe seguir la estructura indicada dentro de `plantilla.c`, la cual debe estar completa con su nombre y usuario de GitHub.
* Recuerden tener en cuenta las **Cuestiones de Estilo**
* En ningún caso se aceptará el uso de variables globales. Toda la información necesaria para el funcionamiento de las funciones a desarrollar tienen que ser pasado como argumentos de las mismas.
* Mantengan separado lo que es entrada, del algoritmo y la salida.
* Siempre que sea posible, los mensajes de confirmación de `git` deben ser descriptivos, evitando los que son como “cambios”.
* No olviden documentar las funciones implementadas indicando el propósito de los argumentos y que es lo que retorna.

### Entrega como proyecto
Cada ejercicio es su propio proyecto con su `Makefile` independiente, para ello, y cada ejercicio una función dentro, mientras que los puntos de
los ejercicios están dentro de cada uno de los proyectos.

No olviden la implementación de los tests para cada función presente en `ejercicio.h`/`ejercicio.c`.

Es importante que los directorios tengan nombres simples que comiencen con `ejercicio`

## Ejercicios
La estructura de cada ejercicio es la misma que las anteriores, cada ejercicio es su propio 'proyecto' si con `Makefile`, y cada ejercicio una función dentro.

No olviden la implementación de los tests para cada función presente en `ejercicio.h`/`ejercicio.c`.

Si utilizan funciones de la librería estándar, creen una función propia que este en el medio para tener un lugar donde ver que
argumentos entran y salen, y que tenga una documentación propia sobre su uso y propósito.

### Ejercicio 1 - Valores puntuales

Crea una función que reserve memoria para un solo entero y le asigne un valor.

Y una función que extrae el valor y lo retorne; liberando la memoria.

```C
int* reserva_entero(int valor);
int libera_entero(int* valor);
```

Implementen un programa que haga operaciones lentas sobre un par de números dinámicos.

Esto sin modificar el código de las operaciones lentas.

#### Librería
Para simplificar y reutilizar lo mas posible. Envíen el código, prototipos y tests de las funciones referidas a arreglos desarrollados en las practicas anteriores a los archivos `lentas.h`/`lentas.c`. El `Makefile` ya está preparado para procesarlos en su programa.

**Solo envíen el código de practicas anteriores aquí**

### Ejercicio 2 - Arreglos III

Recuerden que los arreglos deben tener asociado un valor de tipo `int` con el tamaño en memoria.

#### Librería
Para simplificar y reutilizar lo mas posible. Envíen el código, prototipos y tests de las funciones referidas a arreglos desarrollados en las practicas anteriores a los archivos `arreglos.h`/`arreglos.c`. El `Makefile` ya está preparado para procesarlos en su programa.

**Solo envíen el código de practicas anteriores aquí**

#### 1 - Ciclo de vida
Crearemos las funciones que se encargan de gestionar el ciclo de vida de un arreglo dinámico.

1.1 Una función que cree un arreglo de un tamaño dado sin inicializar.
1.2 Una función que cree un arreglo de un tamaño inicializado en cero.
1.3 Una función que cree un arreglo de un tamaño dado e inicializado en un valor en particular.
1.4 Una función que cree un arreglo de un tamaño dado e inicializado a partir de un arreglo mas chico como 'patrón'.
1.5 Una función que antes de liberar la memoria del arreglo, cambie su contenido a un valor preestablecido y fijo, como `-1` para que sea más fácil detectar problemas.

#### 2 - Duplicadora
Implementar una función que duplique un arreglo.

#### 3 - Fusión
Implementar una función que reciba dos arreglos y cree uno nuevo con el contenido de ambos

#### 4 - Filtro
Implementar una función que reciba un arreglo y cree uno nuevo removiendo un determinado número.

#### 5 - Inserción
Implementar una función que reciba un arreglo y cree uno nuevo agregando un elemento en una posición especifica.

#### 5 - Remoción
Implementar una función que reciba un arreglo y cree uno nuevo removiendo un elemento en una posición especifica.

## Ejercicio 3 - Cadena Segura III

Recuerden que una cadena es seguro solo si tiene asociado un valor de tipo `int` con su tamaño en memoria.

#### 3.0 - Librería
Para simplificar y reutilizar lo mas posible. Envíen el código, prototipos y tests de las funciones referidas a arreglos desarrollados en las practicas anteriores a los archivos `seguras.h`/`seguras.c`. El `Makefile` ya está preparado para procesarlos en su programa.

**Solo envíen el código de practicas anteriores aquí**

#### 3.1 Concatenación
Crear una función que permita crear una cadena segura nueva a partir de otras dos, una a continuación de la otra.

#### 3.2 Deduplicador
Escribe una función que elimine los caracteres duplicados de una cadena y los retorne en una cadena nueva.

#### 3.3 Fraccionador
Implementa una función que divida una cadena segura en palabras, separando por un carácter pasado como argumento y devuelva un arreglo dinámico cadenas.

#### 3.4 Centrar
Implementá una función que reciba una cadena segura, un carácter y un ancho. La misma da como resultado una copia dinámica de la cadena original, centrada en el ancho especificado y rellenando con el carácter pedido.

#### 3.5 Cortar
Implementá una función que reciba una cadena segura y un carácter. La función da como resultado una copia de la cadena, pero eliminando todo lo que esté después del carácter recibido.

#### 3.6 Espacios
Implementá una función que reciba una cadena segura que comienza con espacios y da como resultado una copia de la cadena sin los espacios del comienzo.

#### 3.7 Numero a cadena segura
Implementá una función que reciba un número entero y de como resultado la representación del número como cadena segura.