
#include <stdio.h>

int main()
{
	int a, count=1;
	scanf ("%d", &a);
	while (count<=a)
	{
		printf("%d %d %d\n", count, count*count, count*count*count );
		++count;
	}
    
	return 0;
}

