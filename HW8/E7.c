#include <stdio.h>
#define SIZE 10


void input (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &arr[i]);
	}
}

void flipping_the_array (int* arr, int length)
{
	int temp=0, i;
	int point_of_rev=length/2;
	for (i = 0; i < length; i++)
	{
		if (i<length/2&&point_of_rev-2-i>0)
		{
			temp=arr[i];
			arr[i]=arr[(point_of_rev-1)-i];
			arr[(point_of_rev-1)-i]=temp;
		}
		else if (5<=i&&i<7)
		{
			temp=arr[i];
			arr[i]=arr[(length-1+point_of_rev)-i];
			arr[(length-1+point_of_rev)-i]=temp;
		}
	 printf("%d\t", arr[i]);	
	}
	
}


int main()
{
	int arr[SIZE];
	input (arr, SIZE);
	flipping_the_array (arr, SIZE);
	return 0;
}

