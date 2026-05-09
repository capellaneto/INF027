#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int f, n, q;

	f=0;
	printf ("digite um numero menor que 32:");
	scanf ("%d", &n);

	
	//16
	q = n/16;
	f = f + q * 10000;
	n = n % 16;
	
	//8
	q = n/8;
	f = f + q * 1000;
	n = n % 8;
	
	
	// 4
	q = n / 4;
	f = f + q * 100;	
	n = n % 4;
	
	// 2
	q = n / 2;
	f = f + q * 10;	
	n = n % 2;
	 
	// 1 
	q = n / 1;
	f = f + q * 1;

	
	
	printf ("final: %d\n", f);
	system ("PAUSE");
}