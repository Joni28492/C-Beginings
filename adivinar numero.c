/*
  fuente:
  autor:Joni
  fecha: 05/11/2014
  descripcion: averiguar el numero, no lo muestra
  el numero es< tanto
  introduce el numero:
            .....
              
              pseudocodigo:
                           
*/


#include<stdio.h>

int main(){
   int n, i;
   
   printf("introduce un numero: ");
   scanf("%i", &n);
   
   system("CLS");
   
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


