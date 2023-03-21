#include <stdio.h>
/**
 * main - print alpha rev
 * Return: 0 (sucess)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
