#include <stdio.h>
#define SIZE 10


void input (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &arr[i]);
	}
}
 
int most_frequent (int* arr,   int length)
{
	int count;
	int index=0;
	int max=0;
	for (int i = 0; i < length; i++)
	{
		count=0;
		for (int j = i+1; j < length; j++)
		{
			if (arr[i]==arr[j])
			{
				count++;
			}
		}
		if (count>max)
			{
				max=count;
				index=i;
			}
	}
	return arr[index];
}


int main()
{
	int arr[SIZE];
	input (arr, SIZE);
	printf("%d\n", most_frequent(arr, SIZE)); 
	
	return 0;
}

