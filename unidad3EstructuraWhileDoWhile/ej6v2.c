#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int nota;
    int nuevaNota;
    do
    {
        printf("ingrese una nota: \n");
        scanf("%d", &nota);



        printf("desea ingresar una nueva nota? 1 para si, 2 para finalizar");
        scanf("%d", &nuevaNota);
        while (nuevaNota < 1 || nuevaNota > 2)
            {
                printf("ingrese una respuesta correcta, 1 para ingresar nueva nota, 2 para finalizar");
                scanf("%d", &nuevaNota);
            }            

    } while (nuevaNota != 2);

    system("pause");
}