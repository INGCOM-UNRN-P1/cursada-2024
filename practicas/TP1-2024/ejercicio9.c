/*
 * Trabajo Practico 1 - Ejercicio
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
#include <stdio.h>
#include <stdbool.h>

bool es_multiplo(int numero, int multiplo);

int main(){
    int numero = 10;
    int multip = 5;
    printf("El numero %d es multiplo de %d: %d", numero, multip, es_multiplo(numero, multip));
    return 0;
}

bool es_multiplo(int numero, int multiplo){
    int resto = numero;
    bool ret = false;
    while(resto>=multiplo){
        resto = resto - multiplo;
    }
    if(resto == 0){
        ret = true;
    }
    return ret;
}
