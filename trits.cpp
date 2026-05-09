#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int num, decimal;
	int m, c, d, u;
	
	printf("digite o numero:");
	scanf("%d", &num);
	
	m = (num/1000) % 10;
	c = (num/100) % 10;
	d = (num/10) % 10;
	u = num % 10;
	
	if (m>2 || c>2 || d>2 || u>2)
		printf("ERRO"); 
	else if (num<0)
		printf("ERRO");	
	
	else
	{
		if (num < 1000)
			m=0;
		else if(m==0)
			m=-1;
		else if(m==1)
			m=0;
		else if(m==2)
			m=1;
		
		if(num < 100)
			c=0;
		else if(c==0)
			c=-1;
		else if(c==1)
			c=0;
		else if(c==2)
			c=1;
			
		if(num < 10)
			d=0;
		else if(d==0)
			d=-1;
		else if(d==1)
			d=0;
		else if(d==2)
			d=1;
		
		if(u==0)
			u=-1;
		else if(u==1)
			u=0;
		else if(u==2)
			u=1;	
			
		decimal = (m*27) + (c*9) + (d*3) + u;
		printf("O valor em decimal eh %d", decimal);
	}
}