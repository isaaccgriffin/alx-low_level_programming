#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program in c that prints lowercase alphabets without q and e
 * Return: Always 0 (Success)
 */

int main(void)

{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a; low <= 'z'; low++)
	{
	if (low != e && low != q)
	purchar(low);
	}
	putchar('\n');
	return (0);
}
