#include <stdio.h>

//Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N 
int sum=0;
int recur(int n)
{
	if (n==1) 
	{
	return 1;
    }
	sum=n+recur(n-1);
	return sum;
	
}

int main()
{
	int a;
	scanf ("%d", &a);
	printf("%d", recur(a));
	return 0;
}

