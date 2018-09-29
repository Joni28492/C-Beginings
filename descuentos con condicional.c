/*
  fuente:
  autor: joni
  fecha: 20/10/2014
  descripcion:
              
              pseudocodigo:
                           1)introduce precio
                           2) lee precio
                           3) introduce unidades
                           4)lee unidades
                           5)si precio >=1000 descuento del 20%
                           6)si no lo es descuento de 10%
                           7)mostrar importe (precio*unidades)
                           8)mostrar descuento importe*%/100
                           9)mostrar neto(importe menos descuento)
                           
*/

#include<stdio.h>

  int main() {
      float precio, unidades, descuento, importe, descuentofinal, preciofinal;
      
      printf("introduce el precio: ");
      scanf("%f", &precio);
      //introduce uni
      printf("introduce unidades: ");
      scanf("%f", &unidades);
      
      //calculos
      importe=precio*unidades;
      preciofinal=importe-descuentofinal;
      descuentofinal=preciofinal*descuento;
      
      if(importe>=1000) {
      
      descuento=importe*(20/100);
      
      scanf("%f\n", descuento);
       }
      
      else {
           descuento=importe*(10/100);
           scanf("%f\n", descuento);
           }
           
      printf("el descuento es %f\n", descuentofinal);
           
      printf("el importe es: %f\n", importe);
      //mostrar descuento
      printf("el descuento es: %f\n", descuento);
      //precio final
      printf("el precio final es: %f\n", preciofinal);
      
      system("PAUSE");
      
      }
      
