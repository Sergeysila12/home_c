
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100


int main()
{
	FILE *f;
	
	char buf[SIZE]={0};
	char temp;
	char add[10]=".html";
	//~ char ext[]=".com";
	//~ char bufferForExt[4]={0};
	
	
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
	//~ int size_ext=strlen(ext);
	
	
	//~ for (int i = size-size_ext, j=0; i < size; i++)
	//~ {
		//~ bufferForExt[j]=buf[i];
		
		//printf("bufferForExt[j]=%c\t", bufferForExt[j]);
	//~ }
	
	//printf("buf[size-8]=%c\n", buf[size-8]);
	
	if (buf[size-4]=='.')
	{
		for (int k = size-4, z=0; k < size+5; k++, z++)
		{
			buf[k]=add[z];
			
			//printf("buf[k]=%c\t", buf[k]);
		}
	}
	else if (buf[size-2]=='.')
	{
		for (int k = size-2, z=0; k < size+5; k++, z++)
		{
			buf[k]=add[z];
		}
	}
	else if (buf[size-8]=='.'&&buf[size-7]=='n')
	{
		for (int k = size-8, z=0; k < size+8; k++, z++)
		{
			buf[k]=add[z];
		}
	}
	else if (buf[size-4]!='h')
	{
		strcat(buf,add); 
	}
	
	f=fopen("output.txt", "w");
	
	int Ne=strlen(buf);
		
	for (int n = 0; n < Ne; n++)
	{
		fprintf(f, "%c", buf[n]);
	}
	
	fclose(f);
	
	
	return 0;
}

