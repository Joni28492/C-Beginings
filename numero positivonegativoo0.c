/*
  fuente: 
  autor: Joni
  fecha: 22/10/2014
  descripcion: leer cantidad entera y decir si es negativo positivo o 0 
              
              pseudocodigo:
                           
                           
                           
  */
  
  #include<stdio.h>
  int main () {
      float numero;
      
      printf("introduce un numero: ");
      scanf("%f", &numero);
      
  if(numero<0) {
               printf("el numero es negativo\n");
               }
  else if(numero>0)
       { printf("el numero es positivo\n");
       }
       
  else{
       printf("el numero es cero\n");
       }
             
 
      system("PAUSE");
}
        
