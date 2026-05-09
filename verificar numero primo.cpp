#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int p, d, n;
	
	printf("digite um numero inteiro:");
	scanf("%d", &n);
	
	d=2;//divisor
	//p=0 n nao eh primo
	p=1;//n eh primo
	
	if(n<=1)
		p=0;
	else
	{
		while(p==1 && d<=n/2)
			if(n % d == 0)
				p=0;
			else
				d=d+1;		
	}
	
	if(p==1)
		printf("%d eh primo", n);
	else
		printf("%d nao eh primo", n);
}