#include <stdio.h>
#define SIZE 12


void input (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &arr[i]);
	}
}

void arithmetic_average (int* arr, int length)
{
	int sum=0;
	for (int i = 0; i < length; i++)
	{
		sum+=arr[i];
	}
	printf("%.2f", (float)sum/(float)length);
}

int main(int argc, char **argv)
{
	int arr[SIZE];
	input (arr, SIZE);
	arithmetic_average (arr, SIZE);
	return 0;
}

