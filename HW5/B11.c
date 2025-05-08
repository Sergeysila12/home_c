#include <stdio.h>

int main()
{
	int a,temp1=0;
	scanf ("%d", &a);
	while (a>0) 
	{
		temp1=temp1*10+a%10;
		a=a/10;
	}
	printf("%d",temp1);
	return 0;
}

