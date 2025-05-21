/*
 Написать рекурсивную функцию возведения целого числа n в степень p.
int recurs_power(int n, int p)
Используя данную функцию, решить задачу.
 * 
 * 
 */


#include <stdio.h>

//int temp=1;

int recurs_power(int n, int p, int temp)
{
	//printf("%5d%5d",  p, n );
	
	//~ if ( p>0&&(p%2)==0)
	//~ {
		//~ n*=n;
		//~ recurs_power( n, p-2, temp  );
	//~ }
	if (p>1)
	{
		n*=temp;
		//printf("%5d",  p );
		recurs_power( n, p-1, temp );
	}
	else if (p==0) return 1;
	else return n;

}

int main()
{
	int n;
	int p;
	scanf ("%d%d", &n, &p);
	int temp=n;
	printf("%d", recurs_power( n, p, temp ));
	return 0;
}

