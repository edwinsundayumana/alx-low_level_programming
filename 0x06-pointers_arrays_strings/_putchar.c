/**
 * _putchar - writes the charcter c to stdout
 * @c: the charcater to print
 * Return: on Suceess 1
 * On error, -1 is returned, and error is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
