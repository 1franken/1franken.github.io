#include <stdlib.h>
#include <stdio.h>
void main()
{
    int vector[] = {10, 20, 5, 15, 30, 20}, contador = 0, i, suma, mayor = 0, division;
    for (i = 0; i < 5; i++)
    {
        printf("----------Indice %d, Valor %d----------\n", i, vector[i]);
        suma += vector[i];
        division = vector[i];
        if (division % 2 != 0)
        {
            printf("Es una posicion impar, su co ntenido es %d\n", vector[i]);
            printf("Esta posicion %d contiene numero impar\n", i);
        }

        if (mayor < vector[i])
        {
            mayor = vector[i];
        }
        printf("el mayor numero es: %d\n", mayor);
        if (vector[i] == 20)
        {
            contador++;
        }
        printf("el numero 20 aparece %d veces\n", contador);
    }
    printf("la suma total de los vectores es%d\n", suma);
}