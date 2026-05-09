
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int n, prim, d;
	double multi;
	
	
	multi = 1;
	
	for (n=92; n<=1478; n = n+1)
	{
		prim = 1;
		d = 2;
		while (prim == 1 && d <= n/2)
		{
			if(n % d == 0)
				prim=0;
			
			
			d = d + 1;
		}
		if(prim==1)
		{
			multi = multi * n;
			printf("multi atual %g\n", multi);
		}
	}
	
	printf("o produto eh %g", multi);
}