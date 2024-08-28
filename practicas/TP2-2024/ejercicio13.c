/*
 * Trabajo Practico 2 - Ejercicio 13
 * Profesor Miguel Mariguín - mmariguin@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */
 
#include <stdio.h>
#include <stdbool.h>

int cargar_arreglo(int capacidad, int arreglo[]);
int muestra_arreglo(int capacidad, int arreglo[]);
int obtener_suma(int capacidad, int arreglo[]);
double promedio_arreglo(int capacidad, int arreglo[]);
int minimo_arreglo(int capacidad, int arreglo[]);
int posicion_maximo_arreglo(int capacidad, int arreglo[]);

int main()
{
    int capacidad;
    printf("\nIngrese la capacidad del arreglo");
    scanf("%d", &capacidad);

    int arreglo[capacidad]; 

    cargar_arreglo(capacidad, arreglo);  
    muestra_arreglo(capacidad, arreglo);

    printf("\n La suma del contenido de mi arreglo es %d", obtener_suma(capacidad, arreglo));
    printf("\n El promedio del contenido de mi arreglo es %lf", promedio_arreglo(capacidad, arreglo));
    printf("\n El valor minimo del contenido de mi arreglo es %d", minimo_arreglo(capacidad, arreglo));
    printf("\n La posicion del valor maximo del contenido de mi arreglo es %d", posicion_maximo_arreglo(capacidad, arreglo));

    return 0;
}

// int [23][43][54][65][76]
int cargar_arreglo(int capacidad, int arreglo[])
{
    int contador = 0;
    while (contador < capacidad)
    {
        printf("\nAgregar al arreglo ");
        fflush(stdout);
        scanf("%d", &arreglo[contador]);
        contador = contador + 1;
    }

    return 0;
}

int muestra_arreglo(int capacidad, int arreglo[])
{
    int posicion = 0;
    printf("\n");
    while (posicion < capacidad)
    {
       printf("[%d]", arreglo[posicion]);  
        posicion++;  
    }
    printf("\n");
}

int obtener_suma(int capacidad, int arreglo[])
{
    int posicion = 0;
    while (posicion < capacidad)
    {
        int suma = 0;
        for(int i=0; i<capacidad; i++)
        {
            suma = suma + arreglo[i];
        }
        return suma;
    }
}

double promedio_arreglo(int capacidad, int arreglo[])
{
   double promedio = obtener_suma(capacidad, arreglo)/(capacidad*1.0); //Utilizo la función de suma_arreglo para calcular el promedio dividiendo por el largo del arreglo.
   return promedio;     //Retorno el promedio del arreglo.
}


int minimo_arreglo(int capacidad, int arreglo[])
{
   int minimo = arreglo[0];            //Inicializo el minimo con el primer valor del arreglo.
   for (int i = 1; i<capacidad; i++)   //Con un bucle for comparo el resto de los elementos con el mínimo.
   {
      if (arreglo[i] < minimo)
      {
         minimo = arreglo[i];          //Si el actual elemento es menor al mínimo, lo asigno como mínimo.
      }
   }
   return minimo;       //Retorno el valor del mínimo.
}

int posicion_maximo_arreglo(int capacidad, int arreglo[])
{
    int posicion = 0;
   int maximo = arreglo[0];            //Inicializo el minimo con el primer valor del arreglo.
   for (int i = 1; i<capacidad; i++)   //Con un bucle for comparo el resto de los elementos con el mínimo.
   {
      if (arreglo[i] > maximo)
      {
        maximo = arreglo[i];
        posicion = i;          //Si el actual elemento es menor al mínimo, lo asigno como mínimo.
      }
   }
   return posicion;       //Retorno el valor del mínimo.
}


//posicion del valor maximo
int mayor_arreglo(int capacidad, int arreglo[])
{
    int contador = 1;
    int mayor_valor = arreglo[0];
    int posicion = 0;
    while (contador < capacidad)
    {
        if (arreglo[contador] > mayor_valor)
        {
            mayor_valor = arreglo[posicion];
            posicion = contador;
        } 
        contador++;
    }
    return posicion;
}
