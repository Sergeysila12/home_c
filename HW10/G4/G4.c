
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100



int main()
{
	FILE *f;
	
	char buf[SIZE]={0};
	char result[SIZE]={'\0'};
	char temp;
	
		f=fopen("input.txt", "r");
	
	int i=0;
	int space_i;
	while ((fscanf(f, "%c", &temp)==1)&&temp!=EOF&&temp!='\n')
	{
		buf[i]=temp;
		if (temp==0x20)
		{
			space_i=i;
		}
		i++;
	}
	
	//printf("space_i=%d\t", space_i);
	
	
	buf[i]='\0';
	
	fclose(f);
	
	int size=strlen(buf);

	int count1=0;
	int n=0;
	
	
	f=fopen("output.txt", "w");
	
	for (int i = 0; i < space_i; i++)
	{
		for (int j = 0; j < space_i; j++)
		{
			if (buf[i]==buf[j]&&i!=j)
			{
				count1++;
			}
			if ((space_i-1==j)&&count1==0)
			{
				for (int k = space_i; k < size; k++)
				{
					if (buf[i]==buf[k])
					{
						count1++;
					}
					if (size-1==k&&count1==1)
					{
						result[n]=buf[i];
						//printf("buf[i]=%c\t", buf[i]);
						n++;
					}
				}
			}
		}
		count1=0;
	}
	result[n]='\0';
	int size_r=strlen(result);
	
	if (size_r==0)
	{
		fclose(f);
	}
	
	
	//printf("size_r=%d\t", size_r);
	
	
	if (size_r>1)
	{
		char min=result[0];
		int k=0;
		int index=0;
		for (int i = 0; i < size_r; i++)
		{
			if (min>result[i])
			{
			min=result[i];
			index=i;
			fprintf(f,"%c\t", result[index]);
			}
			
			if (size_r-1==i)
			{
				
			temp=result[k];
			result[k]=min;
			result[index]=temp;
			fprintf(f,"%c\t", result[index]);
			k++;
			min=result[k];	
			}
			
			if (k==size_r-1)
			{
				fprintf(f,"%c\t", result[k]);
			}
		}
	}
	else
	{
		fprintf(f,"%c\t", result[0]);
	}


	fclose(f);
	
	return 0;
}

