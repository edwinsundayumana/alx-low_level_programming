#include "main.h"

/**
 * _strlen - length of a string
 * @s: A pointe to an int that will be changed/update
 * Return: void that means our answer is correct
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
	u++;
	}
	return (u);
}
