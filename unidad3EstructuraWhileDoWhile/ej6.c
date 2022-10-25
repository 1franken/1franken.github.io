#include <stdio.h>
#include <stdlib.h>
// Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio.
void main()
{
    int notas = 0, nota, contadorNota = 0, notaactual = 1;
    float suma, promedio;
    printf("ingrese la cantidad de notas para calcular\n");
    scanf("%i", &notas);
    while (notas <= 0 || notas > 100)
    {
        printf("ingresaste un numero nulo o negativo para la cantidad de notas o demasiadas notas a cargar, ingrese un numero positivo real menor que 100: \n");
        scanf("%i", &notas);
    }

    while (notas != contadorNota)
    {
        printf("ingrese la %i nota\n", notaactual);
        scanf("%i", &nota);
    
        
        if (nota > 10 || nota < 0)
        {
            printf("ingrese una nota correcta\n");
        }
        else
        {
            notaactual++;
            contadorNota++;
            suma += nota;
        }
    
    }
    // do
    // {
    //     printf("ingrese la %i nota", contadorNota);
    //     scanf("%i", nota);
    //     if (nota >10 && nota <0)
    //     {
    //         printf("ingrese una nota correcta");
    //     }
    //     else
    //     {
    //     contadorNota++;
    //     suma += nota;
    //     }
    // } while (notas != contadorNota);
    promedio = suma / notas;
    printf("el promedio es %.2f", promedio);
    system("pause");

}