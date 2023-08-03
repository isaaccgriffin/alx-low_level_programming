#include <unistd.h>

/**
 * _putchar -a function that  writes the char to stdout
 * @c: output
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
