#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int n, q;
    int dm, m, c, d, u;
    int soma;
    int resultado;

    printf("digite um numero entre 0 e 31: ");
    scanf("%d", &n);

    if (n > 31) {
        printf("ERRO");
    } else {

        dm = n / 16;
        n  = n % 16;

        m = n / 8;
        n = n % 8;

        c = n / 4;
        n = n % 4;

        d = n / 2;
        n = n % 2;

        u = n;

        soma = dm + m + c + d + u;

        if (soma % 2 == 0) {
            resultado = dm*100000 + m*10000 + c*1000 + d*100 + u*10;
        } else {
            resultado = dm*100000 + m*10000 + c*1000 + d*100 + u*10 + 1;
        }

        printf("%d", resultado);
    }
	
}