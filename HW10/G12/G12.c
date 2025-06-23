
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 1001




int main(int argc, char **argv)
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
	
	for (int i = 0; i < size; i++)
	{
		if (buf[i]==0x20)
		{
			buf[i]='\n';
		}
	}
	
	
	f=fopen("output.txt", "w");
	
		
	
	for (int z = 0; z < size; z++)
	{
		if (buf[z-1]=='\n'&&buf[z]=='\n')
		{
			continue;
		}
		
		fprintf(f, "%c", buf[z]);
	}
	
	fclose(f);
	
	return 0;
}

