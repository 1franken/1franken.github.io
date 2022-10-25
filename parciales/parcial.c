 #include <stdio.h>
 #include <stdlib.h>
 void main()
 {
    int menu, edad, otraCarrera, siEstudio = 0, noEstudio = 0, trabaja, fullTime = 0, siTrabaja = 0, modalidadTrabajo, partTime = 0;
    const float alumnos = 20;
    float promedioEdad, sumatoriaEdad;
    printf("ingrese lo solicitado: \n");   
    printf("1- Edad de los alumnos y calcular promedio\n" ); 
    printf("2- Estudi%c otra carrera anteriormente\n",162);  
    printf("3- Trabaja actualmente\n");
    scanf("%i", &menu);
    while (menu <1 || menu > 3 )
    {
        printf("Ingrese una opci%cn correcta.\n", 162 );   
        printf("1- Edad de los alumnos y calcular promedio\n" ); 
        printf("2- Estudi%c otra carrera anteriormente\n",162);  
        printf("3- Trabaja actualmente\n");
        scanf("%i", &menu);
    }
    
    switch (menu)
    {
        case 1:
            for (int i = 1; i <= alumnos; i++)
            {
                printf("ingrese la edad del %i alumno", i);
                scanf("%i", &edad);
                while (edad <= 0)//es la unica validacion que se pide para la edad
                {
                    printf("El valor ingresado debe ser mayor a 0, ingrese nuevamente la edad del %i alumno",i);
                    scanf("%i", &edad);
                }
                sumatoriaEdad += edad;
            }
            promedioEdad = sumatoriaEdad / alumnos;
            printf("el promedio de edad de la comisi%cn es: %.2f\n",162,promedioEdad);
            break;
        case 2:
            for (int j = 1; j <= alumnos; j++)
            {
            printf("Anteriormente, el alumno n%cmero %i estudi%c otra carrera?\n",163,j, 162);
            printf("Ingrese 1 si es correcto, de lo contrario ingrese 0\n");
            scanf("%i", &otraCarrera);
            while (otraCarrera != 0 && otraCarrera != 1)
                {
                    printf("Opcion inv%clida\n",160);
                    printf("Anteriormente, el alumno n%cmero %i estudi%c otra carrera?\n",163,j,162);
                    printf("Ingrese 1 si es correcto, de lo contrario ingrese 0\n");
                    scanf("%i", &otraCarrera);
                }
                if (otraCarrera == 1)
                    {
                        siEstudio += 1;
                    }
            
            }
            printf("Anteriormente, %i estudiaron otra carrera\n", siEstudio);
            
            //ignoro totalmente la parte de los alumnos que no estudiaron anteriormente ya que no se pide mostrar tal informacion.
            break;
        
        case 3:
            for (int i = 1; i <= alumnos; i++)
            {
                printf("Acualmente esta trabajando el alumno n%cmero %i?\n", 163 , i);
                printf("Ingrese 1 si es correcto, de lo contrario ingrese 0\n");
                scanf("%i", &trabaja);
                while (trabaja != 0 && trabaja != 1)
                {
                    printf("Opci%cn inv%clida\n",162,160);
                    printf("Acualmente esta trabajando el alumno n%cmero %i?\n", 163, i);
                    printf("Ingrese 1 si es correcto, de lo contrario ingrese 0\n");
                    scanf("%i", &trabaja);

                }
                if (trabaja == 1)
                {
                    siTrabaja += 1;
                    printf("Trabaja part time o full time? (indique 0 para part time y 1 para full time)\n");
                    scanf("%i", &modalidadTrabajo);
                    while (modalidadTrabajo != 0 && modalidadTrabajo != 1)
                    {
                        printf("Opci%cn inv%clida\n",162,160);
                        printf("Trabaja part time o full time el alumno %i? (indique 0 para part time y 1 para full time)\n",i);
                        scanf("%i", modalidadTrabajo);

                    }

                    if (modalidadTrabajo == 0)
                    {
                        partTime += 1;
                    }
                    else fullTime += 1;
                    
                }
                    
            }
            printf("La cantidad de alumnos que trabajan full time son %i y los que trabajan part time son %i\n", fullTime, partTime);
            break;
            //ignoro totalmente la parte de los alumnos que no trabajan ya que no se pide mostrar tal informacion.
        default:
        
    break;
    }
    
    system("pause");
 }