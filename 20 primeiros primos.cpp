#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int p, d, n, c;
	
	n=0;
	c=0;
	
	while (c<20)
	{
		p=1;
		d=2;
		
		if (n<=1)
			p=0;
		while (p == 1 && d <= n/2)
		{
			if (n % d == 0)
				p=0;
			
			d = d + 1;
				
		}
		if (p == 1)
		{
			printf("%d, ", n);
			c = c + 1;
		}
		n = n + 1;		
	}
			
}