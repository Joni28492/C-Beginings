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
               
               int main() {
                   float a, b, c, d, e, f, g, h, i, 
                   j, k, l, m, n, o, p, q, r;
                   
                   printf("introduce la poscion de la fila 1 columna 1: ");
                   //lee a11
                   scanf("%f", &a);
                   printf("introduce la posicion de la fila 1 columna 2: ");
                   //lee posicion a12
                   scanf("%f", &b);
                   printf("introduce la posicion de la fila 1 columna 3: ");
                   //lee posicion a13
                   scanf("%f", &c);
                   printf("introduce la posicion de la fila 2 columna 1: ");
                   //lee posicion a21
                   scanf("%f", &d);
                   prinf("introduce la posicion de la fila 2 columna 2: ");
                   //lee la posicion a22
                   scanf("%f", &e);
                   printf("introduce la posicion de la fila 2 columna 3: ");
                   //lee la posicion a23
                   scanf("%f", &f);
                   printf("introduce la posicion de la fila 3 columna 1: ");
                   //lee la posicon a31
                   scanf("%f", &g);
                   printf("introduce la posicion de la fila 3 columna 2: ");
                   //lee la posicion a32
                   scanf("%f", &h);
                   printf("introduce la posicion de la fila 3 columna 3: ");
                   //lee la posicion a33
                   scanf("%f", &i);
                   
                   //calculo de las posiciones
                   j=a*(e*i-f*g);
                   k=-b*(d*i-e*g);
                   l=g*(d*h-e*g);
                   m=-d*(b*g-c*h);
                   n=e*(a*i-c*g);
                   o=-f*(a*h-b*g);
                   p=g*(b*f-c*e);
                   q=-h*(a*f-c*d);
                   r=i*(a*e-b*d);
                   
                   //mostrar el resultado
                             //posicion b11
                   printf("la posicion en la fila 1 columna 1 es: %f\n", j);
                              //posicion b12
                   printf("la posicion en la fila 1 columna 2 es: %f\n", k);
                              //posicion b13
                   printf("la posicion en la fila 1 columna 3 es: %f\n", l);
                              //posicion b21
                   printf("la posicion en la fila 2 columna 1 es: %f\n", m);
                              //posicion b22
                   printf("la posicion en la fila 2 columna 2 es: %f\n", n);
                              //posicion b23
                   printf("la posicion en la fila 2 columna 3 es: %f\n", o);
                              //posicion b31
                   printf("la posicion en la fila 3 columna 1 es: %f\n", p);
                              //posicion b32
                   printf("la posicion en la fila 3 columna 2 es: %f\n", q);
                              //posicion b33
                   printf("la posicion en la fila 3 columna 3 es: %f\n", r);
                   
                   system("pause");
                   
}
