 #include <stdio.h>
 #include <stdlib.h>

 void main()
 {
    float valorVenta;

    printf("ingrese el valor de la venta: ");
    scanf("%f", &valorVenta);

    if (valorVenta >= 100000)
    {
        valorVenta = valorVenta - (valorVenta*0.15);
        printf("el valor de la venta es:%.2f ", valorVenta);
    }
    else if (valorVenta > 0 && valorVenta < 100000)
    {
        valorVenta = valorVenta - (valorVenta*0.1);
        printf("el valor de la venta es:%.2f ", valorVenta);
    }
    
    else
    {
        printf("INGRESO UN VALOR INVALIDO");
    }
 }