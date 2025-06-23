
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 1001


int main(int argc, char **argv)
{
	FILE *f;
	
	char buf[SIZE]={0};
	char result[1350]={0};
	char temp;
	char newLine[]="Ling";
	
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
	int countSim=0;
	
	int k=0;
	
	for (int i = 0; i <= size; i++)
	{
		
		if (countSim==0x113)
		{
			for (int g = k-3; g < k; g++)
			{
				result[g]='\0';
			}
			k++;	
			strcat(result, newLine);
			countSim=0;
		}
	
		switch (buf[i])
		{
			case 'C':
				countSim=0x43;
				break;
			case 'a':

				countSim+=0x61;
				break;
			case 'o':
				countSim+=0x6F;
				break;
				
			default:
				countSim=0;
				break;
		}
		switch (countSim)
		{
			case 67:
				break;
			case 164:
				break;
			case 275:
				break;
			default:
			countSim=0;
				break;
		}
		result[k]=buf[i];
		k++;
	}
	
	f=fopen("output.txt", "w");
	
	int Ne=strlen(result);
		
	for (int k = 0; k < Ne; k++)
	{
		fprintf(f, "%c", result[k]);
	}
	fclose(f);
	
	return 0;
}

