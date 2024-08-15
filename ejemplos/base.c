#include <stdio.h>

/**
 * Ejemplo de función y STDIO.
 */
int suma(int n, int m)
{
    return n + m;
}

int main(int argc, char *argv[]){
    int numero;
    scanf("%d", &numero);
    int resultado = suma(numero, 43);
    printf("numero %d\n", resultado));
    return 0;
}

