#include <stdio.h>

int main()
{
	int a, b, c, d, max;
	scanf ("%d", &a);
	b=a%10;
	c=(a/10)%10;
	d=(a/100)%10;
	max=b>c?b:c;
	max=max>d?max:d;
    printf("%d", max );
	return 0;
}

