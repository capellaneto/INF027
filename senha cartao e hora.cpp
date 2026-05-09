#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int cart, hor;
	int NUM, num, inv, sub;
	int mc, cc, dc, uc, mh, ch, dh, uh, ms, cs, ds, us;
	int M, C, D, U, m, c, d, u;
	int h, min;
	
	printf("digite o numero do cartao:");
	scanf("%d", &cart);
	printf("digite o horario na forma HHMM:");
	scanf("%d", &hor);
	
	mc = (cart/1000) % 10;
	cc = (cart/100) % 10;
	dc = (cart/10) % 10;
	uc = cart % 10;
	
	mh = (hor/1000) % 10;
	ch = (hor/100) % 10;
	dh = (hor/10) % 10;
	uh = hor % 10;
	
	h = hor/100;
	min = hor % 100; 
	
	if(cart>9999 || h>23 || min>59 || cart<0 || hor<0)
		printf("ERRO");
	else
	{
		if (mc>mh)
		{
			M=mc;
			m=mh;
		}
		else
		{
			M=mh;
			m=mc;
		}
			
		if (cc>ch)
		{
			C=cc;
			c=ch;
		}
		else
		{
			C=ch;
			c=cc;
		}
		if (dc>dh)
		{
			D=dc;
			d=dh;
		}
		else
		{
			D=dh;
			d=dc;
		}
			
		if (uc>uh)
		{
			U=uc;
			u=uh;
		}
		else
		{
			U=uh;
			u=uc;
		}
			
		NUM = (M*1000) + (C*100) + (D*10) + U;
		num = (m*1000) + (c*100) + (d*10) + u;
		sub = NUM - num;
		
		ms = (sub/1000) % 10;
		cs = (sub/100) % 10;
		ds = (sub/10) % 10;
		us = sub % 10;
		
		inv = (us*1000) + (ds*100) + (cs*10) + ms;
		
		
		printf("A senha eh %d", inv);
	}
}