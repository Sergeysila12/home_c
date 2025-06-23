
#include <stdio.h>
#include <string.h>


#define SIZE 1001


int main(int argc, char **argv)
{
	FILE *f;
	
	char buf[SIZE]={0};
	char result[1350]={0};
	char temp;
	//char newLine[]="Ling";
	
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
		
		if (countSim==0x18A)
		{
			for (int g = k-4; g < k; g++)
			{
				result[g]='\0';
			}
			k--;	
			strcat(result, "Cao");
			countSim=0;
		}
	
		switch (buf[i])
		{
			case 'L':
				countSim=0x4C;
				break;
			case 'i':
				countSim+=0x69;
				break;
			case 'n':
				countSim+=0x6E;
				break;
			case 'g':
				countSim+=0x67;
				break;
				
			default:
				countSim=0;
				break;
		}
		switch (countSim)
		{
			case 0x4C:
				break;
			case 0xB5:
				break;
			case 0x123:
				break;
			case 0x18A:
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


