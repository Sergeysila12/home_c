
#include <stdio.h>
#define MATRIX_WIDTH 5

int TraceMatrix(int array[][MATRIX_WIDTH], int n)
{
	int sum=0;
	for (int i = 0; i < MATRIX_WIDTH; i++)
	{
		for (int j = i; j <= i; j++)
		{
			sum+=array[i][j];
		}
	}
	return sum;
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
	
	printf("%d",TraceMatrix(array, n) );
	
	return 0;
}

