/*
 * Trabajo Practico 2 - Ejercicio 12
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
 
#include <stdio.h>
#include <stdbool.h>

bool es_multiplo(int numero, int multiplo);
bool numero_perfecto(int num);
bool esPerfecto(int numero);
bool esdivisor(int numero, int divisor);

int main()
{
    printf("\n%d es perfecto? %d", 28, numero_perfecto(28));
    printf("\n%d es perfecto? %d", 28, esPerfecto(28));

    return 0;
}

bool es_multiplo(int numero, int multiplo)
{
    bool ret = false;
    int sumar = 0;
    while(sumar<numero)
    {
        sumar = sumar + multiplo;
    }
    if(numero == sumar)
    {
        ret = true;
    }
    return ret;
}

bool numero_perfecto(int num)
{
    bool respuesta = false;
    int suma = 0;
    for(int i=1; i<num; i++)
    {
        if(es_multiplo(num, i))
            suma = suma + i;
    }
    if(suma == num)
    {
        respuesta = true;
    }
        
    return respuesta;
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


bool esPerfecto(int numero)
{
    bool solucion2 = false;
    int divisor = 1;
    int suma = 0;

    while (suma < numero)
    {
        if (esdivisor(numero, divisor))
        {
            suma = suma + divisor;
        }
        divisor++;
    }

    if (suma == numero)
    {
        solucion2 = true;
    }
    
    return solucion2;
    
}
