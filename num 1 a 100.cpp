#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int num, q, r;
	
	printf("digite um numero de 1 a 100:");
	scanf("%d", &num);
	
	if(num>100 || num<1)
		printf("ERRO");
	
		if (num==100)
			printf("cem");
			
			
			if(num==10)
				printf("dez");
			
			if (num>=11 && num<=19)
			{
				switch(num)
				{
					case 11:
						printf ("onze");
						break;
					case 12:
						printf ("doze");
						break;
					case 13:
						printf ("treze");
						break;
					case 14:
						printf ("quatorze");
						break;
					case 15:
						printf ("quinze");
						break;
					case 16:
						printf ("dezesseis");
						break;
					case 17:
						printf ("dezessete");
						break;
					case 18:
						printf ("dezoito");
						break;
					case 19:
						printf ("dezenove");
						break;
				}
			}
					q=num/10;
					r=num%10;
					
					switch(q)
					{
						case 2:
							printf("vinte");
							break;
						case 3:
							printf("trinta");
							break;	
						case 4:
							printf("quarenta");
							break;
						case 5:
							printf("cinquenta");
							break;
						case 6:
							printf("sessenta");
							break;
						case 7:
							printf("setenta");
							break;
						case 8:
							printf("oitenta");
							break;
						case 9:
							printf("noventa");
							break;						
					}
					if(r!=0)
					{
						if (q > 0)
							printf(" e ")
						switch(r)
						{
							case 1:
								printf("um");
								break;
							case 2:
								printf("dois");
								break;
							case 3:
								printf("tres");
								break;
							case 4:
								printf("quatro");
								break;
							case 5:
								printf("cinco");
								break;
							case 6:
								printf("seis");
								break;
							case 7:
								printf("sete");
								break;
							case 8:
								printf("oito");
								break;
							case 9:
								printf("nove");
								break;
						}
					}
}