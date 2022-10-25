 #include <stdio.h>
 #include <stdlib.h>

 void main()
 {
    int numeros[5] = {7, 45, 99, -2, 55};

    printf("En el orden ingresado.\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Indice: %d \t Valor: %d \n",i,numeros[i]);
    }
    
    printf("\nDe atras hacia adelante. \n");
    for (int i = 5; i > 0; i--)
    {
        printf("Indice: %d Valor: %d \n",i,numeros[i]);
    }
    system("pause");
    return 0;

 }