/*
  fuente:
  autor: joni
  fecha: 20/10/2014
  descripcion: leer numero y decir si es par o impar
  
  pseudocodigo:
               1)introduce numero
               2)si el numero es divisible entre 2 decir que es par
               3)si no lo es decir que es impar
*/

#include<stdio.h>

int main() {
    int numero;
    
    printf("introduce un numero: ");
    scanf("%i", &numero);
    
    if(numero%2==0) {
                    printf("el numero %i par\n", numero);
                    }
    else
    {
        printf("el numero %i impar\n", numero);
}

system("PAUSE");
}
