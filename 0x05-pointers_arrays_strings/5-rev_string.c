#include "main.h"

/**
 * rev_string - prints a reverse string
 * @s: A pointer to an int that will be changed
 * Description: Reveses the string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	int j = 0;

	char temp[1000];

	while (s[i] != '\0')
	{
		i++;
	}
	for (; i > 0; i--)
	{
		temp[j] = s[i - 1];
		j++;
	}
	while (i < j)
	{
		s[i] = temp[i];
		i++;
	}
}
