#include <stdio.h>
#include <stdlib.h>

const int tam = 2;

int numerosID[2];
float pesos[2];
int destinos[2];
int horasPlanificadas[2];
int estados[2];
int contadorEnvio = 1;

// no dejar cargar mas envios cuando se termina de ejecutar la carga
// no dejar cargar un envio con un mismo numero de envio anterior
void cargarEnvios();
void mostrarEnvios();
void modificarEstadoDeUnEnvio();
void mostrarEnvioParaDestino(int destino);

void main()
{
    int opcion = 0;
    int des = 0;

    do
    {
        printf("\n1- Cargar env%cos planificados.", 161);
        printf("\n2- Mostrar env%cos planificados.", 161);
        printf("\n3- Modificar estado de un env%co.", 161);
        printf("\n4- Mostrar env%cos para un destino.", 161);
        printf("\n5- Salir.\n\n");
        scanf("%d", &opcion);

        if (opcion != 5)
        {
            switch (opcion)
            {
            case 1:
                // Cargar envíos planificados
                cargarEnvios();
                break;
            case 2:
                // Mostrar envíos planificados
                mostrarEnvios();
                break;
            case 3:
                // Modificar estado de un envío
                modificarEstadoDeUnEnvio();
                break;
            case 4:
                // Mostrar envíos para un destino
                printf("Destino a buscar: ");
                printf("\n1- Rosario");
                printf("\n2- Funes");
                printf("\n3- Roldan");
                printf("\n4- Baigorria");
                printf("\n");
                scanf("%i", &des);

                mostrarEnvioParaDestino(des);

                break;
            default:
                printf("La opci%cn ingresada es inv%clida\n", 162, 160);
            }
        }

    } while (opcion != 5);
}

void cargarEnvios()
{
    printf("--Ingrese los datos de los env%cos--\n", 161);

    for (int i = 0; i < tam; i++)
    {
        printf("Nro. de env%co numero %d: ", 161, contadorEnvio);
        scanf("%d", &numerosID[i]);
        while (numerosID[i] < 100 || numerosID[i] > 999)
        {
            printf("ingrese un numero de identificacion correcto, entre 100 y 999.");
            scanf("%d", &numerosID[i]);
        }

        printf("Ingrese el peso: ");
        scanf("%f", &pesos[i]);

        printf("Ingrese el destino: ");
        printf("\n1- Rosario");
        printf("\n2- Funes");
        printf("\n3- Roldan");
        printf("\n4- Baigorria");
        printf("\n");
        scanf("%i", &destinos[i]);
        while (destinos[i] < 1 || destinos[i] > 4)
        {
            printf("Ingrese un destino correcto.");
            printf("\n1- Rosario");
            printf("\n2- Funes");
            printf("\n3- Roldan");
            printf("\n4- Baigorria");
            printf("\n");
            scanf("%i", &destinos[i]);
        }

        printf("Ingrese la hora: ");
        scanf("%d", &horasPlanificadas[i]);
        while (horasPlanificadas[i] < 8 || horasPlanificadas[i] > 22)
        {
            printf("ingrese una hora correcta (entre las 8 y 22 hs.)\n");
            scanf("%i", &horasPlanificadas[i]);
        }

        printf("Ingrese el estado: ");
        printf("\n0- Pendiente");
        printf("\n1- Despachado");
        printf("\n");
        scanf("%i", &estados[i]);
        while (estados[i] < 0 || estados[i] > 1)
        {
            printf("ingrese un estado correcto.\n");
            printf("\n0- Pendiente");
            printf("\n1- Despachado");
            printf("\n");
            scanf("%i", &estados[i]);
        }
        contadorEnvio++;
    }
}

void mostrarEnvios()
{
    for (int i = 0; i < tam; i++)
    {
        mostrarEnvio(i);
    }
}

void mostrarEnvioParaDestino(int destino)
{
    for (int i = 0; i < tam; i++)
    {
        if (destino == destinos[i])
        {
            mostrarEnvio(i);
        }
    }
}

void mostrarEnviosDespachados()
{
    for (int i = 0; i < tam; i++)
    {
        if (1 == estados[i])
        {
            mostrarEnvio(i);
        }
    }
}

void mostrarEnviosPendientes()
{
    for (int i = 0; i < tam; i++)
    {
        if (0 == estados[i])
        {
            mostrarEnvio(i);
        }
    }
}

void modificarEstadoDeUnEnvio()
{
    int nroID = 0, est = 0, i = 0;
    int encontrado = 0;

    printf("Nro del env%co a modificar:", 161);
    scanf("%i", &nroID);

    for (i = 0; i < tam; i++)
    {
        if (nroID == numerosID[i])
        {
            encontrado = 1; 
            printf("ingrese un nuevo estado del envio: ");
            scanf("%i", &estados[i]);
            while (estados[i] < 0 || estados[i] > 1)
            {
                printf("ingrese un estado correcto, 0 o 1.");
                scanf("%d", &estados[i]);
            }
        }

    }
    if (encontrado == 0)
    {
        printf("no se encontro el envio a modificar.\n");
    }
}

void mostrarEnvio(int i)
{
    printf(" %d \t", numerosID[i]);
    printf(" %.2f \t", pesos[i]);
    switch (destinos[i])
    {
    case 1:
        printf("Rosario");
        break;
    case 2:
        printf("Funes");
        break;
    case 3:
        printf("Roldan");
        break;
    case 4:
        printf("Baigorria");
        break;
    default:
        printf("Destino inv%clido\n", 160);
    }
    printf("\t");
    printf(" %d hs \t", horasPlanificadas[i]);

    switch (estados[i])
    {
    case 0:
        printf("Pendiente");
        break;
    case 1:
        printf("Despachado");
        break;
    default:
        printf("Estado inv%clido\n", 160);
    }

    printf("\n");
}
