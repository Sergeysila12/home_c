#include <stdio.h>

int power ( int n, int p)
{
	int result=1;
	for (int i = 1; i <= p; ++i)
	{
		result*=n;
	}
	return result;
}   

int main()
{
	int a, b;
	scanf ("%d%d", &a, &b);
	printf("%d\t", power(a ,b) );
	
	return 0;
}

