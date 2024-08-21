/*
 * Trabajo Practico 1 - Ejercicio
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */


#include <stdio.h>

double centigrados_a_fahrenheit(double centigrados);
double fahrenheit_a_centigrados(double fahrenheit);

int main(){

    double cent = 41.0;
    double fahr = 80.0;

    printf("41 °C en Fahrenheit: %.2f", centigrados_a_fahrenheit(cent));
    printf("80 Fahr  a Centigrados: %.2f", fahrenheit_a_centigrados(fahr));

    return 0;
}


double centigrados_a_fahrenheit(double centigrados){
    return (centigrados * 9.0 / 5.0) + 32.0;
}

double fahrenheit_a_centigrados(double fahrenheit){

    return (fahrenheit -32.0) * 5.0 / 9.0;

}
