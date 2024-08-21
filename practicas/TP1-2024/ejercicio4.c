/*
 * Trabajo Practico 1 - Ejercicio
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
#include <stdio.h>

int compara(int numero, int otro_numero);

int main(){
    int a = 5;
    int b = 100;
    printf("Comparacion de %d y %d es %d", a, b, compara(a, b));
    
    return 0;
}

int compara(int numero, int otro_numero){
    int result = 0;

    if(numero<otro_numero){
        result = -1;
    }else{
         if(numero>otro_numero){
            result = 1;
         }
    }
    return result;

}
