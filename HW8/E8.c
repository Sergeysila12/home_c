#include <stdio.h>
#define SIZE 12


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
	int point_of_rev=length/6;
	for (i = 0; i < length; i++)
	{
		if (i<2)
		{
			temp=arr[i];
			arr[i]=arr[(point_of_rev+1)-i];
			arr[(point_of_rev+1)-i]=temp;
		}
		else if (i>=4&&i<6)
		{
			temp=arr[i];
			arr[i]=arr[11-i];
			arr[11-i]=temp;
		}
		else if (i>=8&&i<10)
		{
			temp=arr[i];
			arr[i]=arr[19-i];
			arr[19-i]=temp;
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

