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
	
	int array_int[SIZE]={0};
	int flag=0;
	int j=0;
	
	
	
	for (int i = 0; i < size; i++)
	{
		//printf("buf[i]=%c\t", buf[i]);
		if (buf[i]>='0'&&buf[i]<='9'&&buf[i+1]>='0'&&buf[i+1]<='9')
		{
			if (flag)
			{
				array_int[j]*=10;
			}
			flag=1;
			array_int[j]+=(buf[i]-0x30)*10;
			
			//printf("flag=1 array_int[j]=%d\n", array_int[j]);
		}
		else if (buf[i]>='0'&&buf[i]<='9'&&(buf[i+1]<'0'||buf[i+1]>'9'))
		{
			flag=0;
			array_int[j]+=(buf[i]-0x30);
			
			//printf("flag=0 array_int[j]=%d\n", array_int[j]);
			j++;
		}

	}
	 
	 int size1 = j;
	// printf("size1=%d \n ", size1 );
	 int min=array_int[0];
	 int tempror;
	 int k=0;
	 int index=0;
	 flag=0;
	 
	f=fopen("output.txt", "w");
	 
	for (int i = 0; i < size1; i++)
	{
		//printf("i=%d, array_int[i]=%d do min=%d  ", i, array_int[i], min );
		
		if (min>array_int[i])
		{
			min=array_int[i];
			index=i;
			flag=1;
			//printf("array_int[i]=%d  index=%d\t", array_int[i], index);
		}
		//printf(" k=%d , min=%d \n ", k, min  );
		if (size1-1==i)
		{
			//printf("min=%d\n", min);
			//printf("i=%d\t", i);
			
			
			tempror=array_int[k];
			array_int[k]=min;
			if (flag)
			{
				array_int[index]=tempror;
				flag=0;
			}
			
			
			k++;
			min=array_int[k];
			i=k;
			//printf("min=%d\t", min);
		}
		
		if (k==size1-1)
		{
			break;
		}
	
	}
	
	for (int i = 0; i < size1; i++)
	{
		fprintf(f,"%d\t", array_int[i]);
		//printf("i=%d array_int[i]=%d\n ", i, array_int[i] );
		
	}
	
	
	
	fclose(f);
	
	return 0;
}

