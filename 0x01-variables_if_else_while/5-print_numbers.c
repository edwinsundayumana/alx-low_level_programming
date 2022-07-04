#include <stdio.h>
/**
 * main - Print all single digit numbers from base 10 starting to 0
 * Return: Always 0
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
	printf("%d", num);

printf("\n");
return (0);
}
