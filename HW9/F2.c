
#include <stdio.h>


void input (int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &arr[i]);
	}
}


void sort_even_odd( int n,int a[])
{
	int temp;
	while (n-=1)
	{
	int swapped =0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]%2!=0&&a[i+1]%2==0)
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			swapped=1;
		}
		//~ else if (a[i]%2!=0&&a[i+1]%2!=0)
		//~ {
			//~ for (int j = i+2; j < n; j++)
			//~ {
				//~ if (a[j]%2==0)
				//~ {
					//~ temp=a[i];
					//~ a[i]=a[j];
					//~ a[j]=temp;
					//~ swapped=1;
				//~ }
			//}
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
	sort_even_odd(10,a);
	
	print ( a, 10);
	
	
	return 0;
}
