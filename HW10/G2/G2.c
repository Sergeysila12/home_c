#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 256


int main()
{
	FILE *f;
	char buf[SIZE];
	
	int N;
	f=fopen("input.txt", "r");
	
	fscanf(f, "%d", &N);
	fclose(f);
	int j=0;
	int k=1;
	int i=0;
	for (; i < N; i++)
	{
		if (i%2==0)
		{
			buf[i]=k+0x40;
			k++;
		}
		else
		{
			if(j>=8)
			{
				j-=8;
			}
			j+=2;
			buf[i]=j+0x30;
		
		}
	}
	//~ i++;
	//~ buf[i]="\0";
	
	//printf("%d\n",N );
	
	f=fopen("output.txt", "w");
	fprintf(f,"%s", buf);
	
	fclose(f);
	
	//~ for (int i = 0; i < N; i++)
	//~ {
		//~ printf ("%c\t", buf[i]);
	//~ }
	
	
	
	return 0;
}
