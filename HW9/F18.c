
#include <stdio.h>
#define MATRIX_WIDTH 10


int SumMax (int array[][MATRIX_WIDTH], int n)
{
	int max;
	int j=0;
	int sum=0;
	for (int i = 0; i < n; i++)
	{
		max=array[i][j];
		for (; j < MATRIX_WIDTH; j++)
		{
			if (max<array[i][j])
			{
				max=array[i][j];
			}
		}
		sum+=max;
		j=0;
	}
	return sum;
}


int main()
{
	int n=10;
	int array[n][MATRIX_WIDTH];
	
	for (int i = 0; i < n; i++)
		{
		for (int j = 0; j < MATRIX_WIDTH; j++)
			{
			scanf ("%d", &array[i][j]);
			}
		}
		
	printf("%d", SumMax(array, n) );
	
	return 0;
}

