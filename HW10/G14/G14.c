
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100

int main(int argc, char **argv)
{
	FILE *f;
	
	char buf[SIZE]={0};
	char temp;
	char Name[SIZE]={0};
	char Surname[SIZE]={0};
	char Greet[SIZE]="Hello, ";

	
	f=fopen("input.txt", "r");
	int n=0;
	
	while ((fscanf(f, "%c", &temp)==1)&&temp!=EOF&&temp!='\n')
	{
		buf[n]=temp;
		n++;
	}
	buf[n]='\0';
	fclose(f);
	
	//int size=strlen(buf);
	
	int i=0;
	int j=0;
	do
	{
		Surname[i]=buf[i];
		//printf("  Surname[i]=%c", Surname[i]);
		i++;
	} 
	while (buf[i]!=0x20);
	
	Surname[i]='!';
	
	int z=i+1;
	//printf("  z=%d", z);
	for (; buf[z]!= 0x20; z++)
	{
		Name[j]=buf[z];
		//printf("  Name[j]=%c", Name[j]);
		j++;
	}
	Name[j]=0x20;

	strcat(Greet,strcat( Name, Surname )); 
	//strcat(Greet, Surname); 
	
	f=fopen("output.txt", "w");
	
	int Ne=strlen(Greet);
		
	for (int k = 0; k < Ne; k++)
	{
		fprintf(f, "%c", Greet[k]);
	}
	
	fclose(f);
	
	
		
	return 0;
}

