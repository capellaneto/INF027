#include <stdio.h>
#include <stdlib.h>
int main()
{
	float raio, altura, volume;
	
	printf("digite a altura da lata:");
	scanf("%f", &altura);
	
	printf("digite o raio da lata:");
	scanf("%f", &raio);
	
	volume = 3.14*raio*raio*altura;
	printf("O volume eh:%.2f\n", volume);
	
	system("PAUSE");
}