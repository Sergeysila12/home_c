
#include <stdio.h>


void change_max_min(int size, int a[])
{
	int index_max=0;
	int index_min=0;
	int max=a[0];
	int min=a[0];
	
	for (int i = 0; i < size; i++)
	{
		if (max<a[i])
		{
			max=a[i];
			index_max=i;
		}
		if (size-1==i)
		{
			for (int j = 0; j < size; j++)
			{
				if (min>a[j])
				{
					min=a[j];
					index_min=j;
				}
				if (size-1==j)
				{
					a[index_min]=a[index_max];
					a[index_max]=min;
				}
			}
		}
	}
}

int main(int argc, char **argv)
{
	
	return 0;
}

