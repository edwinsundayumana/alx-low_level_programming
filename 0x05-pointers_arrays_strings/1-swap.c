#include "main.h"

/**
 * swap_int - swap the values of two integers a and b
 * @a: A pointer is to an int that is to be updated
 * @b: B pointer is to an int that will be updated
 * Return:  void that means the answer is correct
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
