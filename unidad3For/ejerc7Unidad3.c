 #include <stdio.h>
 #include <stdlib.h>

 void main ()
//7. Diseñe un algoritmo que sume los 20 primeros números impares.

{
    int acumulador = 0;
    for (int i = 1; i <= 40; i++)
    {   
        if (i % 2 == 1)
        {
            acumulador = acumulador + i;
           
        }
    }
    printf("%i", acumulador);
}

