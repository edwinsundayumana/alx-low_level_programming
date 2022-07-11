#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase,followed by a line.
 *
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
