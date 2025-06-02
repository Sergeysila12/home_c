
#include <stdio.h>
#define SIZE 10



void input (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &arr[i]);
	}
}


void meet_once (int* arr,   int length)
{
	int flag=1;
	for (int i = 0; i < length; i++)
	{
		flag=1;
		for (int j = 0; j < length; j++)
		{
			if (arr[i]==arr[j]&&i!=j)
			{
				flag=0;
				break;
			}
		}
		
		if (flag==1)
			{
				printf("%d\t", arr[i]); 
				
			}
	}
	
}

int main()
{
	int arr[SIZE];
	input (arr, SIZE);
	
	meet_once (arr, SIZE);
	
	
	return 0;
}

