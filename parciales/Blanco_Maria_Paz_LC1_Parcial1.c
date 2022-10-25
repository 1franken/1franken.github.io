 #include <stdio.h>
 #include <stdlib.h>
void main(){

    int i, edad, opcionEstudio, otraCarrera=0;
    int opcionTrabaja, trabajadores = 0, partTime = 0, fullTime = 0;
    float sumaEdades=0;
    
    
    for(int i = 0; i < 20; i++)
	{
		printf("Ingrese la edad: ");
		scanf("%d", &edad);
		
		if(edad > 0)
		{
			sumaEdades += edad;
		}
		else
		{
			printf("La edad debe ser mayor a 0, vuelva a ingresar. \n", i--);
			
		}
		while(edad > 0)
		{
			sumaEdades += edad;
			printf("Estudi%c otra carrera anteriormente (1-SI/0-NO): ", 162);
			scanf("%d", &opcionEstudio);
			
			if (opcionEstudio == 1)
			{
				otraCarrera++;
			}
			else opcionEstudio = 0;
			
			printf("Trabaja actualmente (1-SI/0-NO): \n");
			scanf("%d", &opcionTrabaja);

			while(opcionTrabaja == 1)
			{
				printf("1. Part time\n");
				printf("2. Full time\n");
				printf("Opci%cn:  ", 162);
				scanf("%d", &opcionTrabaja);
				

				switch(opcionTrabaja)
				{
					case 1: partTime++;
						opcionTrabaja = 0;
						trabajadores++;
						edad = 0;
						break;
					case 2: fullTime++;
						opcionTrabaja = 0;
						trabajadores++;
						edad = 0;
						break;
					default: printf("Valor ingresado no v%clido.\n", 160);
					printf("Ingrese nuevamente los datos \n", i--);
					
					break;
				}
			}
			edad = 0;
		}
	}
	printf("El promedio de las edades es: %f \n", sumaEdades / 20);
	printf("Alumnos que han estudiado otra carrera: %d \n", otraCarrera);
	printf("Cantidad de trabajadores: %d \n", trabajadores);
	printf("Cantidad Part Time: %d \n", partTime);
	printf("Cantidad Full Time: %d", fullTime);

    system("pause");

    
    }