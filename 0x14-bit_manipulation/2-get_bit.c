#include "main.h"
#include <stdio.h>

/**
 * get_bit - a function that returns the value of bit at given index.
 * @n: num to evaluate
 * @index: which to check
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	res = n & div;
	if (res == div)
		return (1);

	return (0);
}
