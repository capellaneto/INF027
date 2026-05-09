#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main() 
{
    float valor;

    printf("Digite um valor (ou 0 para encerrar): ");
    scanf("%f", &valor);

    while (valor != 0) 
	{
        
        printf("\nValor: %.2f", valor);
        printf("\nQuadrado: %.2f", pow(valor, 2));
        printf("\nCubo: %.2f", pow(valor, 3));
        printf("\nRaiz Quadrada: %.2f\n", sqrt(valor));

        printf("\nDigite o proximo valor (ou 0 para encerrar): ");
        scanf("%f", &valor);
 	}
 }