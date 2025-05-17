#include <stdio.h>

int grow_up (int n)
{
	int temp1=0;
	int temp2=0;
	int temp3=n;
	do  
	{
		temp1=n%10;
		n=n/10;
		temp2=n%10;
		if (temp2>temp1)
		{
			return printf("NO");
		}
	}
	while (n>0);
	{
		temp1=temp3%10;
		temp3=temp3/10;
		temp2=temp3%10;
		if (temp2==temp1&&temp2!=0)
		{
			return printf("NO");
		}
		return printf("YES");
	}
}


int main()
{
	int a;
	scanf ("%d", &a);
	grow_up (a);
	return 0;
}

