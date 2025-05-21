#include <stdio.h>

//Перевести натуральное число в двоичную систему счисления. Необходимо реализовать рекурсивную функцию.


void print_num(int n)
{
	if (n>=2)
	{
	print_num(n/2);
	printf("%d", n%2);
	}
	else if (n<=1)
	
	printf("%d", n);
	return; 
	
}

int main()
{
	int a;
	scanf ("%d", &a);
	print_num(a);
	return 0;
}


