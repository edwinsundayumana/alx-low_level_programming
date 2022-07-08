#include "main.h"

/**
 * _isdigit - Checks if c is digit between 0 to 9
 * @c: character to be chechked
 * Return: 1 if c is digit , 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
