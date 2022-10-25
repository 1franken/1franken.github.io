 #include <stdio.h>
 #include <stdlib.h>
void main()
{
char horario , movil1 = 'c', movil2 = 'a', movil3 = 'm', tipo, data = 'd';
int pasajeros;
int camion = 0, automovil = 0, moto = 0;
int const camionA =300, automovilA = 0, motoA = 0, camionB = 200, motoB = 0, automovilB = 150;


printf("Ingrese el horario");
scanf("%c", &horario);
    switch (horario)
    {
    case 'A':
            // camion = 300;
            // moto = 100;
            // automovil = 150;
            printf("ingrese el tipo de vehiculo que maneja \n");
            scanf(" %c", &tipo);
            printf("ingrese la cantidad de pasajeros");
             scanf(" %i", &pasajeros);
             if (tipo = 'c')
            {
                 printf("deberas pagar $%i \n", camionA);
            }
             else if (tipo = 'a' && pasajeros > 2 && pasajeros < 6)
             {
                 printf("no deberas pagar nada \n");
             }
             else if (tipo = 'm')
                 printf("deberas pagar $%i", motoA);
             else
             printf("ingrese un vehiculo correcto \n");
        break;
    case 'B':
            // automovil = 150;
            // camion = 200;
            // moto = 0;
            printf("ingrese el tipo de vehiculo que maneja \n");
            scanf(" %c", &tipo);
            if (tipo = 'c')
                printf("deberas pagar $%i \n", camionB);
            else if (tipo = 'a')
                printf("deberas pagar $%i \n", automovilB);
            else if (tipo = 'm')
                printf("deberas pagar $%i \n", motoB);    
            else
            printf("ingrese un vehiculo correcto \n");
            
        default: 
            printf("ingrese un dato correcto, A o B \n");
            break;
        }
    

   
}
    



