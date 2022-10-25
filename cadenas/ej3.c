#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
// 3. Ingresar por consola 10 nombres de alumnos en un array y sus apellidos en otro, concatenar de la forma
// "nombre apellido" para cada uno, y mostrar por consola
 void main()
 {
    char nombres[10][100];
    char apellidos[10][100];
    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese nombre %d\n",i+1);
        scanf("%s", &nombres[i]);
        printf("Ingrese nombre %d\n",i+1);
        scanf("%s", &apellidos[i]);
    }
    printf("\nListado de alumnos:\n\n");
    for (int i = 0; i < 10; i++)
    {
        strcat(nombre[i], " "); //primero concateno un espacio
        printf("- %s \n", strcat(nombres[i]apellidos[i])); 
    }

        system("pause");
 }