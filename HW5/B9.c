#include <stdio.h>

int main()
{
	int a,temp=0, count1=0,count2=0;
	scanf ("%d", &a);
	while (a!=0){
		temp=a%10;
		if(temp%2==0) ++count1;
		a=a/10;
		++count2;
	}
	if (count1==count2) printf("YES");
	else printf("NO");
	return 0;
	
}

