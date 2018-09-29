/*
 fuente:
 autor: Joni
 fecha: 03/11/2014
 descripcion:
 
            pseudocodigo:
                         
 */
 
 
 #include<stdio.h>
 
 int main(){
 int n;
 int fact;
 int i;
     
     
     printf("introduce un numero: ");
     scanf("%i", &n);
     
     fact=1;
     
     for(i=n; i>=1; i--){
              fact=fact*i;
              
              }
              
              printf("el factorial de %i es: %i\n", n, fact);
     
     
     
 system("PAUSE");
}
