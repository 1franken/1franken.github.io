 #include <stdio.h>
 #include <stdlib.h>

 void main()
 {
   int num1, num2, num3;
   printf("ingrese el primer numero: ");
   scanf("%i", &num1);

   printf("ingrese el segundo numero: ");
   scanf("%i", &num2);

   printf("ingrese el tercer numero: ");
   scanf("%i", &num3);


    if (num1 > num2 && num1 < num3)
    {
        printf("el primer numero es mayor(%i)",num1);
    }
        else if (num2 > num1 && num2 > num3)
        {
            printf("el segundo numero es mayor(%i)",num2);
        }

        else if (num3 > num1 && num3> num2)
        {
            printf("el tercer numero es mayor(%i)",num3);
        }
        
        else if (num1 > num3 && num1 == num2)
        {
            printf("el mayor numero es el primero y el segundo(%i)",num1);
        }
        else if (num1 > num3 && num1 == num3)
        {
            printf("el mayor numero es el primero y el tercero(%i)",num1);
        }
        else if (num2 > num1 && num2 == num3)
        {
            printf("el mayor numero es el segundo y el tercero(%i)",num2);
        }
         else if (num2 == num1 && num2 == num3)
        {
            printf("los tres numeros ingresados son iguales(%i)",num1);
        }
}