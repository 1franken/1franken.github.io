#include <stdio.h>
#include <stdlib.h>

int legajos[30]={0};
char nombres[30][50]={};

float notas[30]={0};

const int tam = 2; //cambiar a 30 antes de entregar

void cargarAlumnos();
void mostrarAlumnos();
void mostrarAlumnoNotaMayor();
void modificarNota();

void main() 
{
    int opcion = 0;

   

	    printf("\n1- Cargar los alumnos.");
	    printf("\n2- Modificar una nota.");
	    printf("\n3- Mostrar alumno que tiene mayor nota.");
	    printf("\n4- Listado de alumnos.\n");
        printf("\n5- Salir.\n\n");
	    scanf("%d", &opcion);

        if(opcion != 5)
        {
            switch(opcion)
            {
                case 1: 
                    cargarAlumnos();
                    break;

                case 2: 
                    modificarNota();
                    break;

                case 3:                     
                   
                    break;

                case 4:                     
                    mostrarAlumnos();
                    break;

               
            }
        }

	
}

void cargarAlumnos()
{ 
    int salir=0;
    printf("\n--Ingrese los datos de los alumnos--\n");

	for(int i = 0; i < tam; i++)
    {
       do
		{
			printf("N%cmero de legajo:\n ",163);
			scanf("%d", &legajos[i]);
			
			if (legajos[i] > 99999)
			{
				salir = 1;
			}
			else
			{
				printf("El n%cmero de legajo es incorrecto, ingrese nuevamente: \n", 163);
				salir = 0;
			}
		} while (salir == 0);
        
        
        printf("Ingrese nombre completo del alumno:\n");	
		scanf("%s", &nombres[i]);

        do
        {
            printf("Ingrese la nota: \n");
            scanf("%f", &notas[i]);
            if (notas[i]<0 || notas>10)
            {
                printf("La nota es incorrecta, ingrese nuevamente: \n");
            }   

        } while (notas[i]<0 || notas[i]>10);
        
       
	}
}

void modificarNota()
{
	int legajoMod=0;
    float nuevaNota;
    int encontrado = 0;

	printf("Legajo del alumno a modificar:");
	scanf("%i", &legajoMod[i]);


    int i=0;

    for (i = 0; i < tam; i++)
    {
        if (notas[i] == nuevaNota[i])
        {
            encontrado = 1; 
            printf("ingrese la nueva nota: ");
            scanf("%f", &nuevaNota[i]);
            while (nuevaNota[i]<0 || nuevaNota[i]>10)
            {
                printf("ingrese una nota correcta:");
                scanf("%f", &nuevaNota[i]);
            }
        }

    }
    if (encontrado == 0)
    {
        printf("No se encontro la nota a modificar.\n");
    }	
	
}

void mostrarAlumnoNotaMayor()
{
    int mayor;
    int posicion;

    for (int i = 0; i < tam; i++)
    {
        if (notas[i] > mayor)
        {
            mayor = notas[i];
            posicion = i;
        }
    }

    printf("El alumno con nota mayor: \n");
    printf(" %d \t", nombres[posicion]);
    printf(" %d \t", notas[posicion]);
}

void mostrarAlumnos()
{
    printf("\n--Listado de alumnos--\n");

    
}