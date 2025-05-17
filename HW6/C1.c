
#include <stdio.h>


int mod (int a)
{
	return (a<0)?-a:a;
}


int main()
{
	int b;
	scanf ("%d", &b );
	printf("%d\t",mod(b) );
	return 0;
}

