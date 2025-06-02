

#include <stdio.h>

#define SIZE 10



void input (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &arr[i]);
	}
}


void cycle_shift (int* arr, int length)
{
	int temp1=0;
	int temp2=0;
	
	for (int i = 0, j=1; i < length; i++, j++)
	{
		if (i%2!=0&&i>=1)
		{
		temp2=arr[j];
		arr[j]=temp1;
		}
		else if (i>=2)
		{
			temp1=arr[j];
			arr[j]=temp2;
		}
		
		if (i==0) 
		{
			temp1=arr[j];
			arr[j]=arr[i];
			arr[i]=arr[length-1];
		}
	
		printf("%d\t", arr[i]);
	}
	

int main(int argc, char **argv)
{
	int arr[SIZE];
	input (arr, SIZE);
	cycle_shift (arr, SIZE);
	
	return 0;
}

