#include <stdio.h>
#include <stdlib.h>

void main()
{
        int opcion;
    
        printf("1. Cargar alumnos\n");
        printf("2. Buscar un alumno\n");
        printf("3. Modificar la nota de un alumno\n");
        printf("4. Mostrar un listado de los 10 alumnos\n");
        printf("5. Salir\n");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            cargarAlumno();
        break;

        case 2:
            buscarAlumno();
        break;

        case 3:
            modificarNota();
        break;

        case 4:
            mostrarAlumnos();
        break;
        
        default:
        break;
        }

    system("pause");
}
void cargarAlumno()
{
    int i, j, numeroAlumno = 1;
    int dni[10], opcion;
    char alumno[10];
    for (j = 0; j < 10; j++)
        {
            printf("ingrese el nombre del %d alumno",numeroAlumno++);
            scanf("%s", &alumno[j]);
        }
        numeroAlumno = 1;
        for ( i = 0; i < 10; i++)
        {
            printf("ingrese el dni del %d alumno",numeroAlumno++);
            scanf("%d", &dni[i]);
        }
    return main();
}

void buscarAlumno()
{
    printf(numeroAlumno);
}
void modificarNota()
{

}
void mostrarAlumnos()
{
    int j, i, dni[10];
    char alumno[10];
    for (j = 0; j < 10; j++)
        {
            printf("%s",alumno[j]);
        }
        for ( i = 0; i < 10; i++)
        {
            printf("%d", dni[i]);
        }
    return main();
}