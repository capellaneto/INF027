#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int numOC, numDec;
	int cOC, dOC, uOC, rc, rd,ru; 
	
	printf("digite um numero menor que 777:");
	scanf("%d", &numOC);
	
	cOC = (numOC/100) % 10;
	dOC = (numOC/10) % 10;
	uOC = numOC % 10;
	
	if(numOC>777 || numOC<0 || cOC>7 || dOC>7 || uOC>7)
		printf("Numero Invalido!");
	else	
	{
		numDec = (cOC*64) + (dOC*8) + uOC;
		printf("seu valor em decimal eh: %d", numDec);
	}
}