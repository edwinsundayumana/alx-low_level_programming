#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that generates random valid passwords for the program
 * Decription: Program to randomly generates password
 * Return: nothing
 */

int main(void)
{
	int pass, sum;

	srand(time(0));

	sum = 0;
	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);
	return (0);
}
