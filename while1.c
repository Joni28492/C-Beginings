/*

  fuente:
  autor: Joni
  fecha: 27/10/2014
  descripcion:
              
              pseudocodigo:
                           1)introduce un min
                           2)introduce un max
                           
                           
*/


#include<stdio.h>

int main (){
    int min, max;
    
    printf("minimo: ");
    scanf("%i", &min);
    printf("maximo: ");
    scanf("%i", &max);
    
    if(min<max){
    
    //recorrer desde min a max 
    while(min<=max){
                    if(min%2==0){ 
                                  printf("%i\n", min);
                                  }
    min++;
                   }
               }
else{
     printf("entrada no valida\n");
     }





    system("PAUSE");
    
}
    
