/*
  fuente:
  autor: Joni
  fecha:22/10/2014
  descripcion:dias horas y minutos a segundos
              
              pseudocodigo:
                           
                           
  */
  
  #include<stdio.h>
  
  int main() {
      float dias,segundos;
      int horas, minutos;
      
      printf("introduce dias:");
      scanf("%f", &dias);
      
      printf("introduce horas: ");
      scanf("%i", &horas);
      
      printf("introduce minutos: ");
      scanf("%i", &minutos);
      
      segundos=(dias*86400)+(horas*3600)+(minutos*60);
      
      printf("los segundos totales son: %f\n", segundos);
      
      system("PAUSE");
      
      }
