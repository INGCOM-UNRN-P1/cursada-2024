/*
 * Trabajo Practico 2 - Ejercicio 8
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
 
#include <stdio.h>
#include <stdbool.h>

bool esdivisor(int numero, int divisor);
bool esDefectivo(int numero);

int main(){

    printf("Numero %d es defectivo? %d", 52, esDefectivo(52));
    return 0;
}

bool esdivisor(int numero, int divisor)
{
    bool solucion1 = false;

    while (numero >= divisor)
    {
        numero = numero - divisor;
    }
    
    if (numero == 0)
    {
       solucion1 = true;
    }
   
    return solucion1;
}


bool esDefectivo(int numero)
{
    bool solucion2 = false;
    int divisor = 1;
    int suma = 0;

    while (divisor <= numero)
    {   
        if(esdivisor(numero, divisor))
        {
            suma = suma + divisor;
        }
        divisor++;
    }

    if (suma < 2*numero)
    {
        solucion2 = true;
    }
    
    return solucion2;

}
