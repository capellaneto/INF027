#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int anos, pont;
	float sal, salbon;
	
	printf("digite seu salario:");
	scanf("%d", &sal);
	
	printf("digite seu tempo de empresa em anos:");
	scanf("%d", &anos);
	
	printf("digite sua pontuacao:");
	scanf("%d", &pont);
	
	if(anos<0)
		printf("ERRO");
	else if(pont<0 || pont>100)
		printf("ERRO");
	else if(sal<0)
		printf("ERRO");	
	else
	{
		if (anos>5 || pont>90)
		{
			salbon = sal * 1.15;
			printf("bonus concedido\n");
			printf("salario com bonus: %d", salbon);
		}	
		else
		{
			printf("bonus negado");
		}
	}	
}