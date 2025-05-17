
#include <stdio.h>

int sum (int N)
{
	int result=0;
	for (int i = 1; i <= N; i++)
	{
		result+=i;
	}
	return result;
}



int main()
{
	int a;
	scanf ("%d", &a);
	printf("%d", sum (a));
	
	return 0;
}

