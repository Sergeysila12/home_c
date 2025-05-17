#include <stdio.h>

int is_happy_number(int n)
{
	int sum=0;
	int multipl=1;
	while (n>0)
	{
		sum+=n%10;
		multipl*=n%10;
		n=n/10;
	}
	return sum==multipl? printf("YES"):printf("NO");
}

int main()
{
	int a;
	scanf ("%d", &a);
	is_happy_number (a);
	return 0;
}

