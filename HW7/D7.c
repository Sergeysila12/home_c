#include <stdio.h>

//Составить рекурсивную функцию, печать всех чисел от N до 1.
void print_num(unsigned int n)
{
	if (n>=1)
	{
	printf("%3d", n);
	print_num(n-1);
	
	}
	else return; 
	
}

int main()
{
	unsigned int a;
	scanf ("%d", &a);
	print_num(a);
	return 0;
}
