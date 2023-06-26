#include <stdio.h>

/**
 * swap_int - It swaps the values of two integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
/* function that swaps the values of two intergers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
