 #include <stdio.h>
 #include <stdlib.h>
//  4. Dado el vector {10, 20, 5, 15, 30, 20}
// - Informar el vector de la forma: "Indice: X, Valor: Y".
// - Totalizar el vector e informar el total.
// - Informar el contenido de las posiciones impares.
// - Informar las posiciones que contienen números impares.
// - Informar el mayor número.
// - Informar cuántas veces aparece el número 20.
 void main()
 {
    int vector[6] = {10, 20, 5, 15, 30, 20};
    int suma = 0;
    int mayor = vector[0];
    int acum;
    for(int i = 0; i < 6; i++)
    {
        printf("Indice: %d Valor %d \n",i,vector[i]);
        suma = suma + vector[i];
    }
    printf("\n");
    printf("La suma da un total de %i", suma);
    printf("\n");

    for (int i = 0; i < 6; i++)
    {
        if (i % 2 != 0)
        {
            printf("El contenido en la posicion impar %i es: %i\n",i,vector[i]);
        } 
    }
    for (int i = 0; i < 6; i++)
    {
        if (vector[i] % 2 != 0)
        {
           
            printf("las posiciones que contienen numeros impares son: %d\n",i);
           
        } 
    }
    for (int i = 0; i < 6; i++)
    {
        if (mayor < vector[i])
        {
            mayor = vector[i];
        }
        if (vector[i] == 20)
        {
            acum += 1;
        }
    }
    printf("el mayor numero dentro del arreglo es: %i",mayor);
    printf("\n");
    printf("la cantidad de veces que se repite el numero 20 es: %i\n",acum);
    system("pause");

}   