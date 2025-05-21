#include <stdio.h>


//Составить рекурсивную функцию, печать всех чисел от 1 до N
void recur(int n)
{
	if (n>1) recur(n-1);
	printf("%3d", n);
}

int main()
{
	int a;
	scanf ("%d", &a);
	recur(a);
	return 0;
}

