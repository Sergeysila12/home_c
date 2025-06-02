#include <stdio.h>
#define SIZE 10





int NUMBER;


void input (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &arr[i]);
	}
}

void print (int* filtered_numbers, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d\t", filtered_numbers[i]);
	}
}

int find_penaltimate_null (int* arr,int* filtered_numbers, int length)
{
	int count=-1;
	for (int i = 0; i < length; i++)
	{
		if( (arr[i]/10)%10==0)
		{
			count++;
			filtered_numbers[count]=arr[i];
		} 
	}	
	return count+1;
}



int main(void)
{
	int arr[SIZE];
	int filtered_numbers[NUMBER];
	input (arr, SIZE);
	NUMBER=find_penaltimate_null(arr,filtered_numbers, SIZE);
	print(filtered_numbers, NUMBER);
	return 0;
}

