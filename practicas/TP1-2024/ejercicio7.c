/*
 * Trabajo Practico 1 - Ejercicio
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
#include <stdio.h>
#include <stdbool.h>

bool es_primo(int numero);

int main(){
    int numero = 10;
    printf("El numero : %d es primo: %d", numero, es_primo(numero));
    return 0;
}

bool es_primo(int numero){
    if(numero <= 1){
        return false;
    }
    for (int i = 2; i < numero; i++) // evaluar hasta numero/2
    {
        if(numero % i == 0){
            return false;
        }
    }
    return true;
    
}
