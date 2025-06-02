#include <stdio.h>
#define SIZE 10

void find_min (int* arr, int length)
{
	int min=arr[0];
	int index_min=0;
	for (int i = 1; i < length; i++)
	{
		if (min>arr[i]) 
		{
			min=arr[i];
			index_min=i;
		}
	}
	printf(" %d " " %d ", index_min+1, min);
}

void find_max (int* arr, int length)
{
	int max=arr[0];
	int index_max=0;
	for (int i = 1; i < length; i++)
	{
		if (max<arr[i]) 
		{
			max=arr[i];
			index_max=i;
		}
	}
	printf("%d " " %d\t ",index_max+1, max);
}

void input (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &arr[i]);
	}
}

int main()
{
	int arr[SIZE];
	input (arr, SIZE);
	find_max (arr, SIZE);
	find_min (arr, SIZE);
	
	return 0;
}

