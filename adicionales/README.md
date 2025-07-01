# Ejercicios adicionales

Estos ejercicios han sido tomados en parciales (y un par de fechas de finales) por lo que están pensados para ser resueltos en papel más que en la computadora.

## En orden de prioridad:

1. La función que resuelve el enunciado
2. La documentación de dicha función
3. Qué datos le pasarían para probar, incluyendo cuál es la salida esperada de su código.
4. Las funciones para armar los tests.
5. Un `main` empleando argumentos de línea de comandos.

El orden de prioridad hace referencia a que deben finalizar primero y que es lo que deben completar antes de ‘pasar’ al siguiente ítem.

## Cuestiones evaluadas

- Cumplimiento de las cuestiones de estilo
- La separación en funciones
- La utilización de estructuras
- La utilización de memoria dinámica
- El funcionamiento más allá de las simplificaciones del enunciado

## Enunciados

El objetivo de estos enunciados, es resolver, en funciones, la consigna utilizar la menor cantidad posibles de las funciones de la librería estándar.

### Contabilizador
Desarrollen una función que contabilice los caracteres alfanuméricos de una cadena segura.

```
Hola Mundo! → H:1 / o:2 / l:1 / a:1 / " ":1 / M:1 / u:1 / n:1 / d:1 / !:1
```

### Tokenización
Desarrollen una función que divida una cadena segura por un carácter específico, retornando un arreglo de punteros a carácter.

```
Hola Mundo!, " " → Hola / Mundo!
```

### Compresión RL

Desarrollen y documenten una función que compacte los caracteres repetidos de una cadena segura. Compactar cadenas que solo contengan caracteres `AZ`.

```
AAAAAAAAABBBBBCCCCAAAAAA → 9A5B4C6A
```

### Anagramas
Desarrollen y documenten una función que indique si una cadena segura es anagrama de otra, ignorando espacios y diferencias entre mayúsculas y minúsculas.

```
Salvador Dalí, Avida Dollars → son anagramas
```

### Desduplicador seguro
Desarrollen y documenten una función que elimine todos los caracteres duplicados de una cadena segura.
```
HHola Mondo! → Hola Mnd!
```

### Número a cadena segura
Desarrollen y documenten una función que transforme un número entero en una cadena segura utilizando separadores de miles, sin usar funciones de la librería.

```
123456 → 123.456
```