#include <stdio.h>

int main()
{
	int a, temp=0;
	scanf ("%d", &a);
	while (a!=0)
	{
		if ((a%10)==temp) {
			printf("YES");
			break;
		}
		temp=a%10;
		a=a/10;
	}
	if (a==0) printf("NO");
	
	return 0;
	
}

