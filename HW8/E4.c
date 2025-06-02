#include <stdio.h>
#define SIZE 10



void input (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &arr[i]);
	}
}


int find_max_elem1 (int* arr, int length)
{
	int max1=arr[0];
	for (int i = 0; i < length; i++)
	{
		
		if (max1<arr[i]) 
		{
			max1=arr[i];
		}
	}
	return max1;
}
int find_max_index1 (int* arr, int length)
{
	int max=arr[0];
	int index_max=0;
	for (int i = 0; i < length; i++)
	{
		if (max<arr[i]) 
		{
			index_max=i;
			max=arr[i];
		}
	}
	return  index_max;
}



int find_max_elem2 (int* arr, int length, int index_max )
{
	int max2=0;
	if (index_max<(length-1))
	max2=arr[index_max+1];
	else max2=arr[index_max-1];
	
	for (int i = 0; i < length; i++)
	{
		if (max2<arr[i]&& index_max!=i) 
		{
			max2=arr[i];
		}
	}
	return max2;
}


int main()
{
	int arr[SIZE];
	input (arr, SIZE);
	int index_max=find_max_index1 (arr, SIZE);
	int max1=find_max_elem1 (arr, SIZE);
	int max2=find_max_elem2 (arr, SIZE, index_max);
	printf("%d\n", max1+max2 );
	
	return 0;
}

