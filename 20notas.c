/*

fuente
autor: Joni
fecha: 27/10/2014
descripcipon

            pseudocodigo:
                         
                         
                         
*/

#include<stdio.h>
#define NUM_NOTAS 20

int main () 
{
    float nota;
    int ap=0;
    int susp=0;
    
    int n=1;
    
    //leo 20 notas
    
   while(n<=NUM_NOTAS){
                       printf("dame la nota %i: ", n);
                       scanf("%f", &nota);
                       
                       if(nota>=5)
                          ap++;
                       else
                          susp++;
                          
                          n++;   
                       
                       
                       }
   
   printf("porcentaje de aprobados: %.2f%%\n",
                         (float)ap*100/NUM_NOTAS);
                      
   printf("porcentaje de suspensos: %.2f%%\n",
                         (float)susp*100/NUM_NOTAS);                               





system("PAUSE");
}                   
