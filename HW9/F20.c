#include <stdio.h>
#define SIZE 10



void exchangeEvenOdd(int array[], int N)
{
	int quantityEven=0;
	int quantityOdd=0;
	int i;
	for ( i = 0; i < N; i++)
	{
		if (array[i]%2==0)
		{
			quantityEven++;
		}
		else
		{
			quantityOdd++;
		}
	}
	int temp;
	
	if (quantityEven>quantityOdd)
	{
		for (i = 0; i < N; i++)
		{
			if (array[i]%2!=0)
			{
				temp=array[i];
				array[i]=1;
				
				while (temp>0)
				{
					if (((temp%10)%2)!=0)
					{
						array[i]*=temp%10;
						
					}
					temp/=10;
				}
			
			}
		}
	}
	else
	{
		for (i = 0; i < N; i++)
		{
			if (array[i]%2==0)
			{
				temp=array[i];
				array[i]=1;
				while (temp>0)
				{
					if (((temp%10)%2)==0)
					{
						array[i]*=temp%10;
					}
					temp/=10;
				}
			}
		}
	}
	
	
	
}


int main()
{
	int array[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		scanf ("%d", &array[i]);
	}
	
	
	exchangeEvenOdd(array, SIZE);
	
	for (int i = 0; i < SIZE; i++)
	{
		printf ("%d\t", array[i]);
	}
	
	return 0;
}

