#include <stdio.h>
#include <math.h>

double mod (double a)
{
	return (a<0)?-a:a;
}


double factorial(int n)
{
	double result=1;
	for (int i = 1; i <=n; i++)
	{
		result*=i;
	}
	return result; 
}

double power ( double n, int p)
{
	double result=1;
	for (int i = 1; i <= p; ++i)
	{
		result*=n;
	}
	return result;
}   

const float PI=3.1415926535;

double sinus(double x)
{
	
	double sinx = x;
	int count1=1;
	int count2=3;
	double sum=0.0;
	do
	{
		sum+=sinx;
		sinx= (power((-1),count1)*power (x, count2))/factorial(count2);
		count2=count2+2;
		count1++;
	} while ((mod (sinx) )>0.001);
	{
		return sum;
	}	
}


int main()
{
	double x;
	scanf ("%lf", &x );
	x*=PI/180.0;
	printf("%.3f", sinus(x));
	return 0;
}

