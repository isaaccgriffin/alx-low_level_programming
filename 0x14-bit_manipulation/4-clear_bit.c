#include "main.h"
#include <stdio.h>

/**
 * clear_bit - a function that sets the value of bit to 0 at given index
 * @n: pointer to decimal number to change
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
