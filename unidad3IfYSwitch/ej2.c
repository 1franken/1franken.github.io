 #include <stdio.h>
 #include <stdlib.h>
 void main(){
    //EJERCICIO 2 Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en pantalla. Informar también si los números son iguales.

int num1 = 0, num2 = 0;

    
    printf("Ingresa primer n%cmero:\n", 163);
    scanf("%i", &num1);
    printf("Ingresa segundo n%cmero:\n", 163);
    scanf("%i", &num2);
   
    if(num1 > num2)
    {
        printf("El primer num es mayor. Ya que %i es mayor que %i \n", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("El segundo num es mayor. Ya que %i es mayor que %i \n", num2, num1);
    }
        else
        printf("ambos n%cmeros son iguales", 163);
    
// 
 }