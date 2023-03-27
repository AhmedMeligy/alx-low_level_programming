#include "main.h"
/**
 * _strlen - calculate legnth of string
 * @s: string
 * Return: lengnth
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
