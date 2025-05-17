#include <stdio.h>

int is_prime(int n)
{
	int i = 2;
	if (n==2) return printf("YES");
	if (n==1) return printf("NO");
	do
	{
		if (n%i==0) return printf("NO");
		i++;
	} while (i*i <= (n+2));
	{
		return printf("YES");
	}
	
}


int main()
{ 
	int a;
	scanf ("%d", &a);
	is_prime(a);
	return 0;
}

