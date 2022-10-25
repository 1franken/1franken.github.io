#include <stdio.h>
#include <stdlib.h>

/*
6. Ingrese por teclado la facturación de los últimos 6 meses. Informar:
- La facturación total
- El promedio de facturación
- La máxima facturación
- La mínima facturación
*/

void main()
{
    float fact[6];
    float total = 0, promedio= 0 , min , max;
    int i;

    for (i = 0; i < 6; i++)
    {
        printf ("Ingrese facturacion de su mes %i\n",i+1);
        scanf ("%f",&fact[i]);
        total = total + fact[i];
    }
    promedio = total / 6;
    printf ("Promedio de la facturacion es %f\n", promedio);
    min = fact[0];
    max = fact[0];
    for (i = 1; i < 6; i++)
    {
         if ( min>fact[i])
       {
            min = fact[i];
       }
       if (max<fact[i])
       {
            max = fact[i];
       }
    }
     printf ("Minima facturacion es %f\n", min);
     printf ("Maxima facturacion es %f\n", max);
}