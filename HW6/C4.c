#include <stdio.h>

int function (int a)
{
	int max=0;
	int temp=0;
	do
	{
		scanf ("%d", &a);
		if (-2<=a&&a<2)
		{
			temp=a*a;
		}
		else if (a>=2)
		{
			temp=a*a+4*a+5;
		}
		else if (a<-2) 
		{
			temp=4;
		}
		max=max>temp?max:temp;
		if (a==0)
		{
			return max;
		}

	} while (a!=0);
	
}

int main()
{
	int a;
	printf("%d\t", function(a) );
	return 0;
}

