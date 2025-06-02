
#include <stdio.h>
#define SIZE 12

void input (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &arr[i]);
	}
}




void cycle_shift (int* arr, int length)
{
	int temp=0;
	
	for (int i = 0, j=length-1; i < length/2; i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	
	for (int i = 4; i < length-4; i++)
	 {
		 temp=arr[i];
		 arr[i]=arr[length+3-i];
		 arr[length+3-i]=temp;
	 }
	 for (int i = 0; i < length-10; i++)
	 {
		 temp=arr[i];
		 arr[i]=arr[length-9-i];
		 arr[length-9-i]=temp;
	 }
}

void print (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d\t", arr[i]);
	}
}

int main()
{
	int arr[SIZE];
	input (arr, SIZE);
	cycle_shift (arr, SIZE);
	print ( arr, SIZE);
	
	return 0;
}
