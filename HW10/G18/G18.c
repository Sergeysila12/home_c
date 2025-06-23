
#include <stdio.h>
#include <string.h>
#define SIZE 1100





int main(int argc, char **argv)
{
	FILE *f;
	
	char buf[SIZE]={0};
	char temp;
	
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
	
	f=fopen("output.txt", "w");
	
	int flag=0;
	
	for (int k = 0; k < size; k++)
	{
		if (buf[k]==0x20&&!flag)   //||buf[k]!=0x20&&buf[k+1]==0x20)
		{
			continue;
		}
		if (buf[k]==0x20&&flag)
		{
			flag=0;
		}
		else
		{
			flag=1;
		}
		
		fprintf(f, "%c", buf[k]);

	}
	fclose(f);
	
	
	
	
	return 0;
}

