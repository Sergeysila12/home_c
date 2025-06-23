

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 1001

int main()
{
	FILE *f;
	
	char buf[SIZE]={0};
	char temp;
	//char resultMax[SIZE]={'\0'};
	char bufferForMax[SIZE]={0};
	
	
	f=fopen("input.txt", "r");
	int n=0;
	
	while ((fscanf(f, "%c", &temp)==1)&&temp!=EOF&&temp!='\n')
	{
		buf[n]=temp;
		n++;
	}
	buf[n]='\0';
	
	
	fclose(f);
	
	int size=strlen(buf);
	//printf("size=%d\n", size);
	int i=0;
	int j=0;
	int max=0;
	int k=0;
	//((i+j==size-1)&&i>max)
	while (i+j<=size)
	{
		//printf(" %c", buf[i+j]);
		
		if (*(buf+j+i)==0x20||i+j==size )
		{
			j+=i;
			//printf("j=%d\n", j);
			if (i>max)
			{
				max=i;
				//printf("max=%d\n", max);
				k=0;
				//i=0;
				while (max>k)
				{
					//printf("k=%d i=%d\t", k, i);
					bufferForMax[k]=buf[j-max+k];
					//printf("j-max+k=%d\n", j-max+k);
					k++;
					i++;
				}
				
			}
			
			i=0;
		}
		i++;
	}
	
	int length=strlen(bufferForMax);
	
	
	
	//printf("bufferForMax[0]=%c\n", bufferForMax[0]);
	
	f=fopen("output.txt", "w");
	
		
	
	for (int z = 0; z < length; z++)
	{
		if (bufferForMax[z]!=0x20 )
		{
			fprintf(f, "%c", bufferForMax[z]);
		}
		
	}
	
	fclose(f);
	
	
	return 0;
}

