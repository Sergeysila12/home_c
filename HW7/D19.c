/*
Дана строка из английских символов, пробелов и знаков препинания.
 В конце строки символ точка. 
Необходимо реализовать рекурсивную функцию, которая считывает данную 
строку со стандартного потока ввода и возвращает целое число - количество символов
 'a' в данной строке.
int acounter(void)
Используя данную функцию решить задачу.
 * 
 * 
 */


#include <stdio.h>

int acounter(char c, int count)
{
	if (c!='.'&&c!='a')
	{
		c=getchar ();
		acounter(c, count);
	}
	
	else if (c=='a')
	{
		c=getchar ();
		acounter(c, count+1);
	}
	if (c=='.')return count;

	//return count;
}

int main()
{
	char c;
	int count=0;
	scanf ("%c", &c );
	printf("%d", acounter(c, count));

	return 0;
}

