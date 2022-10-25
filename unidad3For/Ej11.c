#include <stdio.h>
#include <stdlib.h>
//11. Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida:
void main(){
   for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
           printf("@\n");
        }
        else
        {
           printf("@@\n");
        }
        
   }
}