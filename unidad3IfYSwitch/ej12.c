 #include <stdio.h>
 #include <stdlib.h>

 void main()
 {
        // Realizar un programa que permita registrar los datos para una venta de $4600. Para
        // ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor
        // que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el
        // medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese
        // una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.
        // Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por
        // pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para
        // 6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en
        // caso contrario informar la situación y finalizar programa. Por último, presentar un
        // resumen de la operación, por ejemplo:
        // DNI: 38.456.123
        // Medio de pago: Tarjeta de crédito
        // Tarjeta: Cabal
        // Cuotas: 3
        // Total: $4784


        int dni, medioDePago, tarjeta, cantCuotas;
        float venta = 4600;

        printf("ingrese su dni: ");
        scanf("%i", &dni);

        if (dni > 99999999 || dni < 1000000)
        {
            printf("dni incorrecto, vuelva a ejecutar e ingresar su dni");
        }
        else
        {
            printf("ingrese su medio de pago: \n");
            printf("1- Efectivo \n");
            printf("2- Tarjeta \n");
            scanf("%i", &medioDePago);
            switch (medioDePago)
            {
            case 1: printf("DNI: %i\n",dni);
                    printf("Medio de pago: Efectivo\n");
                    printf("total: %.2f\n", venta);
                break;
            case 2:
                printf("Elija la tarjeta con la que desea operar: \n");
                printf("1-Visa \n");
                printf("2-American Express \n");
                printf("3-Mercado Pago \n");
                printf("4-Cabal \n");
                scanf("%i", &tarjeta);
                switch (tarjeta)
                    {
                    case 1:

                        printf("ingrese la cantidad de cuotas:\n");
                        printf("1- 1 cuota\n");
                        printf("2- 3 cuotas\n");
                        printf("3- 6 cuotas\n");
                        printf("4-12 cuotas\n");
                        scanf("%i", &cantCuotas);
                        if (cantCuotas == 1)
                        {
                            venta = venta;
                            printf("dni: \n", dni);
                            printf("medio de pago: Tarjeta de credito \n");
                            printf("Tarjeta: Visa \n");
                            printf("cuotas: 1\n");
                            printf("total venta: %f\n", venta);

                        }
                        else if (cantCuotas == 2)
                        {
                            venta = venta * 1.04;
                            printf("dni: %i\n", dni);
                            printf("medio de pago: Tarjeta de credito \n");
                            printf("Tarjeta: Visa \n");
                            printf("cuotas: 3\n");
                            printf("total venta: %f\n", venta);
                        }
                        
                        else if (cantCuotas == 3)
                        {
                            venta = venta * 1.08;
                            printf("dni: %i\n", dni);
                            printf("medio de pago: Tarjeta de credito \n");
                            printf("Tarjeta: Visa \n");
                            printf("cuotas: 6 o 12\n");
                            printf("total venta: %f\n", venta);
                        }
                        
                        
                        else if (cantCuotas == 4)
                            {
                                venta = venta * 1.08;
                                printf("dni: %i\n", dni);
                                printf("medio de pago: Tarjeta de credito \n");
                                printf("Tarjeta: Cabal \n");
                                printf("cuotas: 12\n");
                                printf("total venta: %f\n", venta);
                            }
                        else printf("ingreso una cantidad de cuotas incorrectas, vuelva a ingresar");
                        
                    break;
                    case 2:
                        printf("ingrese la cantidad de cuotas:\n");
                        printf("1- 1 cuota\n");
                        printf("2- 3 cuotas\n");
                        printf("3- 6 cuotas\n");
                        printf("4- 12 cuotas\n");
                        scanf("%i", &cantCuotas);
                        if (cantCuotas == 1)
                        {
                            venta = venta;
                            printf("dni: %i\n", dni);
                            printf("medio de pago: Tarjeta de credito \n");
                            printf("Tarjeta: American Express \n");
                            printf("cuotas: 1\n");
                            printf("total venta: %f\n", venta);
                        }
                        else if (cantCuotas == 2)
                        {
                            venta = venta * 1.04;
                            printf("dni: %i\n", dni);
                            printf("medio de pago: Tarjeta de credito \n");
                            printf("Tarjeta: American Express \n");
                            printf("cuotas: 3\n");
                            printf("total venta: %f\n", venta);
                        }
                        
                        else if (cantCuotas == 3)
                        {
                            venta = venta * 1.08;
                            printf("dni: %i\n", dni);
                            printf("medio de pago: Tarjeta de credito \n");
                            printf("Tarjeta: American Express \n");
                            printf("cuotas: 6 o 12\n");
                            printf("total venta: %f\n", venta);
                        }
                        else if (cantCuotas == 4)
                            {
                                venta = venta * 1.08;
                                printf("dni: %i\n", dni);
                                printf("medio de pago: Tarjeta de credito \n");
                                printf("Tarjeta: Cabal \n");
                                printf("cuotas: 12\n");
                                printf("total venta: %f\n", venta);
                            }
                        else printf("ingreso una cantidad de cuotas incorrectas, vuelva a ingresar");
                    break;
                    case 3:
                        printf("ingrese la cantidad de cuotas:\n");
                        printf("1- 1 cuota\n");
                        printf("2- 3 cuotas\n");
                        printf("3- 6 cuotas\n");
                        printf("4- 12 cuotas\n");
                        scanf("%i", &cantCuotas);
                        if (cantCuotas == 1)
                        {
                            venta = venta;
                            printf("dni: %i\n", dni);
                            printf("medio de pago: Tarjeta de credito \n");
                            printf("Tarjeta: Mercado Pago \n");
                            printf("cuotas: 1\n");
                            printf("total venta: %f\n", venta);
                        }
                        else if (cantCuotas == 2)
                        {
                            venta = venta * 1.04;
                            printf("dni: %i\n", dni);
                            printf("medio de pago: Tarjeta de credito \n");
                            printf("Tarjeta: Mercado Pago \n");
                            printf("cuotas: 3\n");
                            printf("total venta: %f\n", venta);
                        }
                        
                        else if (cantCuotas == 3)
                        {
                            venta = venta * 1.08;
                            printf("dni: %i\n", dni);
                            printf("medio de pago: Tarjeta de credito \n");
                            printf("Tarjeta: Mercado Pago \n");
                            printf("cuotas: 6 o 12\n");
                            printf("total venta: %f\n", venta);
                        }
                        else if (cantCuotas == 4)
                            {
                                venta = venta * 1.08;
                                printf("dni: %i\n", dni);
                                printf("medio de pago: Tarjeta de credito \n");
                                printf("Tarjeta: Cabal \n");
                                printf("cuotas: 12\n");
                                printf("total venta: %f\n", venta);
                            }
                        else printf("ingreso una cantidad de cuotas incorrectas, vuelva a ingresar");
                    break;
                    case 4:
                        printf("ingrese la cantidad de cuotas:\n");
                        printf("1- 1 cuota\n");
                        printf("2- 3 cuotas\n");
                        printf("3- 6 cuotas\n");
                        printf("4- 12 cuotas\n");
                        scanf("%i", &cantCuotas);
                            if (cantCuotas == 1)
                            {
                                venta = venta;
                                printf("dni: %i\n", dni);
                                printf("medio de pago: Tarjeta de credito \n");
                                printf("Tarjeta: Cabal \n");
                                printf("cuotas: 1\n");
                                printf("total venta: %f\n", venta);
                            }
                                else if (cantCuotas == 2)
                            {
                                venta = venta * 1.04;
                                printf("dni: %i\n", dni);
                                printf("medio de pago: Tarjeta de credito \n");
                                printf("Tarjeta: Cabal \n");
                                printf("cuotas: 3\n");
                                printf("total venta: %f\n", venta);
                            }
                        
                            else if (cantCuotas == 3)
                            {
                                venta = venta * 1.08;
                                printf("dni: %i\n", dni);
                                printf("medio de pago: Tarjeta de credito \n");
                                printf("Tarjeta: Cabal \n");
                                printf("cuotas: 6\n");
                                printf("total venta: %f\n", venta);
                            }
                            else if (cantCuotas == 4)
                            {
                                venta = venta * 1.08;
                                printf("dni: %i\n", dni);
                                printf("medio de pago: Tarjeta de credito \n");
                                printf("Tarjeta: Cabal \n");
                                printf("cuotas: 12\n");
                                printf("total venta: %f\n", venta);
                            }
                            else printf("ingreso una cantidad de cuotas incorrectas, vuelva a ingresar");
                    break;
                                   
                    default:
                    printf("numero para tarjeta incorrecta, vuelva a ingresar");
                    break;
                    }            
            default:
            break;
            }

        }
        
 }
