#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int m, i, a;
	
	
	printf("escreva o numero de linhas:");
	scanf("%d", &m);
	
	for (i=1; i<=m; i=i+1)
	{
		for (a=1; a<=i; a=a+1)
		printf("*");
		
		printf("\n");
	}		
}