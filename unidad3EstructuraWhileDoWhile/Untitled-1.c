#include <stdio.h>
#include <stdlib.h>

void main()
{
    int contador = 1, cantParciales, cantAlumnos;
    float nota = 0, suma = 0;

    printf("ingrese la cantidad de alumnos del curso: \n");
    scanf("%i", &cantAlumnos);
    printf("ingrese la cantidad de parciales que se tomaron durante el cuatrimestre: \n");
    scanf("%i", &cantParciales);

    for (int i = 1; i <= cantParciales; i++)
    {
        printf("ingrese una nota: ");
        scanf("%f", &nota);
        while (nota <= 0 || nota > 10)
        {
            printf("equivoca2\n");
            scanf("%f", &nota);
        }
    }

    system("pause");
}