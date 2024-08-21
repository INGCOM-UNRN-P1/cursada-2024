/*
 * Trabajo Practico 1 - Ejercicio
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
#include <stdio.h>

int suma_digitos(int numero);

int main() {
    int numero = 4812;
    int resultado = suma_digitos(numero);

    printf("La suma  de %d es %d\n", numero, resultado);

    return 0;
}


int suma_digitos(int numero) {
    int suma = 0;

    if (numero < 0) {
        numero = -numero;
    }

    while (numero > 0) {
        suma += numero % 10;  
        numero /= 10;         
    }

    return suma;
}
