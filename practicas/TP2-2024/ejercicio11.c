/*
 * Trabajo Practico 2 - Ejercicio 11
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
 
#include <stdio.h>
#include <stdbool.h>


float litros_a_galones(float litros);
float galones_a_litros(float galones);
float millas_a_kilometros(float millas);
float kilometros_a_millas(float kilometros);

int main()
{
    printf("litros_a_galones(%d) = %.3f ",10,litros_a_galones(10));
  
    return 0;
}


float litros_a_galones(float litros)
{
    //return litros / 3.785;
    float galones;
    galones = litros / 3.785;
    return galones;
}

float galones_a_litros(float galones)
{
    float litros;
    litros = galones * 3.785;
    return litros;
}


float millas_a_kilometros(float millas)
{
    float kilometros;
    kilometros = millas * 1.609;
    return kilometros;
}
float kilometros_a_millas(float kilometros)
{
    float millas;
    millas = kilometros / 1.609;
    return millas;
}
