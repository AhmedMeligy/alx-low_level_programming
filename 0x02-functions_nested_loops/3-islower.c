#include "main.h"
/**
 * _islower - check if lower
 * Return: 1 lower or 0 other
 * @c: is the char to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
