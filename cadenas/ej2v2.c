 #include <stdio.h>
 #include <stdlib.h> 
 #include <string.h>
void main()
{
    int ciclo_A,ciclo_B; //Ciclos que ayudaran a ordenar el arreglo
        char nombre[5][10]; //Arreglo que guardara los nombres
        char aux[20]; //Vector auxiliar que guardara nombres temporalmente
        
        //Ciclo en el que solicitamos los nombres a ingresar
        for(ciclo_A=0;ciclo_A<5;ciclo_A++){
            printf("Ingresa un nombre: ");
            scanf("%s",&nombre[ciclo_A]);
        } 
        
        
        for(ciclo_A=1;ciclo_A<6;ciclo_A++) //Ciclo que se repetirá 5 veces para ordenar cada nombre
            for(ciclo_B=0;ciclo_B<5-ciclo_A;ciclo_B++) //Ciclo que ordenara un nombre, se va restando pues en cada vuelta queda ordenado el ultimo nombre
                if(strcmp(nombre[ciclo_B],nombre[ciclo_B+1])>0) //Si el nombre actual es mayor al siguiente nombre...
                {
                    strcpy(aux,nombre[ciclo_B]); //Guardamos el nombre actual en Aux
                    strcpy(nombre[ciclo_B],nombre[ciclo_B+1]); //Pasamos el nombre siguiente al actual
                    strcpy(nombre[ciclo_B+1],aux); //Pasamos el Aux al siguiente
                }
                
        printf("\n \n---- NOMBRES ORDENADOS ---- \n");
        //Mostramos los nombres ordenados
        for(ciclo_A=0;ciclo_A<5;ciclo_A++){
            printf("%s \n",nombre[ciclo_A]);
        } 
        
        return 0;		
} 