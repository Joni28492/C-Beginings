/*
  fuente:
  autor:Joni
  fecha: 05/11/2014
  descripcion: averiguar el numero que genera automaticamente el ordenador 

              
              pseudocodigo:
                           
*/


#include<stdio.h>
#include<stdlib.h>

int main(){
   int n, i;
   
   //inicializar el generador de numeros aleatorils
srand(time(NULL));
//generar un numero
n = (rand()%100)+1;
//num entre uno y 100
//mostrar por curiosidad
//printf("%i\n", n);
   
   do{
         printf("prueba un numero: ");
         scanf("%i", &i);
         
         if(i<n)
                 printf("el numero introducido es menor\n");
                     
         else if(i>n)
                 printf("el numero introducido es mayor\n");
                 
         else
              printf("has acertado\n");
              
                }while(n!=i);
   
   
   
system("PAUSE");
}


