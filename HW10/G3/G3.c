

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100


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
		//printf("buf[i]=%c\n", buf[i]);
	}
	//fscanf(f, "%s", buf);
	buf[i]='\0';
	
	fclose(f);
	

	int size=strlen(buf)-1;
	f=fopen("output.txt", "w");
	
	
	
	//printf("buf[size]=%c\n", buf[size]);
	
	for (int i = 0; i < size; i++)
	{
		//printf("i=%d\t", i);
		
		//printf("buf[i]=%c\t", buf[i]);
		
		if (buf[i]== buf[size])
		{
			fprintf(f,"%d\t", i);
		}
	}

	fclose(f);
	
	return 0;
}

