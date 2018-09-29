/*

fuente: funciones 2potencia
autor: joni
fecha: 10/11/2014
descripcion: 
             
             pseudocodigo:
                          
                          
                          
                          
*/

#include<stdio.h>
#include<math.h>

int main(){
    float base, expo, res;

    
    printf("introduce la base: ");
    scanf("%f", &base);
        printf("introduce la exponente: ");
    scanf("%f", &expo);
    
    res=pow(base, expo);
    
    printf("la potencia  es: %.2f\n",res);
    
    system("PAUSE");
    
}
