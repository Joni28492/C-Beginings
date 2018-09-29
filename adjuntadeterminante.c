/*
  fuente: adjunta de un determinante de 3x3
  autor: joni
  fecha: 13/10/2014
  descripcion: este prograna te da la adjunta deuna matriz 3x3
  
               pseudocodigo:
                            1)introduce posicion a11
                            2)introduce posicion a12
                            3)introduce posicion a13
                            4)introduce posicion a21
                            5)introduce posicion a22
                            6)introduce posicion a23
                            7)introduce posicion a31
                            8)introduce posicion a32
                            9)introduce posicion a33
                            10)calcula posicion b11
                                       b11=a11*(a22*a33-a23*a32)
                            11)calcula posicion b12
                                       b12=-a12*(a21*a33-a23*a31)
                            12)calcula posicion b13
                                       b13=a13*(a21*a32-a22*a31)
                            13)calcula posicion b21
                                       b21=-a21*(a12*a31-a13*a32)
                            14)calcula posicion b22
                                       b22=a22*(a11*a33-a13*a31)
                            15)calcula posicion b23
                                       b23=-a23*(a11*a31-a12*a31)
                            16)calcula posicion b31
                                       b31=a31*(a12*a23-a13*a22)
                            17)calcula posicion b32
                                       b32=-a32*(a11*a23-a13*a21)
                            18)calcula posicion b33
                                       b33=a33*(a11*a22-a12*a21)
                                       
                            19)mostrar el resultado 
                            
               */
               
               #include<stdio.h>
               
               int main(){
                   float a11, a12, a13, a21, a22, a23, a31, a32, a33, 
                   b11, b12, b13, b21, b22, b23, b31, b32, b33;
                   
                   printf("introduce la poscion de la fila 1 columna 1: ");
                   //lee a11
                   scanf("%f", &a11);
                   printf("introduce la posicion de la fila 1 columna 2: ");
                   //lee posicion a12
                   scanf("%f", &a12);
                   printf("introduce la posicion de la fila 1 columna 3: ");
                   //lee posicion a13
                   scanf("%f", &a13);
                   printf("introduce la posicion de la fila 2 columna 1: ");
                   //lee posicion a21
                   scanf("%f", &a21);
                   printf("introduce la posicion de la fila 2 columna 2: ");
                   //lee la posicion a22
                   scanf("%f", &a22);
                   printf("introduce la posicion de la fila 2 columna 3: ");
                   //lee la posicion a23
                   scanf("%f", &a23);
                   printf("introduce la posicion de la fila 3 columna 1: ");
                   //lee la posicon a31
                   scanf("%f", &a31);
                   printf("introduce la posicion de la fila 3 columna 2: ");
                   //lee la posicion a32
                   scanf("%f", &a32);
                   printf("introduce la posicion de la fila 3 columna 3: ");
                   //lee la posicion a33
                   scanf("%f", &a33);
                   
                   //calculo de las posiciones
                   b11=a11*(a22*a33-a23*a32);
                   b12=-a12*(a21*a33-a23*a31);
                   b13=a13*(a21*a32-a22*a31);
                   b21=-a21*(a12*a31-a13*a32);
                   b22=a22*(a11*a33-a13*a31);
                   b23=-a23*(a11*a31-a12*a31);
                   b31=a31*(a12*a23-a13*a22);
                   b32=-a32*(a11*a23-a13*a21);
                   b33=a33*(a11*a22-a12*a21);
                   
                   //mostrar el resultado
                             //posicion b11
                   printf("la posicion en la fila 1 columna 1 es: %f\n", b11);
                              //posicion b12
                   printf("la posicion en la fila 1 columna 2 es: %f\n", b12);
                              //posicion b13
                   printf("la posicion en la fila 1 columna 3 es: %f\n", b13);
                              //posicion b21
                   printf("la posicion en la fila 2 columna 1 es: %f\n", b21);
                              //posicion b22
                   printf("la posicion en la fila 2 columna 2 es: %f\n", b22);
                              //posicion b23
                   printf("la posicion en la fila 2 columna 3 es: %f\n", b23);
                              //posicion b31
                   printf("la posicion en la fila 3 columna 1 es: %f\n", b31);
                              //posicion b32
                   printf("la posicion en la fila 3 columna 2 es: %f\n", b32);
                              //posicion b33
                   printf("la posicion en la fila 3 columna 3 es: %f\n", b33);
                   
                   system("pause");
                   
}
