
#include <stdio.h>


//Дана последовательность целых чисел через пробел, 
//завершающаяся числом 0. Выведите все нечетные числа из этой
// последовательности, сохраняя их порядок.
void sequence_of_odd(int n)
{
	if (((n%2)!=0)&&n!=0)
	{
		printf("%4d", n);
		scanf ("%d", &n);
		sequence_of_odd(n);
	}
	else if ((n%2)==0&&n!=0)
	{
	scanf ("%d", &n);
	sequence_of_odd(n);
	}
	if (n==0)return ;
}

int main()
{
	int n;
	//int k=0;
	scanf ("%d", &n);
	sequence_of_odd(n);
	return 0;
}
