#include <stdio.h>

#define SIZE 30

void FindMinSum( int array[], int length)
{
	int index1=0;
	int index2;
	int i;
	int min1=array[0];
	int min2;
	
	for (i = 0; i < length; i++)
	{
		if (min1>array[i])
		{
			min1=array[i];
			index1=i;
		}
		if (i==length-1)
		{
			if (index1>0)
			{
				index2=index1-1;
				min2=array[index1-1];
			}
			else if (index1==0)
			{
				index2=index1+1;
				min2=array[index1+1];
			}
			for (int j = 0; j < length; j++)
			{
				if (min2>array[j]&&j!=index1)
				{
					min2=array[j];
					index2=j;
				}
				if (j==length-1)
				{
					if (index1<index2)
					{
						printf("%d %d",index1, index2);
					}
					else
					{
						printf("%d %d",index2, index1);
					}
					
				}
			}
		}
	}
} 


void input (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &arr[i]);
	}
}



int main()
{
	int array[SIZE];
	
	input (array, SIZE);
	
	FindMinSum(array,SIZE);
	
	
	return 0;
}

