

#include <stdio.h>

#include <string.h>
#include <stdlib.h>

#define SIZE 1000



int is_palindrom(char buf[],int size)
{
	//~ printf( "size=%d\n",size );
	int flag=1;
	for (int i = 0, j=size-1 ; i != j; i++, j--)
	{
		//printf( "i=%d  j=%d\n",i, j );
		if (buf[i]!=buf[j])
		{
			//~ printf( "i=%d  j=%d\n",i, j );
			//~ printf( "buf[i]=%c\n",buf[i] );
			flag=0;
			break;
		}
		if (j==i+1)
		{
			break;
		}
	}
	//printf( "flag=%d\n",flag );
	if (flag)
	{
		return 1;
	}
	else
	{
		return 0;
	}
} 


int main( )
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
	//printf( "size=%d\n",size );
	f=fopen("output.txt", "w");
	
	is_palindrom(buf,size)?fprintf(f, "YES"):fprintf(f, "NO");
	fclose(f);
	
	return 0;
}

