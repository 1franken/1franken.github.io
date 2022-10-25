 #include <stdio.h>
 #include <stdlib.h>
 void main (){{
    //EJERCICIO 5 Escriba un programa que pida ingresar un número y a continuación escriba en la consola si el mismo es par o impar.

int num;
int resto;
printf("escriba un numero\n");
scanf("%i", &num);
resto = num % 2;

if (resto == 0)
{
    printf("el numero es par");
}

else
printf("el numero es impar");


 }}