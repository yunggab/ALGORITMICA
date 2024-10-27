#include <stdio.h>
#include <conio.h>
 int main ()
 {
float c1, c2, c3;
printf("Ingrese su primer calificacion 1: ");
scanf("%f", &c1);

printf("ingrese su segunda calificacion 2: ");
scanf("%f", &c2);

printf("ingrese su tercer calificacion 3: ");
scanf("%f", &c3);
  float promedio;

  promedio= c1+c2+c3/3;

 if(promedio >7)
 {
     printf("Aprobado");
 }
 else
 {
     printf("Reprobado");
 }
getch();
 }
