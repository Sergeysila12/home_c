#include <stdio.h>

//Дано натуральное число N. Выведите все его цифры по одной, в прямом порядке, разделяя их пробелами или новыми строками. Необходимо реализовать рекурсивную функцию.
//void print_num(int num)


void print_num(int n)
{
	if (n>=10)
	{
	print_num(n/10);
	printf("%2d", n%10);
	}
	else if (n<=9)
	
	printf("%2d", n);
	return; 
	
}

int main()
{
	int a;
	scanf ("%d", &a);
	print_num(a);
	return 0;
}
