#include <stdio.h>
#define SIZE 10

void input (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &arr[i]);
	}
}

void swap_array (int* arr, int i, int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}

void sort_array (int* arr, int length)
{
	int min=0;
	int index_min=0;
	for (int i = 0; i < length; i++)
	{
		min=arr[i];
		index_min=i;
		for (int j = length-1; i < j; j--)
		{
			if (min%10>arr[j]%10)
			{
				min=arr[j];
				index_min=j;
			}
			if ((arr[index_min]%10==arr[j]%10)&&(arr[index_min]>arr[j]))
			{
				swap_array (arr, index_min, j);
			}
		}
		swap_array (arr, i, index_min);
	}
}


void print (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d\t", arr[i]);
	}
}


int main( )
{
	int arr[SIZE];
	input (arr, SIZE);
	sort_array (arr, SIZE);
	print (arr, SIZE);
	
	return 0;
}

