
#include <stdio.h>


int	count_between(int from, int to, int size, int a[])
{
	int count=0;
	for (int i = 0; i < size; i++)
	{
		if (from<=a[i]&&to>=a[i])
		{
			count++;
		}
	}
	return	count;
}

int main(int argc, char **argv)
{
	
	return 0;
}

