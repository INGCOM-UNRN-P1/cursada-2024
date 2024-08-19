# Ejemplo y plantilla de proyecto con Makefile

Este directorio contiene la estructura que será utilizada por todos los TP a partir
del número 3.

## Estructura

```
.
├── ejercicio0
│   ├── ejercicio.c
│   ├── ejercicio.h
│   ├── main.c
│   ├── Makefile
│   └── prueba.c
├── Makefile
├── plantilla
│   ├── ejercicio.c
│   ├── ejercicio.h
│   ├── main.c
│   ├── Makefile
│   └── prueba.c
└── README.md
```

`ejercicio0` es un proyecto de ejemplo, en donde hay una función llamada `suma` en los archivos `ejercicio`.
Este proyecto tambien tiene un archivo para ejecutar las funciones en un ambiente de pruebas.

El `Makefile` de la raíz pasa el objetivo a todos los proyectos que se llamen `ejercicio` y un número.

## Objetivos
Estos objetivos aplican tanto a la raíz del repositorio, y a cada proyecto individual.

La diferencia radica en que si es ejecutado en la raíz, se buscará completar ese objetivo en
todos los sub proyectos.

### `all`
Compila dos binarios, el principal llamado `programa`, y el que se encarga de las pruebas, `test_bin`.

### `test`
Compila el archivo para pruebas, `test_bin`.

### `run`
Ejecuta el programa compilado `programa`.

### `test`
Ejecuta las pruebas compiladas, `test_bin`.

### `clean`
Limpia todos los archivos que se generan al compilar.
