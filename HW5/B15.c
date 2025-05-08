#include <stdio.h>

int main()
{
	int a,count=0;
	do
	{
		scanf ("%d", &a );
		if(a%2==0)count++;
	} while (a!=0);
	
	printf("%d",count-1);
	return 0;
}

