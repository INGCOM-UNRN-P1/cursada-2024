/*
 * Trabajo Practico 1 - Ejercicio
 * Profesor Martín René Vilugrón - mrvilugron@unrn.edu.ar
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 * Cohorte 2024
 */

int suma_lenta(int numero, int otro_numero)
{
    if (otro_numero > 0)
    {
        while (otro_numero)
        {
            otro_numero = otro_numero - 1;
            numero = numero + 1;
        }
    }
    else if (otro_numero < 0)
    {
        while (otro_numero)
        {
            otro_numero = otro_numero + 1;
            numero = numero - 1;
        }
    }
//    else
//    {
// no hay mucho que hacer cuando el otro_numero es cero
//    }
    return numero;
}
