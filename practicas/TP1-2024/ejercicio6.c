/*
 * Trabajo Practico 1 - Ejercicio
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
#include <stdio.h>

int cociente_lento(int dividendo, int divisor);
int resto_lento(int dividendo, int divisor);

int main(){
    int dividendo = 100;
    int divisor = 10;

    printf("Cociente lento de %d y %d es %d", dividendo, divisor, cociente_lento(dividendo, divisor));
    printf("Resto lento de %d y %d es %d", dividendo, divisor, resto_lento(dividendo, divisor));
    
    return 0;
}

int cociente_lento(int dividiendo, int divisor)
{
    int valor_cociente = 0;
    while (dividiendo >= divisor)
    {
        dividiendo = dividiendo - divisor;
        valor_cociente = valor_cociente + 1;
    }
    return valor_cociente;
}
int resto_lento(int dividiendo, int divisor)
{
    while (dividiendo >= divisor)
    {
        dividiendo = dividiendo - divisor;
    }
    return dividiendo;
}
