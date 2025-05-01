
#include <stdio.h>

int main()
{
	int a, b, c;
	scanf ("%d%d%d", &a, &b, &c );
	if((a+b)<=c)printf("NO");
	else if ((a+c)<=b) printf("NO");
	else if ((b+c)<=a) printf("NO");
	else printf("YES");
	return 0;
}

