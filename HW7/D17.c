/*
Функция Аккермана
Функция Аккермана определяется рекурсивно для неотрицательных целых чисел 
m и n следующим образом:

Функция Аккермана — Википедия 
Реализуйте данную функцию по прототипу
int akkerman(int m, int n)

 * 
 * 
 */


#include <stdio.h>

int Akkerman(int m, int n);

int main()
{
	int m, n;
	scanf ("%d%d", &m,&n );
	printf("%d", Akkerman( m, n));
	return 0;
}

int Akkerman(int m, int n)
{
	  if (m == 0)
    {
        return n + 1;
    }
    else if (n == 0 && m > 0)
    {
        return Akkerman(m - 1, 1);
    }
    else if (m>0&&n>0)
    {
        return (Akkerman(m - 1, Akkerman(m, n - 1)));
    }
}
