/*
 * Trabajo Practico 1 - Ejercicio
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
#include <stdio.h>

int contador_circular(int i, int limite);

int main(){
    //int i = 0;
    int limite = 5;
    for (int i = 0; i < limite; i++)
    {
        printf("\nContador de %d con limite %d es %d", i, limite, contador_circular(i, limite-1));
    }
    
    return 0;
}

int contador_circular(int i, int limite){
    int ret = 0;
    if (i != limite){
        ret = i + 1;
    }
    return ret;
}
