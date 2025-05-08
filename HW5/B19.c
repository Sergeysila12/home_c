#include <stdio.h>

int main()
{
	int a,temp=0;
	scanf ("%d", &a );
	while (a>0) 
	{
		temp+=a%10;
		a=a/10;
	}
	(temp==10)? printf("YES"):printf("NO");
	return 0;
}

