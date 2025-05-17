
#include <stdio.h>

int nod (int a, int b)
{
	while (a>0&&b>0)
	{
		a>b?a%=b:(b%=a);
	}
	return (!a? b:a);
}


int main()
{
	int a, b;
	scanf ("%d%d", &a, &b );
	printf("%d\n",nod (a, b));
	
	return 0;
}

