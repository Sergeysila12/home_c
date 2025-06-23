
#include <stdio.h>
#include <string.h>
#define SIZE 1100




void is_palindrom(int arr[], int size)
{
	int countpair=0;
	int countsim=0;
	for (int i = 0; i < size; i++)
	{
		//printf( "i=%d arr[i]=%c \n", i, arr[i]+0x61);
		if (arr[i]==arr[i+1])
		{
			countpair++;
			i++;
			
		}
		else
		{
			countsim++;
			
		}
	}
	//printf("countpair=%d countsim=%d\n",countpair, countsim );
	
	if (countpair>=1&&countsim>=0)
	{
		if (countpair%2==0&&countsim%2==0)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
		
	}
	else if (countpair==0&&countsim>1)
	{
		printf("NO\n");
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


int main(int argc, char **argv)
{
	
	FILE *f;
	
	int buf[SIZE]={0};
//	char result[SIZE]={0};
	
	char temp;
	
	f=fopen("input.txt", "r");
	int n=0;
	int z=0;
	while ((fscanf(f, "%c", &temp)==1)&&temp!=EOF&&temp!='\n')
	{
		if (temp!=0x20)
		{
			buf[z]=(int)temp-0x61;
			z++;
			//printf("buf[n]=%c\n", buf[n]+0x61);
		}
		
		n++;
	}
	buf[z]='\0';
	fclose(f);
	int size=z;
	
	sort_array (size, buf);
	
	//~ for (int i = 0; i < size; i++)
	//~ {
		//~ printf("buf[i]= %c \n", buf[i]+0x61);
	//~ }
	
	is_palindrom(buf, z);
	
	
	return 0;
}

