/*
funcion hipotenusa con float





*/



#include<stdio.h>

float hipotenusa(float c1, float c2){

float n;
 
      return sqrt(pow(c1,2)+pow(c2,2));
      
      

}
int main(){
    float cat1, cat2, hip;
    
    printf("introduce el primer cateto: ");
    scanf("%f", &cat1);
    printf("introduce el segundo cateto: ");
    scanf("%f", &cat2);
    




hip=hipotenusa(cat1, cat2);


    
    
    
    printf("la hipotenusa es: %.2f\n", hip);
    
 
 
 

 
 
system("PAUSE");
}
