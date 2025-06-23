


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 1001


int main(int argc, char **argv)
{
	FILE *f;
	
	char buf[SIZE]={0};
	char temp;
	char result[SIZE]={'\0'};
	
	f=fopen("input.txt", "r");
	int i=0;
	
	while ((fscanf(f, "%c", &temp)==1)&&temp!=EOF&&temp!='\n')
	{
		buf[i]=temp;
		
		i++;
	}
	buf[i]='\0';
	
	fclose(f);
	int size=strlen(buf);
	int flag=1;
	//int count=0;
	
	int k=0;
	
	f=fopen("output.txt", "w");
	
	for (int i = 0; i < size; i++)
	{
		flag=1;
		if (buf[i]==0x20)
		{
			continue;
		}
		for (int j = 0; j < size; j++)
		{
			if (buf[i]==buf[j]&&i!=j)
			{
				for (int z = 0; z < k; z++)
				{
					if (buf[i]==result[z])
					{
						flag=0;
					}
				
				}
				if (flag)
				{
					result[k]=buf[i];
					k++;
					flag=0;
				}
				
			}
		}
		if (flag)
		{
			result[k]=buf[i];
			k++;
		}
	}
	
	int length=k;
	
	for (int i = 0; i < length; i++)
	{
		fprintf(f,"%c", result[i]);
	}
	
	fclose(f);
	
	return 0;
}

