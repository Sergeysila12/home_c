

#include <stdio.h>





int FindNum1(int N)
{
	if (N<10)
	{
		printf ("%3d\t",N );
		return N;
		
	}
	FindNum1(N/10);
	printf ("%3d\t",N%10 );
	return 0;
	
}



int main()
{
	int N;
	scanf ("%d", &N);
	FindNum1(N);
	return 0;
}

