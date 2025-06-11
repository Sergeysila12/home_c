
#include <stdio.h>


void input (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &arr[i]);
	}
}


void sort_array(int size, int a[])
{
	int temp;
	while (size-=1)
	{
	int swapped =0;
	for (int i = 0; i < size; i++)
	{
		if (a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			swapped=1;
		}
	}
	if (swapped==0) break;
	}
}


void print (int* a, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d\t",  a[i]);
	}
}


int main(int argc, char **argv)
{
	int a[10];
	input (a, 10);
	sort_array(10,a);
	
	print ( a, 10);
	
	
	return 0;
}

