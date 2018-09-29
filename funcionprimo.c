/*
 llamar a una funcion si es primo
 
 
 */
 
 
 
 #include<stdio.h>
 
 int primo(int num){
int i;
   for(i=num-1; i>1; i--){              
                  if(num%i==0)
                      return 0;
                      
                  else
                    return 1;
                  }
 
 
}
 
 
 
 
 int main(){
     int n;
     
     
     printf("introduce un numero: ");
     scanf("%i", &n);
     
     
     
 if(primo(n)==1)
               printf("el numero es primo\n");

 else
               printf("el numero no es primo\n");
     
     
       
    system("PAUSE");
     }
 
