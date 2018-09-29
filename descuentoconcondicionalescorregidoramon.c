/*
  fuente: venta c.
  autor: joni
  fecha: 22/10/2014
  descripcion:lee precio, unidades y si es mayor de 1000 descuenta el 20%
  y sino solo el 10%
              
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
#define DTO1 0.2
#define DTO2 0.1

int main() {
    //vble
    int unidades;
    float precioUnitario, importe, descuento;
    float importeFinal;
     
   //captura de datos 
    printf("introduce el precio unitario: ");
    scanf("%f", &precioUnitario);
    
    printf("introduce unidades: ");
    scanf("%i", &unidades);
    
    importe= precioUnitario*unidades;
    
    //determinamos el dto
    if(importe>1000) {
                     descuento=importe*DTO1;
                     }
    else
    {
        descuento=importe*DTO2;
        }
        
        //calcular el importe final
    importeFinal= importe - descuento;
    
    //mostrar resultados
    
    printf("importe bruto: %.2f\n", importe);
    printf("descuento: %.2f\n", descuento);
    printf("importe neto: %.2f\n", importeFinal);
    
    system("PAUSE");
    
}
