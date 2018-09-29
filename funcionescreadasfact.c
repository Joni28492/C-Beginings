/*
  fuente: crear funcion ffactorial
  autor: Joni
  fecha: 12/11/2014
  descripcion: ilustra el uso y definicon de funciones de usuario.
  para ellos se implementa la funcion factorial
  
  
             pseudocodigo:
                          
                          
  */
  
  
  
  
  #include<stdio.h>
  
  int par(int num){
              if(num%2==0)
             return 1;
             
              else 
              return 0;       
      
      }
  
  
  
  int factorial(int n){
      int result=1, i;
      
      for(i=n; i>0; i--){
               result*=i;
               }
      return result;
                       }
  int main(){
      
      int num, res;
      
      printf("introduce el numero: ");
      scanf("%i", &num);
  
  
  if(par(num)==1)
                 printf("es par\n");
  else
                 printf("es impar\n");
  
  
  
  
  
      
      //calcular el facetorial
      res=factorial(num);    
      printf("su factorial es: %i\n", res);
      
      
      
      
      
      system("PAUSE");
}
