#include <stdio.h>

/**
 * _strlen - A function that returns the length of a string
 * @str: String to get the length of
 * Return: Length of @str.
 */
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
