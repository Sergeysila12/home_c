#include <stdio.h>



int	sum_between_ab(int from, int to, int size, int a[])
{
	unsigned int sum=0;
	for (int i = 0; i < size; i++)
	{
		
		if (from<=a[i]&&to>=a[i]&&from<to)
			{
				sum+=a[i];
			}
			
		if (from>=a[i]&&to<=a[i]&&from>to)
				{
					sum+=a[i];
				}
	
	}
	return sum;
}

int main(int argc, char **argv)
{
	
	return 0;
}

