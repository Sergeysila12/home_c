#include <stdio.h>

int main()
{
	int a, count=0;
	scanf ("%d", &a);
	while (a!=0)
	{
		a=a/10;
		++count;
	}
    count==3? printf("YES"):printf("NO");
	return 0;
}

