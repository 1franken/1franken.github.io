 #include <stdio.h>
 #include <stdlib.h> 
 #include <string.h>
//  1. Escribe un programa que pida tres cadenas al
// usuario y muestre sus longitudes (número de letras).

 int main()
 {
    char cadena1[30];
    char cadena2[30];
    char cadena3[30];
    int contador = 0;
    printf("escriba la primer cadena de texto: %c\n",cadena1);
    scanf("%[^\n]", &cadena1);
    fflush(stdin);
    printf("escriba la segunda cadena de texto: \n");
    scanf("%[^\n]", &cadena2);
    fflush(stdin);
    printf("escriba la tercer cadena de texto: \n");
    scanf("%[^\n]", &cadena3);
    fflush(stdin);
    while (cadena1[contador] != 0)
    {
        contador++;
    }
    printf("la longitud de %s es %d", cadena1, contador);
    contador = 0;
    while (cadena2[contador] != 0)
    {
        contador++;
    }
    printf("la longitud de %s es %d", cadena2, contador);
    contador = 0;
    while (cadena3[contador] != 0)
    {
        contador++;
    }
    printf("la longitud de %s es %d", cadena3, contador);
    

    system("pause");
    return 0;
 }