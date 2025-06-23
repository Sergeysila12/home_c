
#include <stdio.h>
#include <string.h>
#define SIZE 1100
//#define ALPHABET 26





void swap_array (int* arr, int i, int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
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
	


void make_palindrom (int* arr, int* result, int length, int countpair, int countsim )
{
	int flag=1;
	//int flag=1;
	//printf( "even=%d length=%d \n", even, length);
	

	if (countpair>=1&&countsim>=1)
	{
	for (int i = 0,z=0, j=countpair*2; i < length&&z!=j; i++)
		{
			//printf( "i=%d\n", i );
			if (arr[i]==arr[i+1])
			{
				result[z]=arr[i];
				//printf( "result[i]=%c i=%d\n", result[i]+0x61,i );
				
				result[j]=arr[i];
				//printf( "result[j]=%c j=%d\n", result[j]+0x61,j );
				i++;
				j--;
				z++;
			}
		   else if (flag&&arr[i]!=arr[i+1])
			{
				result[countpair]=arr[i];
				flag=0;
			}

		}
	}
	
	else if (countpair>=1&&countsim==0)
	{
			for (int i = 0,z=0, j=countpair*2; i < length&&z!=j; i++)
		{
			//printf( "i=%d\n", i );
			if (arr[i]==arr[i+1])
			{
				result[z]=arr[i];
				//printf( "result[i]=%d i=%d\n", result[i],i );
				result[j]=arr[i];
				i++;
				j--;
				z++;
			}

		}
	}
	if (countpair==0&&countsim>=1)
	{
		result[0]=arr[0];
	}


	
}






int main(int argc, char **argv)
{
	
	
	FILE *f;
	
	int buf[SIZE]={0};
	int result[SIZE]={0};
	
	char temp;
	
	f=fopen("input.txt", "r");
	int n=0;
	
	while ((fscanf(f, "%c", &temp)==1)&&temp!=EOF&&temp!='\n')
	{
		buf[n]=(int)temp-0x61;
		n++;
	}
	buf[n]='\0';
	
	fclose(f);
	
	int size=n;
	
	sort_array (size, buf);
	
	for (int i = 0; i < size; i++)
	{
		printf("buf[i]=%c i=%d \n", buf[i]+0x61,i );
	}
	
	int countpair=0;
	int countsim=0;
	for (int i = 0; i < size; i++)
	{
		if (buf[i]==buf[i+1])
		{
			countpair++;
			i++;
			
		}
		else
		{
			countsim++;
			
		}
	}
	//printf("countpair=%d\n", countpair);
	//printf("countsim=%d\n", countsim);
	
	make_palindrom (buf, result, size, countpair, countsim);
	
	//printf("finish result[1]=%c\n", result[1]+0x61);
	
	f=fopen("output.txt", "w");
	
	
	for (int k = 0; k < countpair*2+1; k++)
	{
		//printf("buf[k]=%c\n", buf[k]+0x61);
		
		//printf("finish result[k]=%c k=%d\n", result[k]+0x61, k);
		fprintf(f, "%c", result[k]+0x61);
	}
	fclose(f);
	
	return 0;
}

