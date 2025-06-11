
#include <stdio.h>

int count_bigger_abs(int n, int a[])
{
	int max=a[0];
	int count=0;
	int temp;
	
	for (int i = 0; i < n; i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
		if (i==n-1)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[j]<0)
				{
					temp=a[j]*(-1);
					if (temp>max)
					{
						count++;
					}
				}
			}
		}
	}
	return count;
}


int main(int argc, char **argv)
{
	
	return 0;
}

