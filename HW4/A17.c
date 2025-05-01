
#include <stdio.h>

int main()
{
	int a;
	scanf ("%d", &a);
	if(a<4||a==12)printf("winter");
	else if (a<7) printf("spring");
	else if (a<9) printf("summer");
	else  printf("autumn");
	
	return 0;
}

