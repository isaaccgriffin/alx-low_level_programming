#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @index: index position to change, starting from 0
 * @n: decimal number
 * Return: 1 if it worked, or -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
