#include <stdio.h>


void arithmetic_average (int* arr, int length)
{
	int sum=0;
	for (int i = 0; i < length; i++)
	{
		sum+=arr[i];
	}
	printf("%.3f", (float)sum/(float)length);
}

int main()
{
	int const SIZE=5;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		scanf ("%d", &arr[i]);
	}
	arithmetic_average (arr, SIZE);
	
	return 0;
}

