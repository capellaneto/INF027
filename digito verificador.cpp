#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int val, trip,tot, DV;
	int p1,p2,p3,p4,p5;
	
	printf("digite os 5 digitos do codigo:");
	scanf("%d", &val);
	
	p1 = (val/10000)  % 10;
	p2 = (val/1000)  % 10;
	p3 = (val/100)  % 10;
	p4 = (val/10)  % 10;
	p5 = val % 10;
	
	
	if (val>99999 || val<0)
		printf("numero invalido");
	else 
	{
		trip = (p1+p3+p5)*3;
		tot = trip + p2 + p4;
		if(tot>99)
			printf("numero invalido");
		else	
		{
			if(tot>0 && tot<=15)
				DV = 10 - tot;
			if(tot>15 && tot<=25)
				DV = 20 - tot;	
			if(tot>25 && tot<=35)
				DV = 30 - tot;	
			if(tot>35 && tot<=45)
				DV = 40 - tot;
			if(tot>45 && tot<=55)
				DV = 50 - tot;
			if(tot>55 && tot<=65)
				DV = 60 - tot;
			if(tot>65 && tot<=75)
				DV = 70 - tot;
			if(tot>75 && tot<=85)
				DV = 80 - tot;	
			if(tot>85 && tot<=95)
				DV = 90 - tot;
			if(tot>95 && tot<=99)
				DV = 100 - tot;		
		}
		printf("o digito verificador eh %d", DV);
	}	
}