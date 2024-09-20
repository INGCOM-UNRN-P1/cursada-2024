
# Las cuestiones de estilo
Este documento reúne un conjunto de reglas de estilo diseñadas para hacer que el código en C sea más claro, fácil de leer y menos propenso a errores. Programar en C puede ser bastante flexible, pero también es fácil caer en malas prácticas que pueden llevar a errores difíciles de detectar. Por eso, tener un conjunto de reglas claras ayuda a mantener el código ordenado y seguro.

La idea detrás de estas reglas es que un buen código no solo funcione, sino que también sea comprensible para cualquier persona que tenga que leerlo, ya sea el mismo programador en el futuro o alguien más que se sume al proyecto. Un código limpio y bien organizado facilita mucho el trabajo en equipo, ahorra tiempo en correcciones y evita dolores de cabeza cuando llega el momento de depurarlo o actualizarlo.

Estas reglas cubren todo, desde cómo nombrar variables y funciones hasta cómo estructurar los condicionales y lazos. Seguirlas no solo ayuda a mantener la coherencia en el proyecto, sino que también hace que el código sea más robusto y fácil de mantener a largo plazo.

Comenzar con reglas rígidas en un lenguaje flexible, nos da un respaldo adicional y cuando nuestro entendimiento del lenguaje mejore, podemos comenzar a doblar las reglas y llegar a un estilo propio.

## Se aceptan sugerencias y conversiones del tema

Estamos abiertos a conversar todas las reglas, solo tienen que abrir un hilo en Discussions (o un Ticket en el Issue Tracker) asi como nuevas reglas, clasificaciones, explicacioes y potenciales excepciones.

# Las reglas
(En algún momento dejaremos)

### Regla 0: La claridad y  prolijidad son muy importantes.
El código debe ser claro y fácil de entender para cualquiera que lo lea, no solo para quien lo escribe. Un código limpio y prolijo evita errores, facilita el mantenimiento y mejora la colaboración en equipo. La claridad es preferible a trucos de programación o técnicas avanzadas que solo complican el entendimiento.

```diff
- for (int i = 0, j = 10; i < j; i++, j--) { printf("%d", i+j); }
+ for (int i = 0; i < 10; i++)
+ {
+     int suma = i + (10 - i);
+     printf("%d", suma);
+ }
```

### Regla 1: Los identificadores deben ser descriptivos.

Los nombres de variables, funciones y demás identificadores deben reflejar claramente su propósito. Esto ayuda a que el código sea autodescriptivo, sin necesidad de comentarios adicionales. Usar nombres significativos facilita la lectura y comprensión.

```diff
// Malos identificadores
- int a, b;
- a = obtener_precio();
- b = calcular_descuento(a);

// Identificadores descriptivos
+ int precio, descuento;
+ precio = obtener_precio();
+ descuento = calcular_descuento(precio);
```


### Regla 2: Una declaración de variable por línea.

```diff
-int a, b, c;
+int a;
+int b;
+int c;
```

### Regla 3: Siempre inicializar la variable a un valor conocido.
Es importante que una variable utilizada como R-Value tenga un valor conocido antes de tomar lo que tenga.

### Regla 4: Un espacio antes y después de cada operador.

```diff
-uno=dos+tres;
+uno = dos + tres;
```

### Regla 5: Las llaves de los bloques van en una línea propia.
```C
if (condicion)
{
    //camino true
}
else
{
    //camino false
}
```
### Regla 6: Los lazos sin `break` y `continue` en su lugar, lazos con bandera.

El uso de break y continue dentro de los lazos puede generar un flujo de control inesperado, lo que dificulta el seguimiento del programa. Es preferible utilizar una bandera (variable de control) para salir de los lazos de forma explícita y ordenada, lo que hace el código más predecible y fácil de mantener.

### Regla 7: Prefieran usar while en lugar de `for`.

El lazo while es más flexible y adecuado cuando no se conoce de antemano el número de iteraciones. Además, el while es generalmente más fácil de leer cuando la condición de parada no está claramente relacionada con un contador. Si se utiliza un lazo para repetir indefinidamente o hasta que una condición específica sea verdadera, while es preferible a for.

### Regla 8: Una sola instrucción `return` por función.

Limitar una función a un único punto de retorno mejora la legibilidad y facilita el seguimiento del flujo de control. Además, ayuda a evitar errores relacionados con la liberación de recursos o la ejecución de código después de múltiples retornos.
### Regla 9: Las funciones no van con `printf` o `scanf`, a no ser que ese sea su propósito.

Las funciones deben estar separadas de la entrada y salida (I/O) para que sean útiles en otros contextos y se probar.

Si el propósito de la función no es realizar I/O, estos llamados deben evitarse, delegando la entrada y salida a otras funciones.

