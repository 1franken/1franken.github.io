 #include <stdio.h>
 #include <stdlib.h>
 void main()
 {
    int dni = 38632584, dniIngresado = 0, intentos = 1, ingresaCorrectamente = 0;
    float nota = 7;

    do
    {
        printf("ingrese DNI:\n");
        scanf(" %i", &dniIngresado);

        if (dniIngresado != dni)    
        {
            printf("DNI inexistente \n");
            intentos++;
        }
        
    } while ((dniIngresado != dni) && intentos <=3);

    if (dniIngresado == dni)
    {
        printf("La nota del alumno con DNI %i es:  %.2f\n",dni,nota);

    }
    else
    {
        printf("se acabaron los intentos\n");
    }
    system("pause");   
    
 }