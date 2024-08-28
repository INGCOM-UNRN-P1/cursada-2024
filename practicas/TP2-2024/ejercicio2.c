/*
 * Trabajo Practico 2 - Ejercicio 2
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */

#include <stdio.h>

int suma_digitos(int numero);

int main(){
    //int numero = 901; // 
    //int resultado = suma_digitos(numero);

    printf("La suma de digitos de %d es %d", 888, suma_digitos(888));

    return 0;
}

//numero 123
int suma_digitos(int numero)
{
    int resultado = 0;
    while (numero > 0)
    {
        resultado = resultado + (numero % 10); // Iteracion 0 =>  0 + (3)
        numero = numero / 10; // 123 /10 = 12 _> se guarda en un int
    }
    return resultado;
}
