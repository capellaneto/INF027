#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int a1, m1, d1;
	int a2, m2, d2;
	
	printf ("digite os anos, meses e dias da 1 pessoa:");
	scanf("%d %d %d", &a1, &m1, &d1);
	printf ("digite os anos, meses e dias da 2 pessoa:");
	scanf("%d %d %d", &a2, &m2, &d2);
	
	if (m1>12 || m2>12 || d1>30 || d2>30)
	printf("ERRO");
	else
	{
		if (a1<a2)
		{
			printf("a primeira pessoa eh mais velha");
		}
		else if (a2<a1)
		{
			printf("a segunda pessoa eh mais velha");
		}
		else
		{
			if(m1<m2)
			{
				printf("a primeira pessoa eh mais velha");
			}
			else if(m2<m1)
			{
				printf("a segunda pessoa eh mais velha");
			}
			else 
			{
				if(d1<d2)
				{
					printf("a primeira pessoa eh mais velha");
				}
				else if(d2<d1)
				{
					printf("a segunda pessoa eh mais velha");
				}
				else
				{
					printf("as duas pessoas tem a mesma idade");
				}
			}
		}
	}
}
