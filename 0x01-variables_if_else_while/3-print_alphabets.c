#include <stdio.h>
/**
 * main - print alpha
 * Return = 0 (sucess)
 */
int main(void)
{
char alp[54] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 54; i++)
{
	putchar(alp[i]);
}
putchar('\n');
return (0);
}
