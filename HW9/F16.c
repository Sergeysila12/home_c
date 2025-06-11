
#include <stdio.h>
#include <string.h>




void function (char* s)
{
	int first_SB=s[0]-0x40;
	int second_SB=s[1]-0x30;
	if ((first_SB%2>0&&second_SB%2>0)||(first_SB%2==0&&second_SB%2==0))
	{
		printf("BLACK");
	}
	else
	{
		printf("WHITE");
	}
	
	
}

int main()
{
	char s[4];
	
	scanf("%s", s);
	function ( s);
	
	return 0;
}