### Regla 10: Todas las funciones con documentación completa y en la forma.
```C
/**
 * Descripción de la función.
 * @param parametro rol
 *          PRE:
 * @returns caracteristicas del valor de retorno.
 *          POST:
 */
 ```

### Regla 11: Sin usar variables globales, no están permitidas.
Las variables globales pueden ser modificadas desde cualquier parte del programa, lo que puede causar efectos secundarios inesperados y dificultar el rastreo de errores.

### Regla 12: Siempre que sea posible*, una responsabilidad por función.
Cada función debe encargarse de una sola tarea o responsabilidad. Esto mejora la legibilidad y facilita la reutilización y el mantenimiento del código. Las funciones pequeñas y especializadas son más fáciles de probar y depurar.

### Regla 13: Las condiciones complejas deben ser simplificadas y comentadas.

Si una condición contiene múltiples operadores lógicos, divídela en partes más pequeñas o agrega comentarios explicativos.

```C
if (condicion1 && (condicion2 || !condicion3)) {
    // Explicar qué hace cada condición
}
```

### Regla 14: Los arreglos estáticos solo pueden ser creados de un tamaño fijo al compilar.
Los arreglos ALV no estan permitidos por los problemas que pueden ocasionar, por lo que deben ser definidos con un tamaño fijo que se determina en tiempo de compilación.

```diff
- int n = 10;
- int numeros[n]; // ALV
+ int numeros[10];
```

### Regla 15: Un caso por función de prueba.
Pueden lograr esto creando una función que reciba los argumentos y el resultado esperado para comparar, o hacer una funcion para cada caso.

### Regla 16: Evitar las condiciones ambiguas que pueden depender del tipo de dato.

Por ejemplo, si una variable numérica se usa como condición, siempre se debe ser explícito:

```diff
- if (x) {
+ if (x != 0) {
```

### Regla 95: Los retornos numéricos específicos deben ser una constante de preprocesador.

El usar nombres descriptivos para los valores facilita la comprensión del propósito del retorno al darle un nombre explicito.

```diff
-return -1;
+return NO_FUNCIONO;
```
```C
#define NO_FUNCIONO -1
```
### Regla 95: Todos los lazos y condicionales van con llaves.

Incluso para bloques de una sola línea.
```diff
- if (condicion) accion;
+ if (condicion) {
+     accion;
+ }
```

### Regla 96: Cada bloque lleva cuatro espacios más que el que lo contiene.
```C
//nivel 0
{
    //nivel 1
    {
        //nivel 2
        {
            //nivel 3
        }
    }
}
```
### Regla 97: Sin instrucción `goto`.
El uso de `goto` rompe el flujo natural del programa y dificulta la lectura y depuración del código, ya que salta entre diferentes partes del programa de manera impredecible. En lugar de usar esta instrucción, emplea estructuras de control como `if-else`, `for`, `while` y `switch`, que permiten un flujo claro y estructurado.

### Regla 98: Sin operador condicional (ternario) `?:;`.

El operador condicional (ternario) es compacto, pero puede hacer que el código sea difícil de leer, especialmente si se usa de manera excesiva o anidada.

### Regla 0x64h: Los ejercicios deben ser resueltos con una función.
Esto fomenta la modularización del código, facilita la prueba de unidades, y promueve la reutilización del código. Dividir la lógica en funciones permite que el código sea más organizado y comprensible.

### Regla 0x65h: Los nombres de las funciones y procedimientos van en minúsculas y `snake_case`.

El uso de snake_case (nombres en minúsculas con guiones bajos entre palabras) para los nombres de funciones y procedimientos es una convención de estilo que mejora la consistencia y legibilidad del código. De esta forma y siguiendo las otras reglas de este estilo, podemos saber inmediatamente que es una funcion, una variable, una constante y las demás piezas del programa.


### Regla 0x66h: Los punteros deben ser declarados con el asterisco pegado al identificador.
Para facilitar la identificación visual de la variable como un puntero y mejora la claridad.

```diff
-int* ptr;
+int *ptr;
```


### Regla 0x67h: Siempre verificar la asignación exitosa de memoria dinámica.

Cualquier asignación dinámica de memoria con `malloc`, `calloc` o `realloc` debe ser seguida por una comprobación de éxito:

```C
ptr = malloc(tamaño);
if (!ptr)
{
    // Manejo de error
}
```

### Regla 0x68h: Liberar siempre la memoria dinámica.

Cada vez que se usa `malloc`/`calloc `/`realloc`, debe asegurarse que la memoria sea liberada correctamente usando free.

```C
free(ptr);
ptr = NULL;  // Evitar punteros colgantes
```

### Regla 0x69h: No mezclar operaciones de asignación y comparación en una sola línea.

Mantener las asignaciones y comparaciones en líneas separadas reduce la posibilidad de errores sutiles.

```diff
- if ((ptr = malloc(tamaño)) == NULL) {
+ ptr = malloc(tamaño);
+ if (!ptr) {
```

