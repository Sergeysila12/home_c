
#include <stdio.h>
#define SIZE 1000


int function (int* arr, int N) 
{
	int min=(arr[0]);
	int max=(arr[0]);
	int skip_num=0;
	int i=0;
	
	//printf("max=%d\n", max );
	//printf("min=%d\n", min );
	
	while (arr[i]!=0)
	{
		//printf("i=%d\n", i );
		if (arr[i]<min)
		{
			min=arr[i];
		}
		if (arr[i]>max)
		{
			max=arr[i];
		}
		i++;
	}
	//printf("max=%d\n", max );
	//printf("min=%d\n", min );
	
	
	for (int i = min; i <= max; i++)
	{
		for (int j = 0;  ; j++)
		{
			if (arr[j]==i)
			{
				break;
			}
			if (arr[j]==0)
			{
				skip_num=i;
				return skip_num;
			}
		}
	}
	return skip_num;
}


int main()
{
	int arr[SIZE];

	for (int i = 0; i< SIZE ; i++)
	{
		scanf("%d", &arr[i]);
		//printf("arr[i]=%d\n", arr[i]);
		if (arr[i]==0)
		{
			break;
		}
	}
	
	
	printf("%d\t", function (arr, SIZE) );
	
	return 0;
}

