
//Написать логическую рекурсивную функцию и
// используя ее определить является ли введенное
// натуральное число точной степенью двойки.
//int is2pow(int n)
#include <stdio.h>

void is2pow(int n, int mult)
{
	if (n>mult)
	{
		mult*=2;
		is2pow(n,mult );
		
	}
	else if (mult==n||n==1)
	{
	printf("YES");
	return ;
	}
	else printf("NO");
	
}




int main()
{
	int n;
	int mult=2;
	scanf ("%d", &n);
	is2pow( n, mult );
	return 0;
}

