#include <stdlib.h>
#include <stdio.h>
// //14. Diseñar e implementar un programa que solicite a su usuario un valor no negativo n y
// visualice la siguiente salida:
int main () 
{
    int i, j, n;

    printf("ingrese un numero: \n");
    scanf (" %i", &n);
    for(i=n; i>=0; i--) {
        int b = i;
        for(j=b; j<=1; j--) {
            printf("%i", j);
        }
        printf("\n");
    }
    system("pause");
}