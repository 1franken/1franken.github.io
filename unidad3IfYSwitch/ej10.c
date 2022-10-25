
 #include <stdio.h>
 #include <stdlib.h>

// - Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde
// dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la
// consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura
// if y luego estructura switch).

void main()
{
    int mes = 0;
    printf("ingrese un numero del 1 al 12: \n");
    scanf("%i", &mes);
    switch (mes)
    {
    case 1:
        printf("EL MES QUE CORRESPONDE A ESE NUMERO ES ENERO\n");
        break;
    case 2:
        printf("EL MES QUE CORRESPONDE A ESE NUMERO ES FEBRERO\n");
        break;
    case 3:
        printf("EL MES QUE CORRESPONDE A ESE NUMERO ES MARZO\n");
        break;
    case 4:
        printf("EL MES QUE CORRESPONDE A ESE NUMERO ES ABRIL\n");
        break;
    case 5:
        printf("EL MES QUE CORRESPONDE A ESE NUMERO ES MAYO\n");
        break;
    case 6:
        printf("EL MES QUE CORRESPONDE A ESE NUMERO ES JUNIO\n");
        break;
    case 7:
        printf("EL MES QUE CORRESPONDE A ESE NUMERO ES JULIO\n");
        break;
    case 8:
        printf("EL MES QUE CORRESPONDE A ESE NUMERO ES AGOSTO\n");
        break;
    case 9:
        printf("EL MES QUE CORRESPONDE A ESE NUMERO ES SEPTIEMBRE\n");
        break;
    case 10:
        printf("EL MES QUE CORRESPONDE A ESE NUMERO ES OCTUBRE\n");
        break;
    case 11:
        printf("EL MES QUE CORRESPONDE A ESE NUMERO ES NOVIEMBRE\n");
        break;
    case 12:
        printf("EL MES QUE CORRESPONDE A ESE NUMERO ES DICIEMBRE\n");
        break;    
    
    default:
        printf("NUMERO EQUIVOCADO \n");
        break;
    }
}
