#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int a,b,c,soma;
	
	scanf("%d %d %d", &a, &b, &c);
	if(a>c&&b>c)
	{
		soma=a+b;
		printf("soma:%d", soma);
	}
	else 
	{
		if(a>b&&c>b)
		{
			soma=a+c;
			printf("soma:%d", soma);
		}
		else
		{
			if(b>a&&c>a)
			{
				soma=c+b;
				printf("soma:%d", soma);
			}
		}
		
				
	}
	printf("\n");
	system ("PAUSE");
}