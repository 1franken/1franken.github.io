#include <stdlib.h>
#include <stdio.h>
// Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
// Cada ítem del vector representa la inflación de un mes de tal manera que el primer
// ítem del vector que es 0.8 representa la inflación de Enero, y el último ítem del vector
// que es 0.9 representa la inflación de diciembre. Se pide:
// - Informar la inflación anual
// - Informar la inflación más baja, junto con el nro. de mes. Por ejemplo: Mes 2 = 0.1
// - Informar la inflación más alta, junto con el nro. de mes. Por ejemplo: Mes 12 = 0.9

void main()
{
    float vector[12] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9},mayor, menor = 1, inflacionTotal;
    for (int i = 0; i < 12; i++)
    {
        inflacionTotal += vector[i];
        if (mayor < vector[i])
        {
            mayor = vector[i];
        }
        if (menor > vector[i])
        {
            menor = vector[i];
        }
    }
    
    printf("la inflacion anual es %c%.2f, la inflacion mas alta es %c%.2f y la mas baja es %c%.2f\n",'%', inflacionTotal,'%', mayor,'%', menor);
    system("pause");
}