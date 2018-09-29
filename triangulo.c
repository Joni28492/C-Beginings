/* 
   fuente: lados triangulo
   autor: joni
   fecha: 22/10/2014
   descripcion: decir si un triangulo es equilatero isosceles o escaleno
   
                pseudicodigo
                
*/

#include<stdio.h>
int main(){
int lado1, lado2, lado3;

 printf("introduce lado1: ");
 scanf("%i", &lado1);
 printf("introduce lado2: ");
 scanf("%i", &lado2);
 printf("introduce lado3: ");
 scanf("%i", &lado3);
 
 if(lado1==lado2 && lado2==lado3){
                         printf("el triangulo es EQUILATERO\n");
                         }
                         
 else if(lado1!=lado2 && lado2!=lado3 && lado3!=lado1){
                               printf("el triangulo es ESCALENO\n");
                               }
                               
 else{ 
       printf("el triangulo es ISOSCELES\n");
       }
       
       system("PAUSE");
       }
