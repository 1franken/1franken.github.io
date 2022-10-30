#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
// Maria Paz Blanco, Ramiro Di Carlo, Garcia Franco.
void main(int argc, char const *argv[])
{
    int menu, x = 0, opcion, controlProductos = 0, i = 1, indiceStock = 0, buscadorCodigo = 0, listaProductos = 0;
    ;
    long codigoDeBarras[100] = {0}, cantidadStock[100] = {0};
    char nombreProducto[100][100] = {}, descripcion[100][100], respuesta;

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
                fflush(stdin);
                printf("Cargue el producto deseado: ");
                scanf("%[^\n]", &nombreProducto[controlProductos]);

                fflush(stdin);
                printf("Ingrese una descripcion del producto: \n");
                scanf("%[^\n]", &descripcion[controlProductos]);

                printf("Ingrese su codigo de barras: \n");
                scanf("%i", &codigoDeBarras[controlProductos]);

                printf("Ingrese su cantidad de stock: \n");
                scanf("%i", &cantidadStock[controlProductos]);

                printf("Quiere ingresar otro producto? presione 'y' para seguir, sino presione 'n' para volver al menu.");
                scanf("%c", &respuesta);

                while (respuesta != 'y' && respuesta != 'Y' && respuesta != 'n' && respuesta != 'N')
                {
                    printf("Ingrese una opcion correcta. Presione 'y' para seguir, sino presione 'n' para volver al menu. \n");
                    scanf("%c", &respuesta);
                }

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
            printf("Ingrese el codigo de barras del producto para modificar su stock disponible: \n");
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
                printf("Stock: %d\n", cantidadStock[indiceStock]);
                printf("Ingrese la nueva cantidad de stock: \n");
                scanf("%d", &cantidadStock[indiceStock]);
            }
            break;

        case 3:
            
            for (int x = 0; x < controlProductos; x++)
            {
                if (cantidadStock[x] == 0)
                {
                    printf("%s se encuentra sin stock.\n", &nombreProducto[x]);
                }
            }
            system("pause");
            break;

        case 4:
            for (x = 0; x <= controlProductos; x++)
            {
                printf("%s\t", nombreProducto[x]);

                printf("%s\t", descripcion[x]);

                printf("%i\t", codigoDeBarras[x]);

                printf("%i\t", cantidadStock[x]);

                printf("\n");
            }
            break;

            case 5: 
                printf("Gracias, vuelva pronto!\n");
        }
    } while (opcion != 5);
    system("pause");
}