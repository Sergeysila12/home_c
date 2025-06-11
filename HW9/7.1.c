#include <stdio.h>




int compression(int a[],int b[], int N)
{
	int count=1;
	int index=0;
	if (a[0]==1)
		{
			b[0]=0;
			index=1;
			
		}

	for (int i = 0; i < N+1; i++)
	{
		if (a[i]!=a[i+1]) 
		{
			b[index]=count;
			count=1;
			index++;
		}
		
		else
		{
			count++;
		}
		
		if(i==(N-1))
		{
			b[index]=count;
			break;
		}
		
	}
	
	return	index;
}

void input (int* a, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &a[i]);
	}
	
	
}
void print (int* b, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d\t",b[i]);
	}
}




int main()
{
	int a[20];

	int b[10];
	
	input (a, 10);

	compression( a, b, 20);

	print ( b, 10);
	
	return 0;
}

