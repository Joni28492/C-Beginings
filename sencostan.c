/*
fuente:sen cos tang
autor: joni
fecha:10/11/2014
descripcion: aungulos cada 5º pasar a sen cos y tan
angulo*pi/180
           pseudocodigo:
                        
                        
                        
                        
*/


#include<stdio.h>
#include<math.h>
#define PI 3.1415 


int main(){
  int grados;
  float rad;
  
  printf("grados          seno        coseno          tangente");
  
  
grados=0;

while(grados<=360){
                   rad=(grados*PI)/180;
                   
printf("%i              %.4f          %.4f             %.4f\n", 
grados, sin(rad), cos(rad),tan(rad));

grados+=5;         }
                         
    system("PAUSE");
}
