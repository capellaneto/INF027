#include <stdio.h>
#include <stdlib.h>
int main ()
{
	float n, m;
	
	printf("Digite um numero qualquer:");
	scanf("%f", &n);
	if (n>=0)
	{
		printf("Seu modulo eh:%.2f", n);
	}
	else
	{
		if (n<0)
		{
			m=-n;
			printf("Seu modulo eh:%.2f", m);
		}
	}
	printf("\n");
	system ("PAUSE");
}