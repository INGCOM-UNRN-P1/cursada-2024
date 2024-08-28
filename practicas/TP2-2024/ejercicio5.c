/*
 * Trabajo Practico 2 - Ejercicio 5
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
 
#include <stdio.h>

int menor(int a, int b, int c);

int main(){
    printf("El número menor entre %d,  %d y %d es %d", 50, 60, 70, menor(50,60,70));
    return 0;
}


int menor(int a, int b, int c)
{
    int retorno = c;
    if(a<b && a<c)
    {
        retorno = a;
    }
    else
    {
        if(b<c)
        {
            retorno = b;
        } 
    }
    return retorno;
}
