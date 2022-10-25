#include <stdio.h>
#include <stdlib.h>

void main()
{
    int acum = 0, numero[5];
    for (int i = 0; i < 5; i++)
    {
        printf("ingrese un numero ");
        scanf("%d", &numero[i]);
        if (numero[i] == 5)
        {
            acum++;
        }   
    }
    printf("el numero 5 se repite %d veces \n", acum);
    system("pause");
}
