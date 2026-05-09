#include <stdio.h>

int main()
{
	int num, senh, n1, n2, n3, s1, s2, s3, dif1, dif2, dif3, rot;
	
	printf("digite o numero atual:");
	scanf("%d", &num);
		printf("digite a numero da senha:");
	scanf("%d", &senh);
	
	n1 = (num/100) % 10;
	n2 = (num/10) % 10;
	n3 = num % 10;
	
	s1 = (senh/100) % 10;
	s2 = (senh/10) % 10;
	s3 = senh % 10;
	
	if(num<0 || num>999 || senh<0 || senh>999)
		printf("numero invalido");
	else
	{
		if (n1>s1)
			dif1 = n1-s1;
		else if (n1<s1)
			dif1 = s1-n1;
		else
			dif1 = 0;	
			
		if (n2>s2)
			dif2 = n2-s2;
		else if (n2<s2)
			dif2 = s2-n2;
		else
			dif2 = 0;
		
		if (n3>s3)
			dif3 = n3-s3;
		else if (n3<s3)
			dif3 = s3-n3;
		else
			dif3 = 0;	
			
		
		if(dif1>5 && dif2 != 0)
			dif1 = 10 - dif1;	
		if(dif2>5 && dif2 != 0)
			dif2 = 10 - dif2;
		if(dif3>5 && dif3 != 0)
			dif3 = 10 - dif3;
			
		rot = dif1 + dif2 + dif3;
		printf("o menor numero de movimentos eh %d", rot);									
	}
	return 0;
}