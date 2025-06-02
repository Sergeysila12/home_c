#include <stdio.h>

int find_min (int* arr, int length)
{
	int min=arr[0];
	for (int i = 1; i < length; i++)
	{
		if (min>arr[i]) min=arr[i];
	}
	return min;
}

int main()
{
	int const SIZE=5;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		scanf ("%d", &arr[i]);
	}
	printf("%d", find_min (arr, SIZE));
	return 0;
}
