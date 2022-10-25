 #include <stdio.h>
 #include <stdlib.h>
// Realizar un programa que calcule el promedio de las notas de los parciales de 
//un curso.
// Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
// parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas 
//de los
// alumnos del curso. A medida que se ingresan las notas, validar que las mismas 
//sean
// mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso 
//de dicha
// nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que 
//se va
// calculando y por último, el promedio general del curso.

 void main()
 {
    float cantAlumnos = 0, cantParciales = 0, promedio = 0, nota, sumatoriaNotas = 0, sumatoriaAlumno = 0, promedioAlumno = 0, promedioSumatorioAlumno;
   


    printf("ingrese la cantidad de alumnos del curso: \n");
    scanf(" %f", &cantAlumnos);
    
    printf("ingrese la cantidad de parciales que se tomaron durante el cuatrimestre: \n");
    scanf(" %f" , &cantParciales);

    for (int i = 1; i <= cantAlumnos; i++)
    {
        sumatoriaAlumno= 0;
        for (int j = 1; j <= cantParciales; j++)
        {
            printf("ingrese la %i nota del %i alumno: \n",j,i);
            scanf("%f", &nota);
            while (nota <= 0 || nota > 10)
            {
                printf("ingrese una nota correcta");
                scanf("%f", &nota);
            }
            sumatoriaAlumno+= nota;
            sumatoriaNotas += nota;
            
        }
        promedioAlumno =  sumatoriaAlumno / cantParciales;
        printf("el alumno %i tiene como promedio %f\n", i,promedioAlumno);
        promedioSumatorioAlumno += promedioAlumno;
    }
    promedio = promedioSumatorioAlumno / cantAlumnos;
    printf("el promedio general del curso es: %f", promedio);
 }