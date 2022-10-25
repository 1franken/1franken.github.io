#include <stdio.h>
#include <stdlib.h>

// Escriba un programa que lea una matriz cuadrada y la presente en pantalla, y presente
// la suma de todos los números que no están en la diagonal principal.

void main()
{
    int arreglo[3][3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("escriba un numero para la posicion %d %d\n", i, j);
            scanf("%d", &arreglo[i][j]);
        }
        
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arreglo[i][j]);
        }   
    }
    printf("\n\n");
    system("pause");
    printf("\n");
}