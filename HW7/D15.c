/*
 Дана последовательность ненулевых целых чисел, 
 завершающаяся числом 0. 
 Ноль в последовательность не входит. Определите наибольшее 
 значение числа в этой последовательности.
 Для решения задачи необходимо написать рекурсивную функцию вида:
int max_find(int max)
 */


#include <stdio.h>

int max=0;
int max_find(int n)
{	if (max==0) max=n;
	if ((max>=n)&&n!=0)
	{
		scanf ("%d", &n);
		max_find(n);
	}
	else if ((max<n)&&n!=0)
	{
	max=n;
	scanf ("%d", &n);
	max_find(n);
	}
	
	return max;
}

int main()
{
	int n;
	//int max;
	scanf ("%d", &n);
	//max=n;
	printf("%2d", max_find(n));
	return 0;
}
