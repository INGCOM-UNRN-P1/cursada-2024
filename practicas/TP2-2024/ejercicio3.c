/*
 * Trabajo Practico 2 - Ejercicio 1
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */

#include <stdio.h>
// 2
/**
 * 2x1  = 2
 * 2x2  = 4
 * ....
 * 2x10 = 20
 * 
 */

int multiplicar(int a, int b);
void imprimir_tabla(int numero);

int main(){
    imprimir_tabla(5);
    
    return 0;
}
/**
 * Funcion simple donde se multiplican dos
 * variables ingresadas
 * @param a
 * @param b
 * @return retorna la multiplicacion de a*b
 * Pre
 * Post
 */
int multiplicar(int a, int b)
{
    return a*b;
}
/**
 * 
 */
void imprimir_tabla(int numero){
    int contador = 1;
    while (contador <= 10)
    {
        printf("%d x %d = %d \n", numero, contador, multiplicar(numero,contador));
        contador = contador + 1;
    }
}
