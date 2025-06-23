



#include <stdio.h>

#include <string.h>
#include <stdlib.h>

#define SIZE 1001


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
	
	int Capital_letter=0;
	int Small_letter=0;
	
	f=fopen("output.txt", "w");
	
	for (int i = 0; i < size; i++)
	{
		if (buf[i]>='A'&&buf[i]<='Z')
		{
			Capital_letter++;
		}
		else if (buf[i]>='a'&&buf[i]<='z')
		{
			Small_letter++;
		}
	}
	fprintf(f,"%d   %d", Small_letter, Capital_letter);
	
	fclose(f);
	
	return 0;
}

