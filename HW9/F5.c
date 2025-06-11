#include <stdio.h>



int find_max_array(int size, int a[])
{
	int max=a[0];
	for (int i = 0; i < size; i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
	}
	return max;
}

int main()
{
	int a[10];
	//int i=0;
	//~ while ((c=getchar())!='\n')
	//~ {
		//~ a[i]=c;
		//~ i++;
		//~ //printf ("%d  %s\n",i, s);
	//~ }
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", a[i]);
	}
	
	
	printf ("%d\n",find_max_array(10, a));
	
	
	return 0;
}

