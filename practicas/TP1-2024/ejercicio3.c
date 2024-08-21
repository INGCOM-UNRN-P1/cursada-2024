/*
 * Trabajo Practico 1 - Ejercicio
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */

#include <stdio.h>
#define NEGATIVO -1
#define CERO 0
#define POSITIVO

int signo(int numero);

int main(){
    int numero = -10;
    printf("El signo de %d es : %d", numero, signo(numero));

    return 0;
}

int signo(int numero){
       int valor; 

    if (numero < 0) {
        valor = NEGATIVO;
    }
    else if (numero == 0) {
        valor = CERO;
    }
    else {
        valor = POSITIVO;
    }
    return valor;
}
