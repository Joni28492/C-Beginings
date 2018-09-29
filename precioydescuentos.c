/*
  fuente:descuento
  autor: joni
  fecha:15/10/2014
  descripcion: programa que te da el imorte total el descuento a pagar segun 
  precio, unidades, y el porcentaje de descuento
  
  pseudocodigo: 
                1)introduceir precio unitario
                2)introducir cantidad
                3)inbtroducir porcentaje de descuento 
                4)calcular el importe total: 
                           importe total= pagounitario*numero unidades
                           
                5)calcular el descuento:
                              descuento=(pago unitario*numero de unidades)*porcentaje/100
                6)calcular el precio final 
                            a pagar=(precio unitario*numero de unidades)-
                            (precio unitario*numero de unidades)*porcentaje/100
                7)mostrar resultado 
                
  */
  
    #include<stdio.h>
    int main(){
        //variables
        float preciounitario, numerodeunidades, porcentaje;
        float importetotal, descuento, pagofinal;
        
        printf("introduce el precio del producto: ");
        //lee el precio unitario
        scanf("%f", &preciounitario);
        printf("introduce el numero de unidades: ");
        //lee el numero de unidades
        scanf("%f", &numerodeunidades);
        printf("introduce el porcentaje de descuento");
        //lee el porcentaje
        scanf("%f", &porcentaje);
        
                    //calcula el importe total
                    importetotal=preciounitario*numerodeunidades;
                    //calcula descuento 
                    descuento=(preciounitario*numerodeunidades)*porcentaje/100;
                    //calcula el pago final 
                    pagofinal=(preciounitario*numerodeunidades)-((preciounitario*numerodeunidades))*porcentaje/100;


     printf("el importe total es: %.2f\n", importetotal);
     //mostrar el descuento
     printf("el descuento es: %.2f\n", descuento);
     //mostrar el precio final 
     printf("el pago final es: %.2f\n", pagofinal);
     system("pause");
     
     }
