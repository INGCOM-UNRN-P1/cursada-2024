/*
 * Trabajo Practico 2 - Ejercicio 10
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
 
#include <stdio.h>
#include <stdbool.h>

//  0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233,

bool es_fibonacci(int numero);
int suma_de_fibonacci(int numero);

int main()
{
    printf("la suma de fibo en %d es %d", 9, suma_de_fibonacci(9));

    printf("la suma de fibo en %d es %d", 9, suma_de_fibonacci(9));

    return 0;
}

int devolver_fibonacci(int num)
{
    int anterior1 = 0;
    int anterior2 = 0;
    int resultado = 0;
    while(num > resultado)
    {
        resultado = anterior1 + anterior2;
        anterior2 = anterior1;
        anterior1 = resultado;
    }
    return resultado;
}
long suma_fibonacci(int num)
{
    long suma = 0;
    int cont = 0;
    while(cont <= num)
    {
        if(es_fibonacci(cont))
        {
            suma = suma + devolver_fibonacci(cont);
        }
        cont++;
    }
    return suma;
}


bool es_fibonacci(int numero)
{
    int num1 = 0;
    int num2 = 1;
    int num3 = 0;
    bool ret = false;

    while (numero > num3)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        if (numero == num3)
        {
            ret = true;
        }
    }
    return ret;
}
//8 r= 24

int suma_de_fibonacci(int numero)
{
    int fibonacci1 = 0;
    int fibonacci2 = 1;
    int fibonacci3 = 0;
    int contador = 1;
    int suma = 1;
    while (contador <= (numero - 2))
    {
        fibonacci3 = fibonacci1 + fibonacci2;
        fibonacci1 = fibonacci2;
        fibonacci2 = fibonacci3;
        int nuevo_numero = fibonacci3;
        if (nuevo_numero > 10)
        {
            while (nuevo_numero > 0)
            {
                suma = suma + (nuevo_numero % 10);
                nuevo_numero = nuevo_numero / 10;
            }
        }
        else
        {
            suma = suma + nuevo_numero;
        }
        contador = contador + 1;
    }
    return suma;
}
