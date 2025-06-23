
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 1001


int main()
{
	
	FILE *f;
	
	char buf[SIZE]={0};
	char temp;
	
	//char bufferForMax[SIZE]={0};
	
	
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
	
	int count=0;
	
	for (int i = 0; i < size; i++)
	{
		//printf("i=%d\n", i);
		
		if (size-1==i&&buf[i]=='a')
		{
			count++;
		}
		
		if (buf[i]==0x20)
		{
			if (buf[i-1]=='a')
			{
				count++;
			}
		}
	}
	
	f=fopen("output.txt", "w");
	
	fprintf(f, "%d", count);
	fclose(f);
	
	return 0;
}

