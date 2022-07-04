#include <stdio.h>

/**
 * main - Prints the lowercasse alphabet in reverse
 * Return: always 0
 */

int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);
putchar('\n');
return (0);
}
