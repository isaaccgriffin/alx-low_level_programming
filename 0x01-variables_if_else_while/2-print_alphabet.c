#include <stdio.h>

/**
 * main - A program in c that prints lowercase alphabets
 * Return: Always 0 (Success)
 */

int main(void)

{
	char C;

	for (C = 'a'; C <= 'z'; C++)
	putchar(C);
	putchar('\n');
	return (0);
}
