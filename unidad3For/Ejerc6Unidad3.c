 #include <stdio.h>
 #include <stdlib.h>

 void main ()
//6. Suma de los 10 primeros números múltiplos de tres.
{
    int resto = 0, acumulador = 0;

    for (int i = 1; i <= 30; i++)
    {   
        resto = i % 3;
        if (resto == 0)
        {
            acumulador += i;
        }
    }
    printf("%i", acumulador);

}

