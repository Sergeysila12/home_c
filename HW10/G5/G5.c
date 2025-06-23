
#include <stdio.h>

#include <string.h>
#include <stdlib.h>

#define SIZE 1000




int main()
{
	
	FILE *f;
	
	char buf[SIZE]={0};
	char temp;
	
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
	
	f=fopen("output.txt", "w");
	
	for (int i = 0; i < size; i++)
	{
		
		switch (buf[i])
		{
			case 'A':
				buf[i]='B';
				break;
			case 'B':
				buf[i]='A';
				break;
			case 'a':
				buf[i]='b';
				break;
			case 'b':
				buf[i]='a';
				break;
			default:
				break;
		}
		
		fprintf(f,"%c", buf[i]);
	}
	
	fclose(f);
	
	return 0;
}

