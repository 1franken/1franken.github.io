 #include <stdio.h>
 #include <stdlib.h>

 void main()
 {
    float nota;
    printf("ingrese la nota del alumno: ");
    scanf("%f", &nota);
    if (nota > 0 && nota <= 10 )
    {
        if (nota > 0 && nota <= 4)
        {
            printf("reprobado");
        }
        
        else if (nota > 4 && nota <= 6)
        {
            printf("regular");
        }
        
        else if (nota > 6 && nota <= 10)
        {
            printf("aprobado");
        }
        
    }
    else printf("nota invalida");
    
 }