/*
 * Trabajo Practico 2 - Ejercicio 7
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
 
#include <stdio.h>
#include <stdbool.h>


int potencia_lenta(int numero, int potencia);

int main(){

    printf("la potencia de %d ^ %d = %d  ", 2, 16, potencia_lenta(2,16));

    return 0;
}


int potencia_lenta(int numero, int potencia)
{
    int contador = 1;
    int contador2 = 0;
    int total = 0;
    int numero2 = numero;
    while(contador < potencia)
    {
        while (contador2 < numero)
        {
            total = total + numero2;
            contador2 = contador2 + 1;
        }
        contador2 = 1;
        numero2 = total;
        contador = contador + 1;
    }
    return total;
}
