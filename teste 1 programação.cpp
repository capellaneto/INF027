#include <stdio.h>
#include <stdlib.h>
main()
{
int i, j;
float x;
char c;
char nome [30];
scanf ("%d", &i);
scanf ("%d %f", &j, &x);
scanf (" %c", &c);
printf("digite nome:");
scanf ("%s", nome);
printf ("numero inteiro %d\n", i);
printf ("inteiro e float %d %f\n", j, x);
printf ("caracter %c\n", c);
printf ("nome %s\n", nome);
printf ("fim");
system("PAUSE");
}
