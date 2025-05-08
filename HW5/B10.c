
#include <stdio.h>

int main()
{
	int a,temp1=0,temp2=0, count1=0, count2=0;
	scanf ("%d", &a);
	while (a!=0){
		temp1=a%10;
		a=a/10;
		temp2=a%10;
		if(temp2<temp1) 
		{
		++count1;
	    }
	    ++count2;
	}
	if (count2==count1) printf("YES");
	else printf("NO");
	return 0;
}

