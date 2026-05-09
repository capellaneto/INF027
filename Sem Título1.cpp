#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int dia;
	
	scanf("%d", &dia);
	if(dia==1)
		printf("domingo");		
		if(dia==2)
			printf("segunda");
			if(dia==3)
				printf("terça");
				if(dia==4)
					printf("quarta");		
					if(dia==5)
						printf("quinta");
						if(dia==6)
							printf("sexta");
							if(dia==7)
								printf("sabado");
								if(dia<1 || dia>7)
									printf("ERRO");											
}