### Regla 0x6Ah: Prefieran fgets a gets y scanf para leer archivos o cadenas.

fgets es más seguro que `gets` y `scanf` porque evita desbordamientos de buffer.

```C
fgets(buffer, sizeof(buffer), archivo);
```

### Regla 0x6Bh: Manejar correctamente la apertura y cierre de archivos.

Siempre verificar si el archivo se abre correctamente y cerrarlo después de su uso:

```C

FILE *archivo = fopen("archivo.txt", "r");
if (!archivo)
{
    // Manejo de error
}
fclose(archivo);
```

### Regla 0x6Ch: Las estructuras deben ser inicializadas completamente al ser declaradas.

```C
struct Ejemplo ejemplo = {0};  // Inicializa todos los campos a cero o NULL
```

### Regla 0x6Dh: Uso explícito de typedef para estructuras complejas.

Facilita el manejo y mejora la legibilidad del código al declarar tipos complejos:

```C
typedef struct {
    int campo1;
    char *campo2;
} MiEstructura;
```

### Regla 0x6Eh: Acceso a estructuras a través de punteros, usando la notación de flecha (->).

Cuando se accede a los campos de una estructura mediante un puntero, siempre usar `->` en lugar de `.`:

```C
ptr->campo = valor;
```

### Regla 0x6Fh: Evitar el uso de punteros genéricos (void *) siempre que sea posible.

El uso de punteros genéricos debe ser evitado a menos que sea estrictamente necesario, ya que puede ocultar errores de tipo.

### Regla 0x70h: Evitar usar múltiples niveles de punteros a menos que sea absolutamente necesario.

Esto complica la lectura y el manejo, especialmente cuando se trata de asignación o liberación de memoria.

### Regla 0x71h: Documentar la propiedad de los recursos al usar punteros.

Cuando una función recibe o devuelve un puntero a memoria dinámica, es importante documentar quién es responsable de liberar la memoria:

```C
/**
 * @param ptr Puntero que será liberado por el llamador.
 */
```

Recuerden que no es posible que el programa diferencie la memoria dinámica de la automática.


### Regla 0x72h: Siempre usar const en punteros y parámetros que no deben ser modificados.

El uso de const proporciona garantías adicionales y ayuda a evitar modificaciones accidentales:

```C
void funcion(const int *ptr);
```

### Regla 0x73h: Los punteros nulos deben ser inicializados como NULL, no 0.

Usa `NULL` para inicializar y verificar punteros, no 0, para mayor claridad y coherencia semántica.

```C
int *ptr = NULL;
if (ptr == NULL) {
    // ...
}
```

### Regla 0x74h: Usar punteros con cast explícito al convertir tipos, evitando conversiones implícitas.

Las conversiones de tipos deben ser claras y explícitas para evitar errores:

```C
void *mem = malloc(sizeof(int));
int *ptr = (int *) mem;  // Cast explícito
```

### Regla 0x75h: Usar macros de tamaño (sizeof) siempre que sea posible en asignaciones de memoria dinámica.

Facilita la modificación y reduce errores al manejar estructuras y tipos dinámicos:

```C
ptr = malloc(sizeof(*ptr));  // Asigna la cantidad correcta de memoria para el tipo de ptr
```

### Regla 0x76h: Verificar siempre los límites de los arreglos antes de acceder a sus elementos.

Evita accesos fuera de los límites del arreglo, esto es una de las fuentes más comunes de errores en C:

```C
if (indice >= 0 && indice < tamaño_arreglo) {
    arreglo[indice] = valor;
}
```

### Regla 0x77h: Evitar el uso de punteros a funciones si no es estrictamente necesario.

Los punteros a funciones pueden introducir complejidad innecesaria. Prefiere mantener las funciones independientes si es posible.

### Regla 0x78h: Usar enum en lugar de números mágicos para estados y valores constantes.

Mejora la legibilidad y reduce errores al manejar múltiples constantes:

```C
enum Estado { INACTIVO, ACTIVO, PAUSADO };
Estado estado = ACTIVO;
```

### Regla 0x79h: Documentar explícitamente el comportamiento de las funciones al manejar punteros nulos.

Cuando una función acepta o devuelve un puntero nulo, el comportamiento debe estar claramente documentado:

```C
/**
 * @param ptr Puntero que puede ser NULL.
 * @returns NULL si ocurre un error.
 * @returns ERROR_POR_NULO no se pudió seguir.
 */
```
Esto no implica un cambio en la estructura de la función, es una cuestión de documentar la situación en la estructura que tenga la función.

### Regla 0x7Ah: Liberar memoria en el orden inverso a su asignación.

Esto es especialmente importante en programas complejos donde varias porciones de memoria son asignadas en secuencia, como con matrices.

```C
free(ptr2);
free(ptr1);
```

