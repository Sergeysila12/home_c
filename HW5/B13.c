#include <stdio.h>


int main()
{
	int a, temp=0;
	scanf ("%d", &a );
	int even = 0;
	int odd=0;
	while(a>0){
		temp=a%10;
		if (temp%2==0) ++even;
		else ++odd;
		a=a/10;
	}
	printf("%d %d",even, odd);
	return 0;
}

