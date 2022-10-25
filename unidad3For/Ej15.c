// . Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
// Mostrar el promedio por alumno y el promedio general.
#include <stdlib.h>
#include <stdio.h>

int main () 
{
    float promedioGeneral, calificacionesTotales;
    const int cantAlumnos = 5, cantPruebas = 3;
    for(int i=1; i<=cantAlumnos; i++) {
        float calificacionesAlumno, promedioAlumno;
        calificacionesAlumno = 0;
        for(int j=1; j<=cantPruebas; j++)
        {
            float calificacion;
            printf("Escriba la %i nota del %i alumno: ", j, i);
            scanf("%f", &calificacion);
            calificacionesAlumno += calificacion;
        }
        promedioAlumno = calificacionesAlumno / cantPruebas;
        printf("El promedio para el %i alumno es %f \n", i, promedioAlumno);
        calificacionesTotales += calificacionesAlumno;
    }
    promedioGeneral = calificacionesTotales / (cantAlumnos * cantPruebas);
    printf("el promedio general para todos los alumnos es %f \n", promedioGeneral);
    system("pause");
}