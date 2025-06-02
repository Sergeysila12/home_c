
#include <stdio.h>

int ChangeMax(int N)
{
	int max=N%10;
	while (N>0)
	{
		N/=10;
		if (max<N%10)
		{
			max=N%10;
		}
		if (N<10)
		{
			for (i = 0; i < count; i++)
			{
				max*=10;
				if (max>N)
				{
					
				}
			}
		}
	}
	return max;
}

//int max;

//~ int ChangeMax(int N)
//~ {
	//~ max=max<(N%10)?(N%10):max;
	//~ if (N<10)
	//~ {
		//~ return max;
	//~ }
	//~ max=max*10+N%10;
	//~ ChangeMax(N/10);
	
	//~ return max=max*10+N%10;
	
//~ }

int main()
{
	int N, lastnum;
	scanf ("%d", &N);
	for (N>0)
	{
		n=N%10;
		N/=10;
		if(n>max)
		{
			
		}
	}
	
	if (N0>
	
	
	printf ("%3d\t",ChangeMax(N));
	
	return 0;
}

