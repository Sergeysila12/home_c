#include <stdio.h>

int main()
{
	int a;
	int count=10;
	int temp=0;
	scanf ("%d", &a );
	while (count<=a) 
	{
		 int temp2=0;
	     int temp3=1;
		++count;
		temp= count;
		while (temp>0)
		{
			temp2+=temp%10;
		    temp3*=temp%10;
		    temp=temp/10;
		}
		 if (temp3==temp2)printf("%d\t",count);
		
	}
	return 0;
}

