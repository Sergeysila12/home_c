#include <stdio.h>



void swap_nedmax_last(int size, int a[]);



void print (int* b, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d\t",b[i]);
	}
}


int main()
{
	int a[10];

	for (int i = 0; i< 10 ; i++)
	{
		scanf("%d", &a[i]);
		
		if (a[i]==0)
		{
			break;
		}
	}
	
	swap_negmax_last(10, a);
	
	print ( a, 10);
	
	
	return 0;
}



void swap_negmax_last(int size, int a[])
{
	int max_negative;
	int flag=0;
	int temp;
	int index;
	
	
	for (int i = 0; i < size; i++)
	{
		if (a[i]<0)
		{
			flag=1;
			index=i;
			max_negative=a[i];
			//printf("max_negative=a[i]=%d\n",a[i]);
			for (int j = i+1; j < size; j++)
			{
				if (max_negative<a[j]&&a[j]<0)
				{
					max_negative=a[j];
					flag=1;
					index=j;
					i=j;
				}
			}
			break;
		}
		

	}
	if (flag==1)
	{
		temp=a[size-1];
		a[size-1]=max_negative;
		a[index]=temp;
		
	}
}
