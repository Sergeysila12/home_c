#include <stdio.h>
//Дано натуральное число N. Посчитать количество «1» в двоичной записи числа.
int count=0;
int print_num(int n)
{
	if (n>=2)
	{
	print_num(n/2);
	count+= n%2;
	}
	else if (n<=1)
	{
	count=n;
	return n; 
	}
	return count;
}

int main()
{
	int a;
	scanf ("%d", &a);
	printf("%d", print_num(a));
	return 0;
}

