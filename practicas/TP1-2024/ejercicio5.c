/*
 * Trabajo Practico 1 - Ejercicio
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
#include <stdio.h>

int suma_lenta(int sumando, int sumador);

int main(){
    int a = 1;
    int b = 4;

    printf("la suma entre %d y %d es = %d", a, b, suma_lenta(a, b));
    
    return 0;
}


int suma_lenta(int sumando, int sumador){
    int resultado = sumando;

    if( sumador > 0){
        for(int i =0; i<sumador;i++){
            resultado = resultado + 1;
        }
    } else {
        for(int i = 0; i > sumador;i --){
            resultado = resultado -1;
        }
    }

    return resultado;
}
