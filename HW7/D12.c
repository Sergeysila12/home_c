#include <stdio.h>

//Дана монотонная последовательность, в которой каждое натуральное число k встречается ровно k раз: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4,…
//Выведите первые n членов этой последовательности.
void print_sequence(int n, int k, int a)
{

	if (a<k&&n>=1)
	{
		printf("%4d", k);
		print_sequence(n-1, k, a+1);
	}
	 else if (a>=k&&n>=1)
	{
	printf("%4d", k);
	print_sequence(n-1, k+1, a=1);
	 }
	return ;
}

int main()
{
	int n, a, b;
	a=1;
	b=1;
	scanf ("%d", &n);
	print_sequence(n, a, b);
	return 0;
}

