/*
  fuente: tabla multiplicar
  autor: joni
  fecha: 29/10/2014
  descripcion: introduce un numero para practicar la tabla de multiplicar hasta que te equivoques
  y te dice el numero de aciertos
  
            pseudocodigo:
                         
                         
                         
                         
                         
*/


#include<stdio.h>

int main(){
    int tabla, aciertos, i, res;
    
    aciertos=0;

//leemos la tabla
printf("introduce la tabla (1..10): ");
scanf("%i", &tabla);

            i=1;
            while(i<=10){
                         printf("%i * %i= ",tabla,i);
                         scanf("%i", &res);
                         //respuesta usuario
                         if(res==tabla*i){
                                          aciertos++;
                                          }
                         else{
                              break;
                              }
                         i++;
                         
                         } 
                         printf("aciertos: %i\n", aciertos);
                         system("PAUSE");
                         } 
            
