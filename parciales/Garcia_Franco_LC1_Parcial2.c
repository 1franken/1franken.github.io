#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int legajos[20] = {0};

char apellidos[20][50] = {};
char nombres[20][50] = {};
int adeudanCuota[20] = {0};
int becados[20] = {0};
int contadorAlumnos = 1;
const int tam = 2;

void cargarAlumnos();
void modificarCondicionDeBecado();
void calcularYMostrarDeuda();
void mostrarAlumnos();

void main()
{
    int opcion = 0;

    do
    {
        printf("\n1- Cargar los alumnos.");
        printf("\n2- Modificar la condici%cn de becado de un alumno.", 162);
        printf("\n3- Mostrar el total de la deuda.");
        printf("\n4- Listado de alumnos.");
        printf("\n5- Salir.\n\n");
        scanf("%d", &opcion);

        if (opcion != 5)
        {
            switch (opcion)
            {
            case 1:
                cargarAlumnos();
                break;

            case 2:
                modificarCondicionDeBecado();
                break;

            case 3:
                calcularYMostrarDeuda();
                break;

            case 4:
                mostrarAlumnos();
                break;

            default:
                printf("Ingres%c una opci%cn incorrecta\n", 162, 162);
            }
        }
    } while (opcion != 5);
}
//opcion 1
void cargarAlumnos()
{
    printf("\n--Ingrese los datos de los alumnos--\n");

    for (int i = 0; i < tam; i++)
    {
       
        printf("Legajo del alumno numero %d\n", contadorAlumnos);
        scanf("%d", &legajos[i]);
        while (legajos[i] < 1000 || legajos[i] > 9999)
        {
            printf("el legajo del alumno debe ser entre 1000 y 9999.\n");
            scanf("%d", &legajos[i]);
        }
        
        printf("Apellido del alumno: ");
        fflush(stdin);
        scanf("%[^\n]", &apellidos[i]);
        fflush(stdin);

        printf("Nombre del alumno: ");
        fflush(stdin);
        scanf("%[^\n]", &nombres[i]);
        fflush(stdin);

        printf("Adeuda cuota:\n0-NO\n1-SI\n");
        scanf("%i", &adeudanCuota[i]);
        while (adeudanCuota[i] < 0 || adeudanCuota[i] > 1)
        {
            printf("Debe ingresar 0 si no adeuda, 1 si adeuda.\n");
            scanf("%i", &adeudanCuota[i]);
        }
        
        printf("Becado:\n0-NO\n1-PARCIAL\n");
        scanf("%i", &becados[i]);
        while (becados[i] < 0 || becados[i] > 1)
        {
            printf("Debe ingresar 0 si no se encuentra becado, de lo contrario ingrese 1.\n");
            scanf("%i", &becados[i]);
        }
        contadorAlumnos++;
    }
}
//opcion 2
void modificarCondicionDeBecado()
{
    int legajoMod;
    int nuevaCondicion, i;
    int encontrado = 0;

    printf("Legajo del alumno: ");
    scanf("%d", &legajoMod);

    for (i = 0; i < tam; i++)
    {
        if (legajoMod == legajos[i])
        {
            encontrado = 1;
            printf("Ingrese su nueva condici%cn de becado:\n",162);
            scanf("%i", &becados[i]);
            while (becados[i] < 0 || becados[i]  > 1)
            {
                printf("debe ingresar 0 si no es becado, 1 si es becado parcial.\n");
                scanf("%i", &becados[i]);
            }
        }
    }
      
    if (encontrado == 0)
    {
        printf("Legajo inexistente...\n");
    }
}
//opcion 3
void calcularYMostrarDeuda()
{
    int valorCuota = 9000;
    int deudaTotal = 0;

   for (int i = 0; i < tam; i++)
    {
        if (1 == adeudanCuota[i])
        {
            if (0 == becados[i])
            {
                deudaTotal += 9000;
            }
            else
                deudaTotal += 4500;
        }
    }
    printf("El dinero que falta recaudar es $%i\n", deudaTotal);
}
//opcion 4
void mostrarAlumnos()
{
    printf("\n--Listado de alumnos--\n");

    for (int i = 0; i < tam; i++)
    {

        printf("Legajo: %d \t", legajos[i]);
        printf("Apellido: %s \t", apellidos[i]);
        printf("Nombre: %s \t", nombres[i]);
        switch (adeudanCuota[i])
        {
        case 0:
            printf("No adeuda cuota");
            break;
        case 1: 
            printf("Adeuda cuota");
            break;
        default:
            printf("Opci%cn inv%clida",162, 160);
            break;
        }
        printf("\t");
        switch (becados[i])
        {
        case 0:
            printf("No becado");
            break;
        case 1:
            printf("Becado parcial");
            break;
        default:
            printf("Opci%cn inv%clido\n",162, 160);
        }
        printf("\n");
    }
}