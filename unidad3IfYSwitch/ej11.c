
 #include <stdio.h>
 #include <stdlib.h>

//  Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
// Luego presentar el siguiente menú:
// 1. Informar su suma
// 2. Informar su resta
// 3. Informar su multiplicación
// 4. Informar su división
// 5. Salir
// Seleccione una operación:
// Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
// programa debe terminar.

void main ()
{
    double num1 = 0;
    double num2 = 0;
    double resultado = 0;
    int menu = 0;
    printf("ingrese su primer numero: ");
    scanf("%d", &num1);
    printf("ingrese su segundo numero: ");
    scanf("%d", &num2);
    printf("1. Informar su suma\n 2. Informar su resta\n 3. Informar su multiplicacion\n 4. Informar su division\n 5. Salir\n");
    scanf("%i", &menu);
    switch (menu)
    {
    case 1:
        resultado = num1 + num2;
        printf("su resultado es: %d", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("su resultado es: %d", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("su resultado es: %d", resultado);
        break;
    case 4:
        resultado = num1 / num2;
        printf("su resultado es: %d", resultado);
        break;
    case 5:
        
        break;
    
    default:
        printf("opcion incorrecta");
        break;
    }