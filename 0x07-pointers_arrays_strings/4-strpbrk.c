#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: this is the C string to be scanned
 * @accept: ic the character in str1 that matches one of the characters in str2
 * Return: returns string s that matches any character specified in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0') /*Declaring WHILE*/
	{
		j = 0;
		while (accept[j] != '\0') /*Evaluating *accept */
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++; /*add j+1*/
		}
		s++; /*add s+1*/
	}
	return (0);
}
