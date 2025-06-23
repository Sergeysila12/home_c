
#include <stdio.h>
#include <string.h>


#define SIZE 1100



void swap(char* val1, char* val2)
{
    char temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}


int main(int argc, char **argv)
{
	FILE *f;
	
	char buf[SIZE]={0};
	//char result[SIZE]={0};
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
	int index=0;
	int count=0;
	int flag=1;
	
	int changed=0;
	
	int size=strlen(buf);
	
	for (int i = 0, j=1; i <= size&&j < size; i++, j++)
	{
		//printf( "begin buf[i]=%c buf[j]=%c index=%d i=%d j=%d\n", buf[i], buf[j], index, i, j );
		if (buf[i]==0x20)
		{
			count++;
			if (size-1==j&&buf[j]!=0x20&&changed)
			{	
				//printf( "buf[index]=%c buf[j]=%c index=%d i=%d j=%d\n", buf[index], buf[j], index, i, j );
				swap( &buf[index], &buf[j]);
				break;
			}
			continue;
		}
		if (count>0&&buf[j]!=0x20&&changed)
		{
			swap( &buf[index], &buf[i]);
			count=0;
			flag=0;
			changed=0;
		}
		else if (count>0&&buf[j]==0x20&&changed)
		{
			swap( &buf[index], &buf[i]);
			i++;
			j++;
			count=0;
			flag=0;
			changed=0;
		}
		
		if (buf[j]!=0x20&&flag)
		{
			swap(&buf[i], &buf[j]);
			i++;
			j++;
			flag=1;
		}
		else if (buf[j]==0x20&&flag)
		{
			index=i;
			changed=1;
		}
		flag=1;


		//printf( "end buf[i]=%c buf[j]=%c index=%d i=%d j=%d\n", buf[i], buf[j], index, i, j );
	}
	f=fopen("output.txt", "w");
	
	//int Ne=strlen(result);
		
	for (int k = 0; k < size; k++)
	{
		
	
	 fprintf(f, "%c", buf[k]);
		
		
	}
	fclose(f);
	
	return 0;
}

