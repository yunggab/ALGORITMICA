#include <stdio.h>
 int main()
{


 double num,sum,pro;
 sum=0;
 pro=1;

 printf("\nEscribe un numero diferente de 0 =");
 scanf("%if",&num);

 while (num != 0)
 {
     sum=sum+num;
     pro=pro*num;

    printf("\nNumero= %If suma= %If producto= %If",num, sum, pro);

    printf("\nNuevo numero(para acabar escribe 0)=");
    scanf("%If", &num);
 }
 printf("\n\n\nSuma Total= %If producto total= %If", sum,pro);
}
