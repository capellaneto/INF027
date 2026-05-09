#include <stdio.h>
#include <stdlib.h>
int main ()
{
	float c, z;
	int a;
	
	c = 1.50;
	z = 1.10;
	a = 0;
	
	while (c>=z)
	{
		c = c + 0.02;
		z = z + 0.03;
		a = a + 1;
	}
	
	printf("em %d anos a altura de Ze sera maior que a de Chico", a);
}