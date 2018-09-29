/*

fuente: ecuacion segundo grado
autor: joni
fecha:10/11/2014
descripcion:
            
            
            pseudocodigo:
                         
                         
                         
*/



#include<stdio.h>
#include<math.h>

int main(){
    
    float a, b, c, x, y;
    
    printf("introduce el valor de a: ");
    scanf("%f", &a);
    printf("introduice el valor de b: ");
    scanf("%f", &b);
    printf("introduce el valor de c: ");
    scanf("%f", &c);
    
    //a*(pow(x,2))+b*x+c=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
    x=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
    y=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
    
    
   if(0>(pow(b,2)-4*a*c)){
       printf(" el resultado es negativo\n");
   }
          
   else{   
       printf("x es: %f\n", x);
       printf("y es: %f\n", y);
}
    
    system("PAUSE");
    
}
    
    
    
