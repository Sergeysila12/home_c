
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



#define SIZE 256


int main()
{
FILE *f;
	
	char c[SIZE]={0};
	char a;
	
	f=fopen("input.txt", "r");

	//fscanf(f, "%s", c); слово
	int i=0;
	while((a = getc(f)) != '\n' && !feof(f))
	{
		c[i]=(char)a;
		i++;
	}
	c[i]='\0';
	fclose(f);
	
	int size=strlen(c);
	
	f=fopen("output.txt", "w");
	fprintf(f,"%s, %s, %s %d", c, c, c, size);

	
	fclose(f);

	return 0;
}

