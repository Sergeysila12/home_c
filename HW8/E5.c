#include <stdio.h>
#define SIZE 10



void input (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &arr[i]);
	}
}

int sum_of_positive_int (int* arr, int length)
{
	int sum=0;
	for (int i = 0; i < length; i++)
	{
		if (arr[i]>0)
		{
		sum+=arr[i];
		}
	}
	return sum;
}



int main()
{
	int arr[SIZE];
	input (arr, SIZE);
	printf("%d\n", sum_of_positive_int (arr, SIZE) );
	return 0;
}

