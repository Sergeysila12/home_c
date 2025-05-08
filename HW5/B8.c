#include <stdio.h>

int main()
{
	int a,temp=0, count=0;
	scanf ("%d", &a);
	while (a!=0){
		temp=a%10;
		if(temp==9) ++count;
		a=a/10;
	}
	if (count==1) printf("YES");
	else printf("NO");
	return 0;
}

