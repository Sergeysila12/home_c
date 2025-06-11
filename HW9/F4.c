#include <stdio.h>

void print_digit(char s[])
{
	int count=0;
	int count1=0;
	int count2=0;
	int count3=0;
	int count4=0;
	int count5=0;
	int count6=0;
	int count7=0;
	int count8=0;
	int count9=0;
	int i=0;
	while (s[i]!='\0')
	{
		
		switch (s[i]-0x30)
		{
		case 1:
			count1++;
			break;
		case 2:
			count2++;
			break;
		case 3:
			count3++;
			break;
		case 4:
			count4++;
			break;
		case 5:
			count5++;
			break;
		case 6:
			count6++;
			break;
		case 7:
			count7++;
			break;
		case 8:
			count8++;
			break;
		case 9:
			count9++;
			break;
		case 0:
			count++;
			break;
		default:
			break;
		}
		i++;
	}
	
	for (int i = 0; i < 10; i++)
	{
	
			switch (i)
		{
		case 1:
		if (count1>0)
		{
			printf("%d  %d\n",i, count1);
		}
			break;
		case 2:
		if (count2>0)
		{
			printf ("%d  %d\n",i, count2);
		}
			break;
		case 3:
		if (count3>0)
		{
			printf ("%d  %d\n",i, count3);
		}
			break;
		case 4:
		if (count4>0)
		{
			printf ("%d  %d\n",i, count4);
		}
			break;
		case 5:
		if (count5>0)
		{
			printf ("%d  %d\n",i, count5);
		}
			break;
		case 6:
		if (count6>0)
		{
			printf ("%d  %d\n",i, count6);
		}
			break;
		case 7:
		if (count7>0)
		{
			printf ("%d  %d\n",i, count7);
		}
			break;
		case 8:
		if (count8>0)
		{
			printf ("%d  %d\n",i, count8);
		}
			break;
		case 9:
		if (count9>0)
		{
			printf ("%d  %d\n",i, count9);
		}
			break;
		case 0:
		if (count>0)
		{
			printf ("%d  %d\n",i, count);
		}
			break;	
			
		default:
			break;
		}
	}	
}

int main( )
{
	char s[100], c;
	int i=0;
	while ((c=getchar())!='\n')
	{
		s[i]=c;
		i++;
		//printf ("%d  %s\n",i, s);
	}
	//scanf("%[0-9]", s);
	print_digit(s);
	return 0;
}
