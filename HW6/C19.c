#include <stdio.h>


char c;
int is_digit(char c)
{
	
	int sum=0;
	
	while ((c=getchar())!='\n')
	{
		if(c>='0'&&c<='9')
		{
			sum+=c-0x30;
		}
	}
	return printf ("%d", sum);
}

int main()
{
	is_digit(c);
	return 0;
}

