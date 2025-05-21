
#include <stdio.h>

//Составить рекурсивную функцию, печать всех простых множителей 
//числа.
void print_divide(int n, int k)
{
	if (n%k==0&&k<=n)
	{
		printf("%4d", n);
		n/=k;
		print_divide(n, k=2);
	}
	else if ((n%k)!=0&&k<=n)
	{
	print_divide(n, k+1);
	}
	return ;
}

int main()
{
	int n, a;
	a=2;
	scanf ("%d", &n);
	print_divide(n, a);
	return 0;
}

