
#include <stdio.h>

int main()
{
   int a, temp1=0;
	scanf ("%d", &a);
	int number=a;
	while (a!=0)
	{
		temp1=a%10;
		number=a;
		while (number!=0)
		{
			number=number/10;
			
		if ((number%10)!=temp1) {
			continue;
		}
		break;
	    }
	    if(number%10==temp1) {
			break;
		}
		a=a/10;
	}
	if (a==0) printf("NO");
	else printf("YES");
	
	return 0;
}

