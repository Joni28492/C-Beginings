/*
  fuente: 
  autor: joni
  fecha: 22/1/2014
  descripcion:
              
              pseudocodigo:
                           
                           
                           */ 
#include<stdio.h>


int main() {
    int edad; //edad<12 infancia; 
              //edad entr 12 y 17 PAVO/A
              //si edad >=18 adulto
    printf("introduce edad: ");
    scanf("%i", &edad);
 
    if(edad<12) {
                printf("INFANCIA\n");
    }   
    else if(edad<18) {
         printf("PAVO/A\n");
         }
         
         else{
              printf("ADULTO\n");
         }
 
 
    system("PAUSE");
}
    
