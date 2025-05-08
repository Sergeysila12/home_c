
#include <stdio.h>

int main()
{
	int a, min=0, max=0, temp1=0, temp2=0;
	scanf ("%d", &a );
	temp1=a%10;
	if (a>9) a=a/10;
	temp2=a%10;
	min=temp1<temp2?temp1:temp2;
	max=temp2<temp1?temp1:temp2;
	while (a>9) 
	{
		a=a/10;
		temp2=a%10;
		min=min<temp2?temp1:temp2;
		max=max>temp2?temp1:temp2;
	}
	printf("%d %d",min, max);
	return 0;
}

