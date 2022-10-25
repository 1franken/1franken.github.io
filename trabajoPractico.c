#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// Maria Paz Blanco, Ramiro Di Carlo, Garcia Franco.
void main(int argc, char const *argv[])
{
    int menu, opcion, controlProductos = 0, i = 1, indiceStock = 0, buscadorCodigo = 0, listaProductos = 0;;
    long codigoDeBarras[100] = {0}, cantidadStock[100] = {0};
    char nombreProducto[100][50] = {}, descripcion[100][100], respuesta;

    do 
    {
        printf("Ingrese la opcion deseada: \n");
        printf("1. Cargar productos. \n");
        printf("2. Modificar stock. \n");
        printf("3. Mostrar productos sin stock. \n");
        printf("4. Listar productos. \n");
        printf("5. Salir. \n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            do
            {
                i = 1;
                printf("cargue el producto deseado: ");
                scanf("%s", &nombreProducto[controlProductos]);
                fflush(stdin);

                printf("ingrese una descripcion del producto: \n");
                scanf("%s", &descripcion[controlProductos]);
                fflush(stdin);

                printf("ingrese su codigo de barras: \n");
                scanf("%i", &codigoDeBarras[controlProductos]);

                printf("ingrese su cantidad de stock: \n");
                scanf("%i", &cantidadStock[controlProductos]);

                printf("quiere ingresar otro producto? presione 'y' para seguir, sino presione 'n' para volver al menu.");
                scanf("%s", &respuesta);

                while (respuesta != 'y' && respuesta != 'Y' && respuesta != 'n' && respuesta != 'N')
                {
                    printf("ingrese una opcion correcta. presione 'y' para seguir, sino presione 'n' para volver al menu. \n");
                    scanf("%s", &respuesta);
                }
                fflush(stdin);
                if (respuesta == 'y' || respuesta == 'Y')
                {
                    controlProductos++;
                }

                else
                {
                    i = 0;
                }
            } while (controlProductos < 100 && i == 1);
            break;

        case 2:
            indiceStock = 0;
            printf("ingrese el codigo de barras del producto para modificar su stock disponible: \n");
            scanf("%d", &buscadorCodigo);
            do
            {
                i = 1;
                if (buscadorCodigo == codigoDeBarras[indiceStock])
                {
                    i = 0;
                }
                else
                {
                    indiceStock++;
                }
            } while (indiceStock < controlProductos && i == 1);
            if (i == 1 && indiceStock == controlProductos)
            {
                printf("Electrodomestico inexistente.\n");
            }
            else
            {
                printf("stock: %d\n", cantidadStock[indiceStock]);
                printf("ingrese la nueva cantidad de stock: \n");
                scanf("%d", cantidadStock[indiceStock]);
            }
            break;

        case 3:
            for (int sinStock = 0; sinStock < controlProductos; sinStock++)
            {
                if (cantidadStock[sinStock] == 0 && nombreProducto[sinStock] != '\0')
                {
                    printf("%s se encuentra sin stock.\n", &nombreProducto[sinStock]);
                }
            }
            system("pause");
            break;

        case 4:
            do
            {
                i = 0;
                if (nombreProducto[listaProductos] != '\0')
                {
                    printf("%s\n", &nombreProducto[listaProductos]);
                    listaProductos++;
                }
                else
                {
                    i = 0;
                }
            } 
                while (listaProductos < controlProductos);
            
            // while (listaProductos < 100 && i == 1);

            break;
        }
    } while (opcion != 5);
    system("pause");
}