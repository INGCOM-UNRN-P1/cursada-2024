/*
 * Trabajo Practico 1 - Ejercicio
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
#include <stdio.h>

long factorial(int numero);

int main(){
    int numero = 5; 
    // 1x2x3x4x5 = 120

    printf("El factorial de %d es %d", numero, factorial(numero));

    return 0;
}


long factorial(int numero){
    long resultado =1;
    for (int i = 2; i <= numero; i++)
    {
        resultado = resultado * i;
    }

    return resultado;
    
}
