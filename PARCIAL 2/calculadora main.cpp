#include <stdio.h>
#include <conio.h>

int main()
{
	int opcion;
	float cant1, cant2, resultado;

	printf("menu de la calculadora basica \n");
	printf("1.Sumar \n");
	printf("2.Restar \n");
	printf("3.Multiplicar \n");
	printf("4.Dividir \n");
	printf("Elige la opcion a realizar: ");
	scanf("%d", &opcion);

	printf("Dame el primer numero: ");
	scanf("%f", &cant1);
	printf("Dame el segundo nunero: ");
	scanf("%f", &cant2);
	if (opcion==1)
	   resultado=cant1+cant2;
	if (opcion==2)
	   resultado=cant1-cant2;
	if (opcion==3)
	   resultado=cant1*cant2;
	if (opcion==4)
       resultado=cant1/cant2;
    printf("El resultado es = %f", resultado);

    return 0; 
}
