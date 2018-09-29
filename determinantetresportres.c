/* FUENTE: DETERMINANTE 3X3
   AUTOR:JONI
   FECHA: 12/10/2014
   HORA: 16:55
   DESCRIPCION: EN ESTE PROGRAMA TE RESUELVE EL DETERMINANTE DE UNA MATRIZ 3X3
   
   PSEUDOCODIGO
               1)INTRODUCIR LAS COORDENADAS
               2)INTRODUCE A11
               3)INTRODUCE A12
               4)INTRODUCE A13
               5)INTRODUCE A21
               6)INTRODUCE A22
               7)INTRODUCE A23
               8)INTRODUCE A31
               9)INTRODUCE A32
               10)INTRODUCE A33
               11)CALCULA EL DETERMINANTE
               ((A11*A22*A33)+(A12*A23*A31)+(A21*A32*A13))-
               ((A13*A22*A31)+(A12*A21*A33)+(A32*A23*A11))
               12)MOSTRAR EL RESULTADO
               
   */
   
   #include<stdio.h>
   int main() {
       float A, a11, a12, a13, a21, a22, a23, a31, a32, a33;
       
       printf("introduce numero de la fila 1 columna 1: ");
       //lee posicion en a11
       scanf("%f", &a11);
       //introduce posicion a12
       printf("introduce el numero de la fila 1 columna 2: ");
       //lee posicion a12
       scanf("%f", &a12);
       //introduce posicion a13
       printf("introduce el numero de la fila 1 columna 3: ");
       //lee la posicion a13
       scanf("%f", &a13);
       //introduce la posicion a21
       printf("introduce el numero de la fila 2 columna 1: ");
       //lee la posicion a21
       scanf("%f", &a21);
       //introduce la posicion a22
       printf("introduce el numero de la fila 2 columna 2: ");
       //lee la posicion a22
       scanf("%f", &a22);
       //introduce la posicion a23
       printf("introduce el numero de la fila 2 columna 3: ");
       //lee la posicion a23
       scanf("%f", &a23);
       //introduce la posicion a31
       printf("introduce el numero de la fila 3 columna 1: ");
       //lee posicion a31
       scanf("%f", &a31);
       //introduce la posicion a32
       printf("introduce el numero de la fila 3 columna 2: ");
       //lee posicion a32
       scanf("%f", &a32);
       //introduce la posicion a33
       printf("introduce el numero de la fila 3 columna 3:");
       //lee posicion a33
       scanf("%f", &a33);
       
       //calcula el resultado 
               
               A=((a11*a22*a33)+(a12*a23*a31)+(a21*a32*a31))
               -((a13*a22*a31)+(a12*a21*a33)+(a32*a23*a11));
               
       //mostrar el resultado
       
       printf("el resultado del determinante es: %f\n", A);
       system("pause");
       
       }
