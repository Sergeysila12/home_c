
#include <stdio.h>

//Дано целое не отрицательное число N. Выведите все его цифры по одной, в обратном порядке, разделяя их пробелами или новыми строками.
void recur(int n)
{
	if (n>=10)
	{
	printf("%2d", n%10);
	recur(n/10);
	}
	else if (n<=9)
	printf("%2d", n);
	return; 
	
}

int main()
{
	int a;
	scanf ("%d", &a);
	recur(a);
	return 0;
}

