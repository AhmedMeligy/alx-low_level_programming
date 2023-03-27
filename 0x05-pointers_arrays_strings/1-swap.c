#include "main.h"
/**
 * swap_int - swap value of 2 int
 * @a: first int
 * @b: secont int
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
