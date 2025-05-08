#include <stdio.h>

int main()
{
	int a, b;
	scanf ("%d%d", &a, &b );
	while (a>0&&b>0)
	{
		a>b?(a=a%b):(b=b%a);
	}
	printf("%d",a==0? b:a);
	
	return 0;
}

