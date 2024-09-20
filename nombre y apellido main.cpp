#include <conio.h>    /*<cstdio>*/
#include <stdio.h>

int main()
{
char nombre[20];
char apellido[20];

printf("Introduzca su nombre: ");
scanf("%s", nombre);
printf("introduzca su apellido:");
scanf("%s", apellido);
printf( "hola %s %s buenos dias.", nombre, apellido, 161);

getch();

return 0;
}

