#include <stdio.h>
#define SIZE 10

int NUMBER1;
int NUMBER2;


void input (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &arr[i]);
	}
}

int read_positive_array (int* arr, int* positive_arr,  int length)
{
	int count=-1;
	for (int i = 0; i < length; i++)
	{
		if (arr[i]>0)
		{
			count++;
			positive_arr[count]=arr[i];
			//printf("%d\t", positive_arr[count]);
		}
	}
	return count+1;
}


int read_negative_array (int* arr,  int* negative_arr, int length)
{
	int count=-1;
	for (int i = 0; i < length; i++)
	{
		if (arr[i]<0)
		{
			count++;
			negative_arr[count]=arr[i];
			//printf("%d\t", negative_arr[count]);
		}
	}
	return count+1;
}


void print2 (int* negative_arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d\t", negative_arr[i]);
	}
}

void print1 (int* positive_arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d\t", positive_arr[i]);
	}
 }


int main( )
{
	int arr[SIZE];
	input (arr, SIZE);
	
	int positive_arr[SIZE];
	int negative_arr[SIZE];
	
	NUMBER1=read_positive_array (arr, positive_arr, SIZE);
	NUMBER2=read_negative_array (arr, negative_arr, SIZE);
	
	print1 (positive_arr, NUMBER1);
	print2 (negative_arr, NUMBER2);
	
	return 0;
}

