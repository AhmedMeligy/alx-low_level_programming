#include "main.h"
/**
 * _isupper - check if upper
 * @c: check c
 * Return: 1 if upper or 0 otherwise
 */
int _isupper(int c)
{
	char alp;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
