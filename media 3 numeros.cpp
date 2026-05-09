#include <stdio.h>
//#include <stdlib.h>
main ()
{
	int n1,n2,n3;
	float media;
	printf ("digite o primiro numero:");
	scanf ("%d", &n1);
	printf ("digite o segundo numero:");
	scanf ("%d", &n2);
	printf ("digite o terceiro numero:");
	scanf ("%d", &n3);
	media = (n1+n2+n3)/3;
	printf ("media: %f", media);
	system ("PAUSE");
}