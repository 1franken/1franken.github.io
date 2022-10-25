#include <stdio.h>
#include <stdlib.h>

// Escriba un programa que lea 5 números por teclado, los copie a otro array
// multiplicados por 2 y muestre el segundo array.
void main()
{
    float array1[5];
    float array2[5];
    int i, n = 1, num, num2;
    for ( i = 0; i < 5; i++)
    {
        printf("ingrese el %d numero: ",n++);
        scanf("%d", &num);
        array1[i]=num;
        num2=num*2;
        array2[i]=num2;
    }
    for ( i = 0; i < 5; i++)
    {
        num=array1[i];
        num2=array2[i];
        printf("%d\n", num);
        printf("su doble es: \n");
        printf("%d\n\n", num2);
    }
    
    
    
}