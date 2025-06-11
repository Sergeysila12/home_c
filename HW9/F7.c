#include <stdio.h>



int compression(int a[],int b[], int N)
{
	int flag;
	int adress=0;
	int i=0;
	int count0=0;
	int count1=0;
	
	if (*(a+i)==1)
		{
			count1++;
			b[0]=0;
			adress++;
			i++;
			flag=0;
		}
	else if (a[0]==0)	
		{
			count0++;
			i++;
			flag=0;
			b[0]=count0;
		}
	
	for (;i < N; i++)
		{
			if ((*(a+i)==0&&*(a-1+i)==1))
			{
				flag=1;
				count0=0;
				adress+=1;
			} 
			if ((*(a+i)==1&&*(a-1+i)==0))
			{
				flag=1;
				count1=0;
				adress+=1;
			} 
			
			if(*(a+i)==0&&flag)
			{
				
				count0++;
				*(b+adress)=count0;
				flag=0;
			}	
			if(*(a+i)==0&&flag==0)
			{
				count0++;
				*(b+adress)=count0;
			}	
			
			
			if(*(a+i)==1&&flag)
			{
				
				count1++;
				*(b+adress)=count1;
				flag=0;
			}	
			if(*(a+i)==1&&flag==0)
			{
				count1++;
				*(b+adress)=count1;
			}	
				
		}
		return 0;
}



void input (int* a, int length)
{
	for (int i = 0; i < length; i++)
	{
		scanf ("%d", &a[i]);
	}
	
	
}
void print (int* b, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d\t",b[i]);
	}
}

int main()
{
	
int a[20];

int b[10];
	
input (a, 10);


compression( a, b, 20);

print ( b, 10);
	
return 0;
}

