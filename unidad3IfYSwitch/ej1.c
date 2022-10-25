 #include <stdio.h>
 #include <stdlib.h>

void main()
{
// EJERCICIO 1 Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en pantalla
{
    int num1, num2;
    
    printf("Ingresa primer n%cmero:\n", 163);
    scanf("%d", &num1); 
    printf("Ingresa segundo num:\n");
    scanf("%d", &num2);
   
    if(num1 > num2)
    {
        printf("El primer num es mayor. Ya que %d es mayor que %d \n", num1, num2);
    }
    else
    {
        printf("El segundo num es mayor. Ya que %d es mayor que %d \n", num2, num1);
    }

}

}

        




