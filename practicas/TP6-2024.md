# TP6-2024

El objetivo de esta práctica es desarrollar el conocimiento sobre matrices y archivos.

## Objetivos del Makefile

1. `make` compila el `main.c` y `prueba.c`.
2. `make run` ejecuta `main.c`.
3. `make test` ejecuta `prueba.c`.
4. `make clean` limpia los compilados e intermedios.
5. `make librerias` compila todas las librerías.
6. `make ejercicio2` compila el ejercicio 2 (y el 3 cambiando el número)

Recuerden no enviar al repositorio los compilados (`.exe`) e intermedios (`.o`/`.a`), para ello usen `make clean` en la
raíz del proyecto.

## Forma de entrega

* No olviden completar con sus datos los archivos.
* Recuerden tener en cuenta las **Cuestiones de Estilo**
* Mantengan separado lo que es entrada, del algoritmo y la salida.
* Siempre que sea posible, los mensajes de confirmación de `git` deben ser descriptivos, evitando los que son como
  “cambios”.

### Entrega como proyecto

Cada ejercicio es su propio proyecto con su `Makefile` independiente, para ello, y cada ejercicio una función dentro,
mientras que los puntos de
los ejercicios están dentro de cada uno de los proyectos.

No olviden la implementación de los tests para cada función presente en `ejercicio.h`/`ejercicio.c`.

Es importante que los directorios tengan nombres simples que comiencen con `ejercicio`

### La estructura del repositorio

```
├── arreglos        <- Ejercicio 1 
├── cadenas         <- Ejercicio 1 
├── ejercicio2      <- Matrices
└── ejercicio3      <- Archivos
```

No es necesario (y recomendado) hacer cambios en la estructura del repositorio.

## Ejercicio 1 - Creación de librerías

Este ejercicio es también la descripción general de la estructura del repositorio.

La idea es ir generando librerías con funciones que podamos utilizar en el futuro.

Estas no tienen un `main` interactivo, solo el de `prueba.c` para asegurarnos de que el código funciona correctamente.

**Importante** dejen aquí solo el código de las prácticas anteriores.

### Arreglos

Dejen en este proyecto el código creado en prácticas anteriores referido a arreglos, incluyendo sus tests.

### Cadenas

Incorpora las funciones para cadenas seguras desarrolladas en prácticas anteriores al proyecto `cadenas`, incluyendo sus
tests.

Recuerden que para que las cadenas puedan ser consideradas seguras, deben tener su argumento 'capacidad' independiente.

## Ejercicio 2 - Matrices

Pueden utilizar cualquiera de las dos estrategias que vimos en clase, pero si optan por la segunda, no olviden crear
funciones para acceder y modificar los valores de la matriz y no tener que hacer cuentas.

**Observación sobre los argumentos**

Los argumentos para funciones que reciban más de una matriz pueden ser particularmente extensos, por lo que para el
código sea más legible, dejen una matriz, con sus argumentos asociados en una línea.

**Por ejemplo**

```C
int suma(int filas_sumando, int columnas_sumando, int sumando[][],
         int filas_sumador, int columnas_sumador, int sumador[][],
```

### Operaciones básicas

Crearemos las funciones que se encargan de gestionar el ciclo de vida de una matríz.

#### Creación

1. Una función que cree una matriz de un tamaño de filas y columnas dado e inicializada en cero.
2. Una función que cree una matriz de un tamaño de filas y columnas dado e inicializado en un valor en particular.
3. Una función que cree una matriz cuadrada 'identidad' de un tamaño de dado.
4. Una función que cree una matriz cuadrada numerando por columnas desde `1`.

$$
I_3 = \begin{pmatrix}
1 & 4 & 7 \\
2 & 5 & 8 \\
3 & 6 & 9
\end{pmatrix}
$$

#### Liberación

Crear una función que se encargue de liberar la memoria pedida, y que para facilitar los tests de las otras funciones,
que antes de llamar a `free`, cambie el contenido a un valor como `-1` para que sea más fácil detectar problemas.

#### Impresora

Implementar un procedimiento que muestre una matriz de tamaño arbitrario por consola, en un formato como el siguiente:

```
matriz de 3x3{
 {1, 0, 0},
 {0, 1, 0},
 {0, 0, 1}
}
```

### Aritmética matricial

_Al momento de crear una nueva matriz con 'retornos', no olviden que tienen implementadas funciones para esta tarea en
particular._

Los detalles con ejemplos están en el [µApunte Matrices](https://github.com/orgs/INGCOM-UNRN-P1/discussions/75).

#### Suma de Matrices

Dadas dos matrices $`A`$ y $`B`$ de dimensiones \( m \times n \), su suma es posible solo si ambas matrices tienen las
mismas dimensiones. La suma se define como la suma elementos a elemento entre ambas.

#### Multiplicación de Matrices

La multiplicación de matrices es posible si el número de columnas de la primera matriz $A$ coincide con el número de
filas de la segunda matriz $B$. Si $A$ es de dimensiones $m \times n$ y $B$ es de dimensiones $n \times p$, el producto
de matrices $C = A \cdot B$ es una matriz de dimensiones $m \times p$.

#### Redimensionar

Crea una nueva matriz con un nuevo tamaño a partir de otra matriz.

Si la dimensión es mayor, el espacio se completa con 0.
Si la dimensión es menor, se recorta el tamaño.

#### Cortar columna

Crea un arreglo con el contenido de una columna de la matriz, y la misma queda con una columna menos.

### Ejercicio 3 - Archivos

El objetivo de este ejercicio, es almacenar y recuperar la información de los arreglos desde archivos externos.

Con que el `main` de este ejercicio cargue un archivo solicitado al usuario o que lo escriba, es suficiente, lo importante en este ejercicio son los **tests** para las funciones, en el próximo TP le daremos uso con
argumentos de línea de comandos.

#### ¿Cómo son los archivos?

La idea es trabajar con archivos que contengan números enteros, uno por línea, en donde el primer número, es la cantidad de números que contiene el archivo.

```shell
?> cat archivo_numeros.txt
5
3
-5
3
6
3
```

#### Operaciones con archivos

Para mantener la implementación de las funciones lo mas simple posible, consideren que los archivos no tienen ruta y se encuentran en el mismo directorio que el programa compilado.

##### cadena_a_archivo
Implementá una función que escriba una cadena segura en un archivo.

##### archivo_a_cadena
Implementá una función que lea un archivo completo en una cadena segura.

##### archivo_a_arreglo

Implementa una función que reciba el nombre de un archivo como parámetro y cargue los elementos en un arreglo. La función deberá retornar el número de elementos leídos o el código de error apropiado.

##### arreglo_a_archivo

Implementá una función que reciba como parámetros un arreglo de números enteros, su tamaño y el nombre del archivo de 
destino. Esta función deberá escribir los elementos del arreglo en el archivo.

##### es_correcto?

Implementá una función que reciba como parámetros el nombre de un archivo e indique si este tiene el formato correcto.

#### Arreglos IV
Para tener algo automático que enviar a los archivos, vamos a implementar dos funciones para crear arreglos.

##### generador_lineal

El objetivo de esta función es la generación de un arreglo con números enteros consecutivos, en donde debe recibir la
cantidad de números a generar junto al valor inicial y paso.

##### generador_aleatorio

El objetivo de esta función es la generación de arreglos con números enteros al azar, en donde debemos indicar la
cantidad de números a generar junto a su rango (mínimo y máximo).

[Generación de números Aleatorios](https://github.com/orgs/INGCOM-UNRN-P1/discussions/76)

