#include <stdio.h>



int main()
{
	char c;
	int count;
	int flag=0;
	while ((c=getchar())!='.')
	{
		
		if(c=='(')
		{
			count++;
			flag=0;
		}
		else if(c==')')
		{
			count--;
			flag=1;
		}
	}
	count==0&&flag==1?printf ("YES"):printf ("NO") ;
	return 0;
}

