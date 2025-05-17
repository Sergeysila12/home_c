#include <stdio.h>

void print_simple(int n)
{
	int count=1;
	while (n!=1)
	{
		count++;
		if ((n%count)==0) 
		{ 
			printf("%d\t",count);
			n/=count;
			count=1;
		}
	}
}

int main()
{
	int a;
	scanf ("%d", &a);
	print_simple(a) ;
	return 0;
}

