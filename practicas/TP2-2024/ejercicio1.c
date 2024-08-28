/*
 * Trabajo Practico 2 - Ejercicio 1
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */

#include <stdio.h>

#define COMIENZO_CONTADOR 0

int contador_digitos(int numero);

int main(){
    int numero = 1000;
    int cant_digitos = contador_digitos(numero);

    printf("Cantidad de digitos de %d es %d ", numero, cant_digitos);

    return 0;
}

// numero 140 -> 3
// numero 10000 -> 5
int contador_digitos(int numero){
    //mientras numero >1
    int contador = COMIENZO_CONTADOR;

    while(numero >= 1)
    {
        numero = numero /10;
        contador = contador + 1;
    }

    return contador;

}
