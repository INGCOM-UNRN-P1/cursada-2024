/*
 * Trabajo Practico 1 - Ejercicio
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
#include <stdio.h>

int suma_rango(int n, int m);

int main(){
    int n =10;
    int m = 20;

    printf("Suma en rango entre %d y %d es %d", n , m , suma_rango(n,m));
    
    return 0;
}

/*
* Resumen:
* Función que suma los numeros entre el rango dado en n y m.
* @args:
* · int n: Número inicial, incluido en el rango
* · int m: Número final, no incluido.
* @returns:
* int result. Resultado de la función.
    */
int suma_rango(int n, int m)
{
    int result = 0;
    for (int i = n; i < m; i++)
    {
        result = result + i;
    }
    return result;
}
