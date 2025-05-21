
#include <stdio.h>

//Дано натуральное число N. Вычислите сумму его цифр. Необходимо составить рекурсивную функцию.
//int sum_digits(int n)

int sum=0;
int sum_digits(int n)
{
	if (n<10) 
	{
	return n%10;
    }
    
	sum=n%10+sum_digits(n/10);
	return sum;
	
}

int main()
{
	int a;
	scanf ("%d", &a);
	printf("%d", sum_digits(a));
	return 0;
}

