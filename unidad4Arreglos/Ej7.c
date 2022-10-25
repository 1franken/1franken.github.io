#include <stdio.h>
#include <stdlib.h>
// Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
// leer las notas por consola, mostrar la suma de sus componentes y el promedio.

void main()
{
    int cantNotas = 0, i;
    float sumaNotas, promedio;

    printf("Ingrese la cantidad de notas a cargar: \n");
    scanf("%d", &cantNotas);
    float arreglo[cantNotas];
    printf("%i\n", cantNotas);
    printf("%i\n", sumaNotas);
    // for ( i = 0; i < cantNotas ; i++)
    // {
    //     printf("ingrese la nota %i: \n", i+1);
    //     scanf("%f", &arreglo[i]);
    //     sumaNotas += arreglo[i];
    // }
    for (i = 0; i < cantNotas; i++)
    {
        printf ("Ingrese nota %i\n",i+1);
        scanf ("%f",&arreglo[i]);
        sumaNotas = sumaNotas + arreglo[i];
    }
    promedio = sumaNotas / cantNotas;
    printf("la suma de todas las notas es %.2f y su promedio es %.2f\n",sumaNotas,promedio);
    system("pause");
}


// En un entero guardar el valor que ingrese el usuario para determinar la cantidad de notas a cargar, que seria el 
//tamano del array
// Con un ciclo de iteracion (for) recorrer desde 0 hasta el numero que ingreso el usuario - 1 (cantidad de notas - 1)
// Mientras recorres, preguntas la nota para la iteracion actual y la guardas en la posicion del array 
//que corresponde al numero de iteracion (i del for)
