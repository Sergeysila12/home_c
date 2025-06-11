
#include <stdio.h>
#define MATRIX_WIDTH 5


int Quantity(int array[][MATRIX_WIDTH], int n)
{
	int sum=0;
	int i, j;
	for (i = 0; i < MATRIX_WIDTH; i++)
	{
		for (int j = i; j <= i; j++)
		{
			sum+=array[i][j];
		}
	}
	float average=sum/(float)MATRIX_WIDTH;
	
	int quantity=0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < MATRIX_WIDTH; j++)
		{
			if (average<array[i][j])
			{
				quantity++;
			}
		}
	}
	return quantity;
}

int main()
{
	int n=5;
	int array[n][MATRIX_WIDTH];
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < MATRIX_WIDTH; j++)
		{
			scanf ("%d", &array[i][j]);
		}
	}
	
	printf("%d",Quantity(array, n) );
	
	return 0;
}

