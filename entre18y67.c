/*  fuente:
    autor: joni
    fecha: 20/10/2014
    descripcion:leer una edad, si esta entre 18 y 67, decir que esta en activo, 
    y sino inactivo
                
    pseudocodigo:
                 1)introduce edad
                 2)si edad<=18 && >=67
                 3)si se cumple esta activo y sino inactivo
                 
                 
    */
    
    #include<stdio.h>
    
    int main() {
        int edad;
        
        printf("introduce edad: ");
        scanf("%i", &edad);
        
        if(edad>=18 && edad<=67) {
            printf(" la edad %i esta activo\n", edad);
        }
        else
        {
            printf("la edad %i esta inactivo\n", edad);
        }
            
        system("PAUSE");
        
        }
