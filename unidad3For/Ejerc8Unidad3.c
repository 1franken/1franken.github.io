 #include <stdio.h>
 #include <stdlib.h>

 void main ()
//8. Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del número.
{
    int i, num = 0, resultado;
    printf("escriba un numero para la tabla de multiplar: \n");
    scanf("%i ", &num);

    for (i = 1; i <= 10; i++)
    {
        resultado = num * i;
        printf("%i * %i = %i\n", num, i, resultado);
    }
    
}