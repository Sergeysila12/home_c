


#include <stdio.h>


void FindMultiple ( int N)
{
	//int count;
	int sum;
	
	for (int i = 2; i < 10; i++)
	{
		//count=0;
		do
		{
			sum=N/i;
		} while (sum<0);
		
	printf ("%d %d\n",i, sum );	
	}
}

int main()
{
	int N;
	scanf ("%d", &N);
	FindMultiple (N);
	
	
	return 0;
}

