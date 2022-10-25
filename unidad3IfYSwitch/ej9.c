
 #include <stdio.h>
 #include <stdlib.h>
// EJERCICIO 9    Se desea escribir un algoritmo que pida la altura de una persona, si la altura es menor
//      o igual a 150 cm envíe el mensaje: “Persona de altura por debajo de la media”; si la
//      altura está entre 151 y 170 escriba el mensaje: “Persona de altura media” y si la altura
//      es mayor al 171 escriba el mensaje: “Persona de altura por arriba de la media”
void main()
{
    int altura = 0;
    printf("ingrese su altura: \n");
    scanf("%i", &altura);

    if (altura > 170)
        printf("su altura esta por arriba de la media");
    else if (altura >= 151 && altura <= 170)
        {
            printf("persona de altura media");
        }
    else
        printf("persona de altura por debajo de la media");
}    
    