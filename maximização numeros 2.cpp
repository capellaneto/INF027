#include <stdio.h>
#include <stdlib.h>
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
		
		if(ua>ub) // unidade do A
		{
			ub=0;
			numA = numA + ua;
			c1=1;
		}
			else if(ub>ua) // unidade do B
			{
				ua=0;
				numB = numB + ub;
				c2=1;
			}
		
		
		if(da>db) // dezena do A
		{
			db=0;
			if(c1==1)
			{
				numA = numA + (da*10);
				c1 = 2;
			}
		
			else if(c1==0)
			{
				numA = numA + da;
				c1 = 1;
			}
		}
			else if(db>da) // dezena do B
			{
				da=0;
				if(c2==1)
				{
				numB = numB + (db*10);
				c2 = 2;
				}
				else if(c2==0)
				{
				numB = numB + db;
				c2 = 1;
				}
			}
		
		if(ca>cb) // centena do A
		{
			cb=0;
				c1 = 3;
			}
			else if(c1==1)
			{
				numA = numA + (ca*10);
				c1 = 2;
			}
			else if(c1==0)
			{
				numA = numA + ca*1;
				c1 = 3;
			}
		}
		
			else if(cb>ca) // centena do B
			{
				ca=0;
				if(c2==2)
				{
					numB = numB + (cb*100);
					c2 = 3;
				}
				else if(c2==1)
				{
					numB = numB + (cb*10);
					c2 = 2;
				}
				else if(c2==0)
				{
					numB = numB + cb;
					c2 = 3;
				}
			}
				
		else 
		{
			numA = (ca*100) + (da*10) + ua;
			numB = (cb*100) + (db*10) + ub;
		}
		
	
		
		if(numA==0)
			numA=-1;
	
		if(numB==0)
			numB=-1;
			
		printf("A maximizacao eh (%d,%d)", numA, numB);	
	}

}
