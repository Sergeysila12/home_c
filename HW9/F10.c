#include <stdio.h>
#include <string.h>


#define SIZE 1000



void replace (char s[],char array[])
{
	int i=0;
	int j=0;
	int countSymbol=1;
	char digit1;
	char digit2;
	while (1)
	{
		if (countSymbol<=9)
		{
			if (countSymbol==1)
			{
				array[j]=s[i];
				j++;
			}
			if (s[i]=='.')
			{
				array[j]=countSymbol+0x30;
				j++;
				array[j]='.';
			break;
			}
			if (s[i]==s[i+1])
			{
				countSymbol++;
			}
			else
			{
				array[j]=countSymbol+0x30;
				countSymbol=1;
				j++;
			}
		}
		else if (countSymbol>9)
		{
			digit1=(countSymbol/10)+0x30;
			digit2=(countSymbol%10)+0x30;
		
			if (s[i]=='.')
			{
				array[j]=digit1;
				j++;
				array[j]=digit2;
				j++;
				array[j]='.';
				break;
			}
			if (s[i]==s[i+1])
			{
				countSymbol++;
			}
			else
			{
				array[j]=digit1;
				j++;
				array[j]=digit2;
				countSymbol=1;
				j++;
			}
		}
		i++;
	}
}

void print (char array[])
{
	int i=0;
	while (array[i]!='.')
	{
		printf("%c",array[i]);
		i++;
	}
}

int main()
{
	char s[SIZE];
	
	scanf("%s", s);
	
	char array[SIZE];
	
	replace(s,array);
	
	print (array);

	return 0;
}

