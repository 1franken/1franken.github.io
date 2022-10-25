 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
// 2. Ingresar 2 nombres e indicar cuál de los dos precede alfabéticamente al otro o si son iguales.

 void main ()
 {
    char nombre[2][40];
    int contador = 0;
    int contador2 = 0;
    char aux[40];
    printf("ingrese el primer nombre: \n");
    scanf("%[^\n]", &nombre[contador]);
    contador ++;
    fflush(stdin);    
    printf("ingrese el segundo nombre: \n");
    scanf("%[^\n]", &nombre[contador]);
    fflush(stdin); 

    for (contador = 0; contador < 2; contador++)
    {
        for (contador2 = 0; contador2 < 2-contador; contador2++)
        {
            if (strcmp(nombre[contador2],nombre[contador2+1])>0)
            {
                strcpy(aux,nombre[contador2]);
                strcpy(nombre[contador2],nombre[contador2+1]);
                strcpy(nombre[contador2+1],aux);
            }
        }
    }
    for (contador = 0; contador < 2; contador++)
    {
        printf("%s\n",nombre[contador]);
    }

 }