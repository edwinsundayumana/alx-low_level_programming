#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100follows by a new line
 * for multiple of 3 print Fizz
 * for multiple of 5 print Buzz
 * for multiple or 3 and 5 print FizzBuzz
 * Return: return 0
 */

int main(void)
{
	int p = 100;
	int i;

	i = 1;
	while (i <= p)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < p)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
		{
			printf("%i ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
