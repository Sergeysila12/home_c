

#include <stdio.h>

double sum (int N)
{
	double result=1;
	for (int i = 1; i <N; i++)
	{
		result*=2;
	}
	return result;
}


int main()
{
	int a;
	scanf ("%d", &a);
	printf("%.lf", sum (a));
	
	return 0;
}

