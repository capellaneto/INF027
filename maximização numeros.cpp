#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
	int a, b, numA, numB;
	int ca, da, ua, cb, db, ub;
	int c1, c2;
	
	printf("Digite o primeiro numero:");
	scanf("%d", &a);
	printf("Digite o segundo numero:");
	scanf("%d", &b);
	
	numA=0;
	numB=0;
	c1=0;
	c2=0;
	
	ca = (a/100) % 10;
	da = (a/10) % 10;
	ua = a % 10;
	
	cb = (b/100) % 10;
	db = (b/10) % 10;
	ub = b % 10;
	
	if(a>999 || b>999)
		printf("Numero Invalido");
	else 
	{
		
		if(ua>=ub) // unidade do A
		{
			numA = numA + ua;
			c1+=1;
		}
		if(ua<=ub) // unidade do B
			{
				numB = numB + ub;
				c2+=1;
			}
		
		
		if(da>=db) // dezena do A
		{
			numA = numA + (da* pow(10, c1));
			c1 += 1;
		}
		if(db>=da) // dezena do B
		{
			numB = numB + db* pow(10, c2);
			c2 += 1;
				
		}
		
		if(ca>=cb) // centena do A
		{
			numA = numA + ca* pow(10, c1);
			c1 += 1;
		}
		
		if(cb>=ca) // centena do B
			{
				numB = numB + cb* pow(10, c2);
				c2 += 1;
			}
				
		
		if(numA==0)
			numA=-1;
	
		if(numB==0)
			numB=-1;
			
		printf("A maximizacao eh (%d,%d)", numA, numB);	
	}

}
