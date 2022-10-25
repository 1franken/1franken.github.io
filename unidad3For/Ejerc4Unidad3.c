 #include <stdio.h>
 #include <stdlib.h>

 void main ()
//4. Imprimir la suma de los números impares que se encuentran entre los números 1 y 10.

{
    int impares = 0, resto = 0;
    {
        for (int i = 1; i <=10; i++)
        {
            resto = i % 2; 
            if (resto != 0)
            {
            impares = impares + i;   
            }
        }
        printf("%i", impares);
    }
}
