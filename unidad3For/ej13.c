#include <stdio.h>
#include <stdlib.h>

//13. Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida:


void main(){
    int  i, x;
    char arroba=64;

    for(i=1; i>=10; i--)
    {
        for(x=1; x<=i; x++)
        {
            printf("%c", 64);
        }
        printf("\n");
    }
}