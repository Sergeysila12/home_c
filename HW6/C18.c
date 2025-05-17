#include <stdio.h>

char c;
int is_digit(char c)
{
	int count=0;
	
	while ((c=getchar())!='\n')
	{
		if(c>='0'&&c<='9')
		{
			count++;
		}
	}
	return printf ("%d", count);
}

int main()
{
	is_digit(c);
	return 0;
}

