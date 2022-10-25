 #include <stdio.h>
 #include <stdlib.h>
//  Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
// Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
// parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
// alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
// mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
// nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
// calculando y por último, el promedio general del curso.

void main()
{
    float promedio, suma, nota = 0, promedioActual;
    int contador = 1, parciales;
    
    printf("ingrese la cantidad de parciales\n");
    scanf(" %f", &parciales);
    for (int i = 0; i < parciales; i++)
        {
                
            printf("ingrese la nota del %d parcial\n",contador);
            scanf(" %f", &nota);

            while (nota <= 0 || nota > 10)
            {
                printf("ingresaste una nota invalida, por favor ingrese una nota correcta: \n");
                scanf(" %f", &nota);
            }
            
            suma += nota;
            promedioActual = suma / contador;
            printf("el promedio hasta el momento es %.2f", promedioActual);
            contador++;

        }
    promedio = suma / contador;
    printf("el promedio general es: %.2f", promedio);

}



