#include "main.h"

/**
 * _puts - It prints a string
 * @str: String to print
 * Return: Void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)

	{
	_putchar(*str);
	}
	_putchar('\n');
}
