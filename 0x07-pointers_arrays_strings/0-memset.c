#include "main.h"

/**
 * _memset - it fills the memory with a constant byte
 * @s: the pointer block of memory to fill
 * @b: the value to the set
 * @n: the byte of the memory
 * Return: returns dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*declaring for*/
	for (i = 0; i < n; i++)
	{
		*(s + 1) = b; /*add 1 postion s*/
	}
	/*ending for */
	return (s);
}
