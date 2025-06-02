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



int find_identical_num (int* arr,int* filtered_numbers, int length)
{
	int count=-1;
	int flag=1;
	for (int i = 0; i < length; i++)
	{
		for (int j = i+1; i < length; j++)
		{
			if (arr[i]==arr[j])
			{
				for (int k = 0; k<count+1; k++)
				{
					if (filtered_numbers[k]==arr[i])
					{
						flag=0;
						break;
					}
					else 
					{
						flag=1;
					}
				}
				if (flag==1)
				{
					count++;
					filtered_numbers[count]=arr[i];
				}
			}
		}
	}	
	return count+1;
}

int main(void)
{
	int arr[SIZE];
	int filtered_numbers[SIZE];
	input (arr, SIZE);
	NUMBER=find_identical_num (arr,filtered_numbers, SIZE);
	print (filtered_numbers, NUMBER);
	return 0;
}

