

#include <stdio.h>

int main()
{
	int a, b;
	scanf ("%d%d", &a, &b);
	while (a<=b)
	{
		printf("%d\t", a*a);
		++a;
	}
    
	return 0;
}

