#include <stdio.h>
#include <stdlib.h>

int signo(float num);

void main()
{
    float numero;
    int resultado;
    printf("Ingresa un nro:\n");
    scanf("%d", &numero); 
   
    resultado = signo(numero);

    printf("la salida es %i", resultado);

    if(resultado = 1)
    {
        printf("el nro es positivo ");
    }
    else if (resultado ==0)
    {
        printf("el nro es nulo ");
    }
    else
    {
        printf("el nro es negativo");
    }
}
int signo(float num)
{
    
    int resultado = 0;

    if(num<0)
    {
        resultado = -1;
    }
    else if(num== 0)
    {
        resultado = 0;    
    }
    else
    {
        resultado = 1;
    }

    return resultado;
}
