 #include <stdio.h>
 #include <stdlib.h>
 void main()
 {
    float promedio, suma,  numeros[5] = {7,45,99,-2,55};

    for (int i = 0; i < 5; i++)
    {
        suma += numeros[i];
    }
    promedio = suma / 5;
    printf("la suma de sus componentes son: %.2f\n",suma);
    printf("el promedio de sus componentes son: %.2f\n",promedio);
    system("pause");

 }