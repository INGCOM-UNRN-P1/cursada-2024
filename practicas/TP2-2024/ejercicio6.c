/*
 * Trabajo Practico 2 - Ejercicio 6
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
 
#include <stdio.h>
#include <stdbool.h>

bool identificar_primo(int numero);
int calculo_primo(int cantidad);

int main(){

    printf("La suma de los primos entre la posicion de primos entre 1 y %d es %d", 3,calculo_primo(3));
    // 2, 3, 5, 7, 11, 13, 17, 19 => 8

    return 0;
}

bool identificar_primo(int numero)
{
    bool flag = true;
    if (numero <= 1)
    {
        flag = false;
    }
    else
    {
        int i = 2;
        while(i < numero)
        {
            if (numero % i == 0)
            {
                flag = false;
            }
            i = i + 1;
        }
    }
    return flag;
}

int calculo_primo(int cantidad)
{
    int cantidad_primos = 0;
    int suma_total = 0;
    int num_primo = 2;
    while (cantidad_primos < cantidad)
    {
        if(identificar_primo(num_primo))
        {
            cantidad_primos = cantidad_primos + 1;
            suma_total = suma_total + num_primo;
        }
        num_primo = num_primo + 1;
    }
    return suma_total;
}
