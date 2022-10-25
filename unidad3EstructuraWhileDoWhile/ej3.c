 #include <stdio.h>
 #include <stdlib.h>
//  Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores
// positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número
// (repetir el ingreso de dicho número mientras el número no sea correcto). Informar al
// usuario la suma de los 10 números ingresados.

void main()
 {
        int contador = 1;
        float num = 0, suma =0;

    for (int i = 1; i <= 10; i++)
    {
        printf ("ingrese un numero: ");
        scanf("%f", &num);
        while (num <= 0)
        {
            printf("che nabo, tene mas cuidado, pusiste cualquiera\n");
            scanf("%f", &num);
        }
        suma += num;
    }
    printf("%f", suma);
        
    system("pause");
 }