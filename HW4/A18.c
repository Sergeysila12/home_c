
#include <stdio.h>

int main()
{
	int a, b;
	scanf ("%d%d", &a, &b );
	if(a>b)printf("Above");
	else if (a==b) printf("Equal");
	else if (a<b) printf("Less");
	return 0;
}

