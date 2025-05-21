#include <stdio.h>


void is_prime(int n, int i)
{
	if (i*i<n&&(n%i)!=0)
	{
		is_prime(n, i+1);
	}
	else if (((n!=2)&&n%i==0)||n==1) printf("NO");
	else printf("YES");
}

int main()
{
	int a;
	int b=2;
	scanf ("%d", &a);
	is_prime(a, b);
	return 0;
	
}

