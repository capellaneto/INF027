#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int p, d, n;
	
	p=1;
	d=2;
	
	printf("digite um numero inteiro:");
	scanf("%d", &n);
	
	if (n<=1)
		p=0;
	else
	{
		do 
		{
			if (n % d == 0 && n != d)
				p=0;
				
			d = d + 1;		
		} while (p==1 && d <= n/2);
	}	
	if (p==0)
		printf("%d nao eh primo", n);
	else 
		printf("%d eh primo", n);	
	
}