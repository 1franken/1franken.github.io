#include <stdio.h>
#include <stdlib.h>

// Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. 
// Mostrar los 10 números en pantalla mediante un solo array.


void main()
{
    float array1[5];
    float array2[5];
    float totalArray[10];
    int i, j, k, num;
    for ( i = 0; i < 5; i++)
    {
        printf("Ingrese el %i numero\n", i+1);
        scanf("%d", &num);
        array1[i]=num;
    }
    for (i = 0; i < 5; i++)
    {
        num=array1[i];
        printf("%d\n", num);
    }
    for (j = 0; j < 5; j++)
    {
        printf("Ingrese el %i numero\n", j+1);
        scanf("%f", &array2[j]);
    }

    for (j = 0; j < 5; j++)
    {
        num=array2[j];
        printf("%d", num);
    }
    printf("\n");
    for (j = 0; j < 5; j++)
    {
        totalArray[j] = array2[j];
        num=totalArray[j];
        printf("%d",num);
    }
    for (i = 0; i < 5; i++)
    {
        
        totalArray[i] = array1[i];
        num=totalArray[i];
        printf("%d",num);
    }


    
}