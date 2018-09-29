/*

  fuente
  autor: joni
  fecha:29/10/2014
  descrpcion:
             
             pseudocodigo:
                          
                          
                          
                          
                          
                          
                          
*/


#include<stdio.h>
int main(){
    int base, exp, res, i;
    i=1;
    
    printf("introduce la base: ");
    scanf("%i", &base);
    
    printf("introduce el exponente: ");
    scanf("%i", &exp);
    
    res=base;
    i=1;
    
    while(i<exp){
                  res=res*base;
                  i++;
                  }
                  
    printf("resultado: %i\n", res);
        
    
      system("PAUSE");
      }
