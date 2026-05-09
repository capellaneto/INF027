#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int dt, pos, ressto;
	
	printf("digite a distancia total percorrida:");
	scanf("%d", &dt);
	
	pos = (dt-2);
	
	if (dt<4)
		printf("numero invalido");
	else
	{
		if(pos % 8 == 4)
			printf("atingira o sessor 1");
		else if(pos % 8 == 5)
			printf("atingira o sessor 2");
		else if(pos % 8 == 6)
			printf("atingira o sessor 3");	
		else
			printf("nao entrou em nenhuma saida");		
	}
}
