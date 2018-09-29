/*
  fuente:
  autor: joni
  fecha: 20/10/2014
  descripcion:
              
  pseudocodigo
  
*/

#include<stdio.h>

int main () {
    int edad;
    
    printf("dame tu edad: ");
    scanf("%i", &edad);
    
    if(edad>=18) {
      printf("eres mayor de edad\n");
    }
    else
    {
        printf("eres menor de edad\n");
    }
    
    system("PAUSE");
}
