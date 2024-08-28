/*
 * Trabajo Practico 2 - Ejercicio 9
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
 
#include <stdio.h>
#include <stdbool.h>

bool es_fibonacci(int numero);

int main(){
    printf("%d es fibonacci? %d", 1, es_fibonacci(1));
    return 0;
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
