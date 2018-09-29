/*
  fuente:
  autor: Joni
  fecha: 22/10/2014
  descripcion:
              
              pseudocodigo
              
*/

#include<stdio.h>
  int main() {
  int segundos, minutos, horas, dias, resto;
  
  printf("introduce segundos: ");
  scanf("%i", &segundos);
  
  dias= segundos/86400;
  resto=segundos%86400;
  horas=resto/3600;
  resto=segundos%3600;
  minutos=resto/60;

printf("%i DIAS\n", dias);
printf("%i HORAS\n", horas);
printf("%i MINUTOS\n", minutos);
  
  system("PAUSE");
}
