/* 
   fuente:
   autor: joni
   fecha: 29/10/2014
   descripcion:introduce un numero y te dice si es primo o no
               
               pseudocodigo
               
               
*/


#include<stdio.h>
int main(){
    int num, i;
    
    printf("introduce un numero: ");
    scanf("%i", &num);
    
    i=num-1;
    
   while(i>1){
                if(num%i==0){
                             printf("el numero NO es primo\n");
                             break;
                             } 
                i--;
                       
                  }
  
                             i--;           
                  } 
                  else{
                             printf("el numero es primo\n");
                             }         
   
        
        system("PAUSE");
}
