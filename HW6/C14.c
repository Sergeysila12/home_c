#include <stdio.h>


void function (int x)
{
	int sum=0;
		while (x>0) 
	{
		sum+=x%10;
		x=x/10;
	}
	(sum%2==0)? printf("YES"):printf("NO");
}

int main()
{
	int a;
	scanf ("%d", &a);
	function (a);
	return 0;
}

