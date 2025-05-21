
#include <stdio.h>

//Составить рекурсивную функцию, Выведите все числа от A до B включительно, в порядке возрастания, если A < B, или в порядке убывания в противном случае. 

void print_num(int a, int b )
{
	if (a<b)
	{
	printf("%3d", a);
	print_num(a+1,b);
	}
	if (a>b)
	{
	printf("%3d", a);
	print_num(a-1,b);
	}
	else if (a==b) printf("%3d", a);
}

int main()
{
	int a, b;
	scanf ("%d%d", &a, &b );
	print_num(a, b);
	return 0;
}
