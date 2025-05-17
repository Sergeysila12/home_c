#include <stdio.h>

int tranzlate (int N, int p)
{
	int result=0;
	int exponent=1;
	int temp=N;
	while (temp!=0)
	{
		result+=(temp%p)*exponent;
		temp=temp/p;
		exponent*=10;
	}
	return result;
}


int main()
{
	int a, b;
	scanf ("%d %d", &a, &b );
	printf("%d", tranzlate (a, b));
	return 0;
}

